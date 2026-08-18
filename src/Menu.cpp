#include "../include/Menu.h"

#include <iostream>
#include <string>

using namespace std;

void showMainMenu(Database& database) {

    int choice;

    do {

        cout << "\n";
        cout << "========================================"
             << endl;

        cout << "     STUDENT RESULT MANAGEMENT SYSTEM"
             << endl;

        cout << "========================================"
             << endl;

        cout << "1. Add Student" << endl;
        cout << "2. View Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Update Student" << endl;
        cout << "5. Delete Student" << endl;
        cout << "6. Exit" << endl;

        cout << "========================================"
             << endl;

        cout << "Enter choice: ";
        cin >> choice;

        cin.ignore();

        switch (choice) {

            // ==================================
            // ADD STUDENT
            // ==================================

            case 1: {

                string name;
                string email;
                string phone;
                string course;
                int semester;

                cout << "\n";
                cout << "========== ADD STUDENT =========="
                     << endl;

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


            // ==================================
            // VIEW STUDENTS
            // ==================================

            case 2:

                database.displayStudents();

                break;


            // ==================================
            // SEARCH STUDENT
            // ==================================

            case 3: {

                int studentId;

                cout << "\n";
                cout << "========== SEARCH STUDENT =========="
                     << endl;

                cout << "Enter student ID: ";
                cin >> studentId;

                cin.ignore();

                database.searchStudent(studentId);

                break;
            }


            // ==================================
            // UPDATE STUDENT
            // ==================================

            case 4: {

                int studentId;

                string name;
                string email;
                string phone;
                string course;

                int semester;

                cout << "\n";
                cout << "========== UPDATE STUDENT =========="
                     << endl;

                cout << "Enter student ID: ";
                cin >> studentId;

                cin.ignore();

                cout << "Enter new name: ";
                getline(cin, name);

                cout << "Enter new email: ";
                getline(cin, email);

                cout << "Enter new phone: ";
                getline(cin, phone);

                cout << "Enter new course: ";
                getline(cin, course);

                cout << "Enter new semester: ";
                cin >> semester;

                cin.ignore();

                database.updateStudent(
                    studentId,
                    name,
                    email,
                    phone,
                    course,
                    semester
                );

                break;
            }


            // ==================================
            // DELETE STUDENT
            // ==================================

            case 5: {

                int studentId;

                char confirmation;

                cout << "\n";
                cout << "========== DELETE STUDENT =========="
                     << endl;

                cout << "Enter student ID: ";
                cin >> studentId;

                cin.ignore();

                cout << "Are you sure you want to delete "
                     << "student " << studentId
                     << "? (y/n): ";

                cin >> confirmation;

                cin.ignore();

                if (confirmation == 'y' ||
                    confirmation == 'Y') {

                    database.deleteStudent(studentId);

                }
                else {

                    cout << "Delete operation cancelled."
                         << endl;
                }

                break;
            }


            // ==================================
            // EXIT
            // ==================================

            case 6:

                cout << "\nExiting program..."
                     << endl;

                break;


            // ==================================
            // INVALID CHOICE
            // ==================================

            default:

                cout << "\nInvalid choice!"
                     << endl;

                cout << "Please enter a number "
                     << "between 1 and 6."
                     << endl;
        }

    } while (choice != 6);
}