#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include <memory>

#include <mysqlx/xdevapi.h>

#include "Student.h"
#include "Subject.h"
#include "Marks.h"

using namespace std;


class Database {

private:

    string host;

    string username;

    string password;

    string databaseName;

    unique_ptr<mysqlx::Session> session;


public:

    Database();


    // ======================================
    // DATABASE CONNECTION
    // ======================================

    bool connect();

    void disconnect();

    bool isConnected() const;


    // ======================================
    // STUDENT OPERATIONS
    // ======================================

    void displayStudents();

    bool addStudent(
        const Student& student
    );

    void searchStudent(
        int studentId
    );

    bool updateStudent(
        int studentId,
        const string& name,
        const string& email,
        const string& phone,
        const string& course,
        int semester
    );

    bool deleteStudent(
        int studentId
    );


    // ======================================
    // SUBJECT OPERATIONS
    // ======================================

    bool addSubject(
        const Subject& subject
    );

    void displaySubjects();

    void searchSubject(
        int subjectId
    );

    bool updateSubject(
        int subjectId,
        const string& subjectCode,
        const string& subjectName,
        int maxMarks
    );

    bool deleteSubject(
        int subjectId
    );


    // ======================================
    // MARKS OPERATIONS
    // ======================================

    bool addMarks(
        const Marks& marks
    );

    void displayMarks();

    void displayStudentMarks(
        int studentId
    );

    bool updateMarks(
        int studentId,
        int subjectId,
        int marksObtained
    );

    bool deleteMarks(
        int studentId,
        int subjectId
    );


    // ======================================
    // RESULT OPERATIONS
    // ======================================

    bool generateResult(
        int studentId
    );
};

#endif