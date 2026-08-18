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

    cout << "Connecting to MySQL..." << endl;

    // MySQL connection code will be added next.
    // We are keeping this separate from the rest
    // of the application.

    return true;
}

void Database::disconnect() {
    cout << "MySQL connection closed." << endl;
}