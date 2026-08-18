void Database::searchStudent(int studentId) {

    if (!session) {
        cout << "Database is not connected." << endl;
        return;
    }

    try {

        mysqlx::Schema db =
            session->getSchema(databaseName);

        mysqlx::Table students =
            db.getTable("students");

        mysqlx::RowResult result =
            students.select("*")
                    .where("student_id = :id")
                    .bind("id", studentId)
                    .execute();

        bool found = false;

        for (mysqlx::Row row : result) {

            found = true;

            cout << "\n======================================" << endl;
            cout << "          STUDENT FOUND" << endl;
            cout << "======================================" << endl;

            cout << "Student ID : "
                 << row[0].get<int>() << endl;

            cout << "Name       : "
                 << row[1].get<string>() << endl;

            cout << "Email      : "
                 << row[2].get<string>() << endl;

            cout << "Phone      : "
                 << row[3].get<string>() << endl;

            cout << "Course     : "
                 << row[4].get<string>() << endl;

            cout << "Semester   : "
                 << row[5].get<int>() << endl;

            cout << "======================================" << endl;
        }

        if (!found) {
            cout << "\nStudent with ID "
                 << studentId
                 << " was not found."
                 << endl;
        }

    }
    catch (const mysqlx::Error& error) {

        cerr << "Error searching student: "
             << error.what() << endl;
    }
}