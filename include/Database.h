#ifndef DATABASE_H
#define DATABASE_H

#include <string>

using namespace std;

class Database {
private:
    string host;
    string username;
    string password;
    string databaseName;

public:
    Database();

    bool connect();
    void disconnect();
};

#endif