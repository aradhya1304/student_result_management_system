#include "../include/Database.h"

#include <iostream>

using namespace std;

Database::Database() {
    host = "localhost";
    username = "root";
    password = "";
    databaseName = "student_result_db";
}

bool Database::connect() {

    try {

        session = make_unique<mysqlx::Session>(
            host,
            33060,
            username,
            password
        );

        cout << "Connected to MySQL successfully!"
             << endl;

        return true;
    }
    catch (const mysqlx::Error& error) {

        cerr << "MySQL Connection Error: "
             << error.what()
             << endl;

        return false;
    }
}

void Database::disconnect() {

    if (session) {

        session->close();
        session.reset();

        cout << "MySQL connection closed."
             << endl;
    }
}

bool Database::isConnected() const {
    return session != nullptr;
}


// ==========================================
// DISPLAY ALL STUDENTS
// ==========================================

void Database::displayStudents() {

    if (!session) {

        cout << "Database is not connected."
             << endl;

        return;
    }

    try {

        mysqlx::Schema db =
            session->getSchema(databaseName);

        mysqlx::Table students =
            db.getTable("students");

        mysqlx::RowResult result =
            students.select("*").execute();

        cout << "\n";
        cout << "========================================"
             << endl;

        cout << "          STUDENT RECORDS"
             << endl;

        cout << "========================================"
             << endl;

        bool found = false;

        for (mysqlx::Row row : result) {

            found = true;

            cout << "Student ID : "
                 << row[0].get<int>()
                 << endl;

            cout << "Name       : "
                 << row[1].get<string>()
                 << endl;

            cout << "Email      : "
                 << row[2].get<string>()
                 << endl;

            cout << "Phone      : "
                 << row[3].get<string>()
                 << endl;

            cout << "Course     : "
                 << row[4].get<string>()
                 << endl;

            cout << "Semester   : "
                 << row[5].get<int>()
                 << endl;

            cout << "----------------------------------------"
                 << endl;
        }

        if (!found) {

            cout << "No students found."
                 << endl;
        }
    }
    catch (const mysqlx::Error& error) {

        cerr << "Error reading students: "
             << error.what()
             << endl;
    }
}


// ==========================================
// ADD STUDENT
// ==========================================

bool Database::addStudent(
    const Student& student
) {

    if (!session) {

        cout << "Database is not connected."
             << endl;

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

        cout << "Student added successfully!"
             << endl;

        return true;
    }
    catch (const mysqlx::Error& error) {

        cerr << "Error adding student: "
             << error.what()
             << endl;

        return false;
    }
}


// ==========================================
// SEARCH STUDENT
// ==========================================

void Database::searchStudent(int studentId) {

    if (!session) {

        cout << "Database is not connected."
             << endl;

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

            cout << "\n";
            cout << "========================================"
                 << endl;

            cout << "            STUDENT FOUND"
                 << endl;

            cout << "========================================"
                 << endl;

            cout << "Student ID : "
                 << row[0].get<int>()
                 << endl;

            cout << "Name       : "
                 << row[1].get<string>()
                 << endl;

            cout << "Email      : "
                 << row[2].get<string>()
                 << endl;

            cout << "Phone      : "
                 << row[3].get<string>()
                 << endl;

            cout << "Course     : "
                 << row[4].get<string>()
                 << endl;

            cout << "Semester   : "
                 << row[5].get<int>()
                 << endl;

            cout << "========================================"
                 << endl;
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
             << error.what()
             << endl;
    }
}


// ==========================================
// UPDATE STUDENT
// ==========================================

bool Database::updateStudent(
    int studentId,
    const string& name,
    const string& email,
    const string& phone,
    const string& course,
    int semester
) {

    if (!session) {

        cout << "Database is not connected."
             << endl;

        return false;
    }

    try {

        mysqlx::Schema db =
            session->getSchema(databaseName);

        mysqlx::Table students =
            db.getTable("students");

        auto result =
            students.update()
                .set("name", name)
                .set("email", email)
                .set("phone", phone)
                .set("course", course)
                .set("semester", semester)
                .where("student_id = :id")
                .bind("id", studentId)
                .execute();

        if (result.getAffectedItemsCount() == 0) {

            cout << "Student with ID "
                 << studentId
                 << " was not found."
                 << endl;

            return false;
        }

        cout << "Student updated successfully!"
             << endl;

        return true;
    }
    catch (const mysqlx::Error& error) {

        cerr << "Error updating student: "
             << error.what()
             << endl;

        return false;
    }
}


// ==========================================
// DELETE STUDENT
// ==========================================

bool Database::deleteStudent(int studentId) {

    if (!session) {

        cout << "Database is not connected."
             << endl;

        return false;
    }

    try {

        mysqlx::Schema db =
            session->getSchema(databaseName);

        mysqlx::Table students =
            db.getTable("students");

        auto result =
            students.remove()
                .where("student_id = :id")
                .bind("id", studentId)
                .execute();

        if (result.getAffectedItemsCount() == 0) {

            cout << "Student with ID "
                 << studentId
                 << " was not found."
                 << endl;

            return false;
        }

        cout << "Student deleted successfully!"
             << endl;

        return true;
    }
    catch (const mysqlx::Error& error) {

        cerr << "Error deleting student: "
             << error.what()
             << endl;

        return false;
    }
}