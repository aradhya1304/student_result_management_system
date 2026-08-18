#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include <memory>
#include <mysqlx/xdevapi.h>

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
};

#endif