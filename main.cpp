#include <iostream>
#include "include/Database.h"

using namespace std;

int main() {

    Database database;

    if (!database.connect()) {

        cout << "Unable to connect to database."
             << endl;

        return 1;
    }

    database.displayStudents();

    database.disconnect();

    return 0;
}