#include "../include/Database.h"

#include <iostream>
#include <iomanip>

using namespace std;


// ==========================================
// CONSTRUCTOR
// ==========================================

Database::Database() {

    host = "localhost";

    username = "root";

    password = "";

    databaseName = "student_result_db";
}


// ==========================================
// CONNECT
// ==========================================

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


// ==========================================
// DISCONNECT
// ==========================================

void Database::disconnect() {

    if (session) {

        session->close();

        session.reset();

        cout << "MySQL connection closed."
             << endl;
    }
}


// ==========================================
// CONNECTION STATUS
// ==========================================

bool Database::isConnected() const {

    return session != nullptr;
}


// ==================================================
// STUDENT OPERATIONS
// ==================================================


// ==========================================
// DISPLAY STUDENTS
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

void Database::searchStudent(
    int studentId
) {

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

            cout << "Student with ID "
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

bool Database::deleteStudent(
    int studentId
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


// ==================================================
// SUBJECT OPERATIONS
// ==================================================


// ==========================================
// ADD SUBJECT
// ==========================================

bool Database::addSubject(
    const Subject& subject
) {

    if (!session) {

        cout << "Database is not connected."
             << endl;

        return false;
    }

    try {

        mysqlx::Schema db =
            session->getSchema(databaseName);

        mysqlx::Table subjects =
            db.getTable("subjects");

        subjects.insert(
            "subject_code",
            "subject_name",
            "max_marks"
        )
        .values(
            subject.getSubjectCode(),
            subject.getSubjectName(),
            subject.getMaxMarks()
        )
        .execute();

        cout << "Subject added successfully!"
             << endl;

        return true;
    }

    catch (const mysqlx::Error& error) {

        cerr << "Error adding subject: "
             << error.what()
             << endl;

        return false;
    }
}


// ==========================================
// DISPLAY SUBJECTS
// ==========================================

void Database::displaySubjects() {

    if (!session) {

        cout << "Database is not connected."
             << endl;

        return;
    }

    try {

        mysqlx::Schema db =
            session->getSchema(databaseName);

        mysqlx::Table subjects =
            db.getTable("subjects");

        mysqlx::RowResult result =
            subjects.select("*").execute();

        cout << "\n";
        cout << "========================================"
             << endl;

        cout << "             SUBJECT RECORDS"
             << endl;

        cout << "========================================"
             << endl;

        bool found = false;

        for (mysqlx::Row row : result) {

            found = true;

            cout << "Subject ID   : "
                 << row[0].get<int>()
                 << endl;

            cout << "Subject Code : "
                 << row[1].get<string>()
                 << endl;

            cout << "Subject Name : "
                 << row[2].get<string>()
                 << endl;

            cout << "Max Marks    : "
                 << row[3].get<int>()
                 << endl;

            cout << "----------------------------------------"
                 << endl;
        }

        if (!found) {

            cout << "No subjects found."
                 << endl;
        }
    }

    catch (const mysqlx::Error& error) {

        cerr << "Error reading subjects: "
             << error.what()
             << endl;
    }
}


// ==========================================
// SEARCH SUBJECT
// ==========================================

void Database::searchSubject(
    int subjectId
) {

    if (!session) {

        cout << "Database is not connected."
             << endl;

        return;
    }

    try {

        mysqlx::Schema db =
            session->getSchema(databaseName);

        mysqlx::Table subjects =
            db.getTable("subjects");

        mysqlx::RowResult result =
            subjects.select("*")
                    .where("subject_id = :id")
                    .bind("id", subjectId)
                    .execute();

        bool found = false;

        for (mysqlx::Row row : result) {

            found = true;

            cout << "\n";
            cout << "========================================"
                 << endl;

            cout << "             SUBJECT FOUND"
                 << endl;

            cout << "========================================"
                 << endl;

            cout << "Subject ID   : "
                 << row[0].get<int>()
                 << endl;

            cout << "Subject Code : "
                 << row[1].get<string>()
                 << endl;

            cout << "Subject Name : "
                 << row[2].get<string>()
                 << endl;

            cout << "Max Marks    : "
                 << row[3].get<int>()
                 << endl;

            cout << "========================================"
                 << endl;
        }

        if (!found) {

            cout << "Subject with ID "
                 << subjectId
                 << " was not found."
                 << endl;
        }
    }

    catch (const mysqlx::Error& error) {

        cerr << "Error searching subject: "
             << error.what()
             << endl;
    }
}


// ==========================================
// UPDATE SUBJECT
// ==========================================

bool Database::updateSubject(
    int subjectId,
    const string& subjectCode,
    const string& subjectName,
    int maxMarks
) {

    if (!session) {

        cout << "Database is not connected."
             << endl;

        return false;
    }

    try {

        mysqlx::Schema db =
            session->getSchema(databaseName);

        mysqlx::Table subjects =
            db.getTable("subjects");

        auto result =
            subjects.update()
                .set("subject_code", subjectCode)
                .set("subject_name", subjectName)
                .set("max_marks", maxMarks)
                .where("subject_id = :id")
                .bind("id", subjectId)
                .execute();

        if (result.getAffectedItemsCount() == 0) {

            cout << "Subject with ID "
                 << subjectId
                 << " was not found."
                 << endl;

            return false;
        }

        cout << "Subject updated successfully!"
             << endl;

        return true;
    }

    catch (const mysqlx::Error& error) {

        cerr << "Error updating subject: "
             << error.what()
             << endl;

        return false;
    }
}


// ==========================================
// DELETE SUBJECT
// ==========================================

bool Database::deleteSubject(
    int subjectId
) {

    if (!session) {

        cout << "Database is not connected."
             << endl;

        return false;
    }

    try {

        mysqlx::Schema db =
            session->getSchema(databaseName);

        mysqlx::Table subjects =
            db.getTable("subjects");

        auto result =
            subjects.remove()
                .where("subject_id = :id")
                .bind("id", subjectId)
                .execute();

        if (result.getAffectedItemsCount() == 0) {

            cout << "Subject with ID "
                 << subjectId
                 << " was not found."
                 << endl;

            return false;
        }

        cout << "Subject deleted successfully!"
             << endl;

        return true;
    }

    catch (const mysqlx::Error& error) {

        cerr << "Error deleting subject: "
             << error.what()
             << endl;

        return false;
    }
}


// ==================================================
// MARKS OPERATIONS
// ==================================================


// ==========================================
// ADD MARKS
// ==========================================

bool Database::addMarks(
    const Marks& marks
) {

    if (!session) {

        cout << "Database is not connected."
             << endl;

        return false;
    }

    try {

        mysqlx::Schema db =
            session->getSchema(databaseName);

        mysqlx::Table marksTable =
            db.getTable("marks");

        marksTable.insert(
            "student_id",
            "subject_id",
            "marks_obtained"
        )
        .values(
            marks.getStudentId(),
            marks.getSubjectId(),
            marks.getMarksObtained()
        )
        .execute();

        cout << "Marks added successfully!"
             << endl;

        return true;
    }

    catch (const mysqlx::Error& error) {

        cerr << "Error adding marks: "
             << error.what()
             << endl;

        return false;
    }
}


// ==========================================
// DISPLAY ALL MARKS
// ==========================================

void Database::displayMarks() {

    if (!session) {

        cout << "Database is not connected."
             << endl;

        return;
    }

    try {

        mysqlx::Schema db =
            session->getSchema(databaseName);

        mysqlx::Table marksTable =
            db.getTable("marks");

        mysqlx::RowResult result =
            marksTable.select("*").execute();

        cout << "\n";
        cout << "========================================"
             << endl;

        cout << "              MARKS RECORDS"
             << endl;

        cout << "========================================"
             << endl;

        bool found = false;

        for (mysqlx::Row row : result) {

            found = true;

            cout << "Mark ID        : "
                 << row[0].get<int>()
                 << endl;

            cout << "Student ID     : "
                 << row[1].get<int>()
                 << endl;

            cout << "Subject ID     : "
                 << row[2].get<int>()
                 << endl;

            cout << "Marks Obtained : "
                 << row[3].get<int>()
                 << endl;

            cout << "----------------------------------------"
                 << endl;
        }

        if (!found) {

            cout << "No marks found."
                 << endl;
        }
    }

    catch (const mysqlx::Error& error) {

        cerr << "Error reading marks: "
             << error.what()
             << endl;
    }
}


// ==========================================
// DISPLAY STUDENT MARKS
// ==========================================

void Database::displayStudentMarks(
    int studentId
) {

    if (!session) {

        cout << "Database is not connected."
             << endl;

        return;
    }

    try {

        mysqlx::SqlResult result = session->sql(
            "SELECT "
            "m.mark_id, "
            "s.subject_code, "
            "s.subject_name, "
            "m.marks_obtained, "
            "s.max_marks "
            "FROM marks m "
            "INNER JOIN subjects s "
            "ON m.subject_id = s.subject_id "
            "WHERE m.student_id = :studentId"
        )
        .bind("studentId", studentId)
        .execute();

        bool found = false;

        cout << "\n";
        cout << "========================================"
             << endl;

        cout << "          STUDENT MARKS"
             << endl;

        cout << "========================================"
             << endl;

        for (mysqlx::Row row : result.fetchAll()) {

            found = true;

            cout << "Mark ID        : "
                 << row[0].get<int>()
                 << endl;

            cout << "Subject Code   : "
                 << row[1].get<string>()
                 << endl;

            cout << "Subject Name   : "
                 << row[2].get<string>()
                 << endl;

            cout << "Marks Obtained : "
                 << row[3].get<int>()
                 << endl;

            cout << "Maximum Marks  : "
                 << row[4].get<int>()
                 << endl;

            cout << "----------------------------------------"
                 << endl;
        }

        if (!found) {

            cout << "No marks found for Student ID "
                 << studentId
                 << endl;
        }
    }

    catch (const mysqlx::Error& error) {

        cerr << "Error reading student marks: "
             << error.what()
             << endl;
    }
}


// ==========================================
// UPDATE MARKS
// ==========================================

bool Database::updateMarks(
    int studentId,
    int subjectId,
    int marksObtained
) {

    if (!session) {

        cout << "Database is not connected."
             << endl;

        return false;
    }

    try {

        mysqlx::Schema db =
            session->getSchema(databaseName);

        mysqlx::Table marksTable =
            db.getTable("marks");

        auto result =
            marksTable.update()
                .set(
                    "marks_obtained",
                    marksObtained
                )
                .where(
                    "student_id = :studentId "
                    "AND subject_id = :subjectId"
                )
                .bind(
                    "studentId",
                    studentId
                )
                .bind(
                    "subjectId",
                    subjectId
                )
                .execute();

        if (result.getAffectedItemsCount() == 0) {

            cout << "Marks record not found."
                 << endl;

            return false;
        }

        cout << "Marks updated successfully!"
             << endl;

        return true;
    }

    catch (const mysqlx::Error& error) {

        cerr << "Error updating marks: "
             << error.what()
             << endl;

        return false;
    }
}


// ==========================================
// DELETE MARKS
// ==========================================

bool Database::deleteMarks(
    int studentId,
    int subjectId
) {

    if (!session) {

        cout << "Database is not connected."
             << endl;

        return false;
    }

    try {

        mysqlx::Schema db =
            session->getSchema(databaseName);

        mysqlx::Table marksTable =
            db.getTable("marks");

        auto result =
            marksTable.remove()
                .where(
                    "student_id = :studentId "
                    "AND subject_id = :subjectId"
                )
                .bind(
                    "studentId",
                    studentId
                )
                .bind(
                    "subjectId",
                    subjectId
                )
                .execute();

        if (result.getAffectedItemsCount() == 0) {

            cout << "Marks record not found."
                 << endl;

            return false;
        }

        cout << "Marks deleted successfully!"
             << endl;

        return true;
    }

    catch (const mysqlx::Error& error) {

        cerr << "Error deleting marks: "
             << error.what()
             << endl;

        return false;
    }
}


// ==================================================
// RESULT OPERATIONS
// ==================================================


// ==========================================
// GENERATE RESULT
// ==========================================

bool Database::generateResult(
    int studentId
) {

    if (!session) {

        cout << "Database is not connected."
             << endl;

        return false;
    }


    try {

        // ======================================
        // STEP 1: CHECK STUDENT
        // ======================================

        mysqlx::SqlResult studentResult =
            session->sql(
                "SELECT student_id, name "
                "FROM students "
                "WHERE student_id = :studentId"
            )
            .bind(
                "studentId",
                studentId
            )
            .execute();


        auto studentRows =
            studentResult.fetchAll();


        if (studentRows.empty()) {

            cout << "\nStudent with ID "
                 << studentId
                 << " does not exist."
                 << endl;

            return false;
        }


        string studentName =
            studentRows[0][1].get<string>();


        // ======================================
        // STEP 2: CALCULATE TOTAL
        // ======================================

        mysqlx::SqlResult result =
            session->sql(
                "SELECT "
                "COALESCE(SUM(m.marks_obtained), 0), "
                "COALESCE(SUM(s.max_marks), 0), "
                "COUNT(m.mark_id) "
                "FROM marks m "
                "INNER JOIN subjects s "
                "ON m.subject_id = s.subject_id "
                "WHERE m.student_id = :studentId"
            )
            .bind(
                "studentId",
                studentId
            )
            .execute();


        auto rows = result.fetchAll();


        if (rows.empty()) {

            cout << "Unable to calculate result."
                 << endl;

            return false;
        }


        int totalMarks =
            rows[0][0].get<int>();


        int maximumMarks =
            rows[0][1].get<int>();


        int subjectCount =
            rows[0][2].get<int>();


        // ======================================
        // STEP 3: CHECK MARKS
        // ======================================

        if (subjectCount == 0) {

            cout << "\nNo marks have been entered "
                 << "for this student."
                 << endl;

            return false;
        }


        // ======================================
        // STEP 4: CREATE RESULT OBJECT
        // ======================================

        Result studentResultObject;


        studentResultObject.setStudentId(
            studentId
        );


        studentResultObject.setTotalMarks(
            totalMarks
        );


        studentResultObject.setMaximumMarks(
            maximumMarks
        );


        // ======================================
        // STEP 5: CALCULATE PERCENTAGE
        // ======================================

        studentResultObject.calculatePercentage();


        // ======================================
        // STEP 6: CALCULATE GRADE
        // ======================================

        studentResultObject.calculateGrade();


        // ======================================
        // STEP 7: CALCULATE PASS/FAIL
        // ======================================

        studentResultObject.calculateResultStatus();


        // ======================================
        // STEP 8: DISPLAY RESULT
        // ======================================

        cout << "\n";

        cout << "========================================"
             << endl;

        cout << "           FINAL RESULT"
             << endl;

        cout << "========================================"
             << endl;


        cout << "Student Name   : "
             << studentName
             << endl;


        studentResultObject.displayResult();


        return true;
    }


    catch (const mysqlx::Error& error) {

        cerr << "Error generating result: "
             << error.what()
             << endl;

        return false;
    }
}