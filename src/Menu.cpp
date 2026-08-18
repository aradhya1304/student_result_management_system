#include "../include/Menu.h"

#include <iostream>
#include <string>

using namespace std;


// ==========================================
// SUBJECT MENU
// ==========================================

void showSubjectMenu(Database& database) {

    int choice;

    do {

        cout << "\n";
        cout << "========================================"
             << endl;

        cout << "          SUBJECT MANAGEMENT"
             << endl;

        cout << "========================================"
             << endl;

        cout << "1. Add Subject" << endl;
        cout << "2. View Subjects" << endl;
        cout << "3. Search Subject" << endl;
        cout << "4. Update Subject" << endl;
        cout << "5. Delete Subject" << endl;
        cout << "6. Back" << endl;

        cout << "========================================"
             << endl;

        cout << "Enter choice: ";
        cin >> choice;

        cin.ignore();


        switch (choice) {


            // ==============================
            // ADD SUBJECT
            // ==============================

            case 1: {

                string code;
                string name;
                int maxMarks;

                cout << "\n";
                cout << "========== ADD SUBJECT =========="
                     << endl;

                cout << "Enter subject code: ";
                getline(cin, code);

                cout << "Enter subject name: ";
                getline(cin, name);

                cout << "Enter maximum marks: ";
                cin >> maxMarks;

                cin.ignore();

                Subject subject(
                    0,
                    code,
                    name,
                    maxMarks
                );

                database.addSubject(subject);

                break;
            }


            // ==============================
            // VIEW SUBJECTS
            // ==============================

            case 2:

                database.displaySubjects();

                break;


            // ==============================
            // SEARCH SUBJECT
            // ==============================

            case 3: {

                int subjectId;

                cout << "\n";
                cout << "========== SEARCH SUBJECT =========="
                     << endl;

                cout << "Enter subject ID: ";
                cin >> subjectId;

                cin.ignore();

                database.searchSubject(subjectId);

                break;
            }


            // ==============================
            // UPDATE SUBJECT
            // ==============================

            case 4: {

                int subjectId;

                string code;
                string name;

                int maxMarks;

                cout << "\n";
                cout << "========== UPDATE SUBJECT =========="
                     << endl;

                cout << "Enter subject ID: ";
                cin >> subjectId;

                cin.ignore();

                cout << "Enter new subject code: ";
                getline(cin, code);

                cout << "Enter new subject name: ";
                getline(cin, name);

                cout << "Enter new maximum marks: ";
                cin >> maxMarks;

                cin.ignore();

                database.updateSubject(
                    subjectId,
                    code,
                    name,
                    maxMarks
                );

                break;
            }


            // ==============================
            // DELETE SUBJECT
            // ==============================

            case 5: {

                int subjectId;

                char confirmation;

                cout << "\n";
                cout << "========== DELETE SUBJECT =========="
                     << endl;

                cout << "Enter subject ID: ";
                cin >> subjectId;

                cin.ignore();

                cout << "Are you sure you want to delete "
                     << "subject "
                     << subjectId
                     << "? (y/n): ";

                cin >> confirmation;

                cin.ignore();

                if (
                    confirmation == 'y' ||
                    confirmation == 'Y'
                ) {

                    database.deleteSubject(
                        subjectId
                    );
                }
                else {

                    cout << "Delete operation cancelled."
                         << endl;
                }

                break;
            }


            // ==============================
            // BACK
            // ==============================

            case 6:

                cout << "Returning to main menu..."
                     << endl;

                break;


            default:

                cout << "Invalid choice!"
                     << endl;
        }

    } while (choice != 6);
}


// ==========================================
// MAIN MENU
// ==========================================

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

        cout << "1. Student Management" << endl;
        cout << "2. Subject Management" << endl;
        cout << "3. Exit" << endl;

        cout << "========================================"
             << endl;

        cout << "Enter choice: ";
        cin >> choice;

        cin.ignore();


        switch (choice) {


            // ==============================
            // STUDENT MANAGEMENT
            // ==============================

            case 1: {

                int studentChoice;

                do {

                    cout << "\n";
                    cout << "========================================"
                         << endl;

                    cout << "          STUDENT MANAGEMENT"
                         << endl;

                    cout << "========================================"
                         << endl;

                    cout << "1. Add Student" << endl;
                    cout << "2. View Students" << endl;
                    cout << "3. Search Student" << endl;
                    cout << "4. Update Student" << endl;
                    cout << "5. Delete Student" << endl;
                    cout << "6. Back" << endl;

                    cout << "========================================"
                         << endl;

                    cout << "Enter choice: ";
                    cin >> studentChoice;

                    cin.ignore();


                    switch (studentChoice) {


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


                        case 2:

                            database.displayStudents();

                            break;


                        case 3: {

                            int studentId;

                            cout << "\n";
                            cout << "========== SEARCH STUDENT =========="
                                 << endl;

                            cout << "Enter student ID: ";
                            cin >> studentId;

                            cin.ignore();

                            database.searchStudent(
                                studentId
                            );

                            break;
                        }


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
                                 << "student "
                                 << studentId
                                 << "? (y/n): ";

                            cin >> confirmation;

                            cin.ignore();

                            if (
                                confirmation == 'y' ||
                                confirmation == 'Y'
                            ) {

                                database.deleteStudent(
                                    studentId
                                );
                            }
                            else {

                                cout << "Delete operation cancelled."
                                     << endl;
                            }

                            break;
                        }


                        case 6:

                            break;


                        default:

                            cout << "Invalid choice!"
                                 << endl;
                    }

                } while (studentChoice != 6);

                break;
            }


            // ==============================
            // SUBJECT MANAGEMENT
            // ==============================

            case 2:

                showSubjectMenu(database);

                break;


            // ==============================
            // EXIT
            // ==============================

            case 3:

                cout << "\nExiting program..."
                     << endl;

                break;


            default:

                cout << "Invalid choice!"
                     << endl;
        }

    } while (choice != 3);
}