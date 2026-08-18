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

        cout << "Connected to MySQL successfully!" << endl;

        return true;

    }
    catch (const mysqlx::Error& error) {

        cerr << "MySQL Connection Error: "
             << error.what() << endl;

        return false;
    }
}

void Database::disconnect() {

    if (session) {
        session->close();
        session.reset();

        cout << "MySQL connection closed." << endl;
    }
}

bool Database::isConnected() const {
    return session != nullptr;
}