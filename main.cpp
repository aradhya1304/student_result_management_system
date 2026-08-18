#include <iostream>
#include "include/Database.h"

using namespace std;

int main() {

    Database database;

    if (database.connect()) {
        cout << "Connection successful!" << endl;
    }

    database.disconnect();

    return 0;
}