#include <iostream>
#include "include/Database.h"

using namespace std;

int main() {

    Database database;

    if (database.connect()) {

        cout << "Database connection test successful!"
             << endl;

        database.disconnect();

    } else {

        cout << "Database connection failed!"
             << endl;
    }

    return 0;
}