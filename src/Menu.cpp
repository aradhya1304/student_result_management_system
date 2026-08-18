#include "../include/Menu.h"

#include <iostream>
#include <string>

using namespace std;

void showMainMenu(Database& database) {

    int choice;

    do {

        cout << "\n";
        cout << "========================================" << endl;
        cout << "     STUDENT RESULT MANAGEMENT SYSTEM" << endl;
        cout << "========================================" << endl;

        cout << "1. Add Student" << endl;
        cout << "2. View Students" << endl;
        cout << "3. Exit" << endl;

        cout << "========================================" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        cin.ignore();

        switch (choice) {

            case 1: {

                string name;
                string email;
                string phone;
                string course;
                int semester;

                cout << "\n===== ADD STUDENT =====\n";

                cout << "Enter student name: ";
                getline(cin, name);

                cout << "Enter email: ";
                getline(cin, email);

                cout << "Enter phone: ";
                getline(cin, phone);

                cout << "Enter course: ";
                getline(cin, course);

                cout << "Enter semester: ";
                cin >> semester;

                cin.ignore();

                Student student(
                    0,
                    name,
                    email,
                    phone,
                    course,
                    semester
                );

                database.addStudent(student);

                break;
            }

            case 2:

                database.displayStudents();

                break;

            case 3:

                cout << "\nExiting program..." << endl;

                break;

            default:

                cout << "\nInvalid choice!"
                     << endl;
        }

    } while (choice != 3);
}