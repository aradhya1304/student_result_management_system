bool Database::addStudent(const Student& student) {

    if (!session) {
        cout << "Database is not connected." << endl;
        return false;
    }

    try {

        mysqlx::Schema db =
            session->getSchema(databaseName);

        mysqlx::Table students =
            db.getTable("students");

        students.insert(
            "name",
            "email",
            "phone",
            "course",
            "semester"
        )
        .values(
    student.getName(),
    student.getEmail(),
    student.getPhone(),
    student.getCourse(),
    student.getSemester()
)
        .execute();

        cout << "Student added successfully!" << endl;

        return true;

    }
    catch (const mysqlx::Error& error) {

        cerr << "Error adding student: "
             << error.what() << endl;

        return false;
    }
}