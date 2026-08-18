void Database::displayStudents() {

    if (!session) {
        cout << "Database is not connected." << endl;
        return;
    }

    try {

        mysqlx::Schema db = session->getSchema(databaseName);

        mysqlx::Table students = db.getTable("students");

        mysqlx::RowResult result = students.select("*").execute();

        cout << "\n======================================" << endl;
        cout << "          STUDENT RECORDS" << endl;
        cout << "======================================" << endl;

        for (mysqlx::Row row : result) {

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

            cout << "--------------------------------------"
                 << endl;
        }
    }
    catch (const mysqlx::Error& error) {

        cerr << "Error reading students: "
             << error.what() << endl;
    }
}