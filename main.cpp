#include <iostream>

#include "include/Database.h"
#include "include/Menu.h"

using namespace std;


int main() {

    Database database;


    if (!database.connect()) {

        cout << "Unable to connect to database."
             << endl;

        return 1;
    }


    showMainMenu(database);


    database.disconnect();


    return 0;
}