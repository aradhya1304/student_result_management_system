#include "../include/Menu.h"

#include <iostream>
#include <string>

using namespace std;


// ==========================================
// STUDENT MENU
// ==========================================

void showStudentMenu(Database& database) {

    int choice;

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
        cin >> choice;

        cin.ignore();


        switch (choice) {

            case 1: {

                string name;
                string email;
                string phone;
                string course;

                int semester;

                cout << "\n========== ADD STUDENT ==========\n";

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

                cout << "\n========== SEARCH STUDENT ==========\n";

                cout << "Enter student ID: ";
                cin >> studentId;

                cin.ignore();

                database.searchStudent(studentId);

                break;
            }


            case 4: {

                int studentId;

                string name;
                string email;
                string phone;
                string course;

                int semester;

                cout << "\n========== UPDATE STUDENT ==========\n";

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

                cout << "\n========== DELETE STUDENT ==========\n";

                cout << "Enter student ID: ";
                cin >> studentId;

                cin.ignore();

                cout << "Are you sure? (y/n): ";
                cin >> confirmation;

                cin.ignore();

                if (
                    confirmation == 'y' ||
                    confirmation == 'Y'
                ) {

                    database.deleteStudent(studentId);
                }
                else {

                    cout << "Delete cancelled."
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

    } while (choice != 6);
}


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

            case 1: {

                string code;
                string name;

                int maxMarks;

                cout << "\n========== ADD SUBJECT ==========\n";

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


            case 2:

                database.displaySubjects();

                break;


            case 3: {

                int subjectId;

                cout << "\n========== SEARCH SUBJECT ==========\n";

                cout << "Enter subject ID: ";
                cin >> subjectId;

                cin.ignore();

                database.searchSubject(subjectId);

                break;
            }


            case 4: {

                int subjectId;

                string code;
                string name;

                int maxMarks;

                cout << "\n========== UPDATE SUBJECT ==========\n";

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


            case 5: {

                int subjectId;

                char confirmation;

                cout << "\n========== DELETE SUBJECT ==========\n";

                cout << "Enter subject ID: ";
                cin >> subjectId;

                cin.ignore();

                cout << "Are you sure? (y/n): ";
                cin >> confirmation;

                cin.ignore();

                if (
                    confirmation == 'y' ||
                    confirmation == 'Y'
                ) {

                    database.deleteSubject(subjectId);
                }
                else {

                    cout << "Delete cancelled."
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

    } while (choice != 6);
}


// ==========================================
// MARKS MENU
// ==========================================

void showMarksMenu(Database& database) {

    int choice;

    do {

        cout << "\n";
        cout << "========================================"
             << endl;

        cout << "            MARKS MANAGEMENT"
             << endl;

        cout << "========================================"
             << endl;

        cout << "1. Add Marks" << endl;
        cout << "2. View All Marks" << endl;
        cout << "3. View Student Marks" << endl;
        cout << "4. Update Marks" << endl;
        cout << "5. Delete Marks" << endl;
        cout << "6. Back" << endl;

        cout << "========================================"
             << endl;

        cout << "Enter choice: ";
        cin >> choice;

        cin.ignore();


        switch (choice) {

            // ==============================
            // ADD MARKS
            // ==============================

            case 1: {

                int studentId;

                int subjectId;

                int marksObtained;

                cout << "\n========== ADD MARKS ==========\n";

                cout << "Enter student ID: ";
                cin >> studentId;

                cout << "Enter subject ID: ";
                cin >> subjectId;

                cout << "Enter marks obtained: ";
                cin >> marksObtained;

                cin.ignore();


                Marks marks(
                    0,
                    studentId,
                    subjectId,
                    marksObtained
                );

                database.addMarks(marks);

                break;
            }


            // ==============================
            // VIEW ALL MARKS
            // ==============================

            case 2:

                database.displayMarks();

                break;


            // ==============================
            // VIEW STUDENT MARKS
            // ==============================

            case 3: {

                int studentId;

                cout << "\n========== STUDENT MARKS ==========\n";

                cout << "Enter student ID: ";
                cin >> studentId;

                cin.ignore();

                database.displayStudentMarks(
                    studentId
                );

                break;
            }


            // ==============================
            // UPDATE MARKS
            // ==============================

            case 4: {

                int studentId;

                int subjectId;

                int marksObtained;

                cout << "\n========== UPDATE MARKS ==========\n";

                cout << "Enter student ID: ";
                cin >> studentId;

                cout << "Enter subject ID: ";
                cin >> subjectId;

                cout << "Enter new marks: ";
                cin >> marksObtained;

                cin.ignore();

                database.updateMarks(
                    studentId,
                    subjectId,
                    marksObtained
                );

                break;
            }


            // ==============================
            // DELETE MARKS
            // ==============================

            case 5: {

                int studentId;

                int subjectId;

                char confirmation;

                cout << "\n========== DELETE MARKS ==========\n";

                cout << "Enter student ID: ";
                cin >> studentId;

                cout << "Enter subject ID: ";
                cin >> subjectId;

                cout << "Are you sure? (y/n): ";
                cin >> confirmation;

                cin.ignore();

                if (
                    confirmation == 'y' ||
                    confirmation == 'Y'
                ) {

                    database.deleteMarks(
                        studentId,
                        subjectId
                    );
                }
                else {

                    cout << "Delete cancelled."
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
        cout << "3. Marks Management" << endl;
        cout << "4. Exit" << endl;

        cout << "========================================"
             << endl;

        cout << "Enter choice: ";
        cin >> choice;

        cin.ignore();


        switch (choice) {

            case 1:

                showStudentMenu(database);

                break;


            case 2:

                showSubjectMenu(database);

                break;


            case 3:

                showMarksMenu(database);

                break;


            case 4:

                cout << "\nExiting program..."
                     << endl;

                break;


            default:

                cout << "Invalid choice!"
                     << endl;
        }

    } while (choice != 4);
}