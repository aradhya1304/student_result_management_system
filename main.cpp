#include <iostream>
#include <string>

#include "include/Student.h"
#include "include/Database.h"

using namespace std;

int main() {

    Database database;

    if (!database.connect()) {

        cout << "Unable to connect to database."
             << endl;

        return 1;
    }

    string name;
    string email;
    string course;
    int semester;

    cout << "\n===== ADD STUDENT =====\n";

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter email: ";
    getline(cin, email);

    cout << "Enter course: ";
    getline(cin, course);

    cout << "Enter semester: ";
    cin >> semester;

    Student student(
        0,
        name,
        email,
        course,
        semester
    );

    database.addStudent(student);

    database.disconnect();

    return 0;
}