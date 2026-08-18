#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include <memory>
#include <mysqlx/xdevapi.h>

#include "Student.h"

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

    bool connect();
    void disconnect();

    bool isConnected() const;

    void displayStudents();

    bool addStudent(const Student& student);

    void searchStudent(int studentId);

    bool updateStudent(
        int studentId,
        const string& name,
        const string& email,
        const string& phone,
        const string& course,
        int semester
    );

    bool deleteStudent(int studentId);
};

#endif