#include "../include/Menu.h"

#include "../include/Validation.h"

#include <iostream>
#include <string>

using namespace std;


// ==================================================
// HELPER FUNCTIONS
// ==================================================


// ==========================================
// CLEAR INVALID INPUT
// ==========================================

void clearInvalidInput() {

    cin.clear();

    cin.ignore(
        10000,
        '\n'
    );
}


// ==========================================
// STUDENT MENU
// ==========================================

void showStudentMenu(
    Database& database
) {

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


        if (cin.fail()) {

            clearInvalidInput();

            cout << "Invalid input. "
                 << "Please enter a number."
                 << endl;

            continue;
        }


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


                cout << "\n========== ADD STUDENT ==========\n";


                cout << "Enter student name: ";

                getline(
                    cin,
                    name
                );


                if (
                    !Validation::isNotEmpty(name)
                ) {

                    cout << "Student name cannot "
                         << "be empty."
                         << endl;

                    break;
                }


                cout << "Enter email: ";

                getline(
                    cin,
                    email
                );


                if (
                    !Validation::isNotEmpty(email)
                ) {

                    cout << "Email cannot "
                         << "be empty."
                         << endl;

                    break;
                }


                cout << "Enter phone: ";

                getline(
                    cin,
                    phone
                );


                if (
                    !Validation::isNotEmpty(phone)
                ) {

                    cout << "Phone cannot "
                         << "be empty."
                         << endl;

                    break;
                }


                cout << "Enter course: ";

                getline(
                    cin,
                    course
                );


                if (
                    !Validation::isNotEmpty(course)
                ) {

                    cout << "Course cannot "
                         << "be empty."
                         << endl;

                    break;
                }


                cout << "Enter semester: ";

                cin >> semester;


                if (cin.fail()) {

                    clearInvalidInput();

                    cout << "Invalid semester."
                         << endl;

                    break;
                }


                cin.ignore();


                if (
                    !Validation::isValidSemester(
                        semester
                    )
                ) {

                    cout << "Semester must be "
                         << "between 1 and 8."
                         << endl;

                    break;
                }


                Student student(
                    0,
                    name,
                    email,
                    phone,
                    course,
                    semester
                );


                database.addStudent(
                    student
                );


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


                cout << "\n========== SEARCH STUDENT ==========\n";

                cout << "Enter student ID: ";

                cin >> studentId;


                if (cin.fail()) {

                    clearInvalidInput();

                    cout << "Invalid student ID."
                         << endl;

                    break;
                }


                cin.ignore();


                if (
                    !Validation::isPositive(
                        studentId
                    )
                ) {

                    cout << "Student ID must "
                         << "be greater than 0."
                         << endl;

                    break;
                }


                database.searchStudent(
                    studentId
                );


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


                cout << "\n========== UPDATE STUDENT ==========\n";


                cout << "Enter student ID: ";

                cin >> studentId;


                if (cin.fail()) {

                    clearInvalidInput();

                    cout << "Invalid student ID."
                         << endl;

                    break;
                }


                cin.ignore();


                if (
                    !Validation::isPositive(
                        studentId
                    )
                ) {

                    cout << "Student ID must "
                         << "be greater than 0."
                         << endl;

                    break;
                }


                cout << "Enter new name: ";

                getline(
                    cin,
                    name
                );


                if (
                    !Validation::isNotEmpty(name)
                ) {

                    cout << "Name cannot be empty."
                         << endl;

                    break;
                }


                cout << "Enter new email: ";

                getline(
                    cin,
                    email
                );


                if (
                    !Validation::isNotEmpty(email)
                ) {

                    cout << "Email cannot be empty."
                         << endl;

                    break;
                }


                cout << "Enter new phone: ";

                getline(
                    cin,
                    phone
                );


                if (
                    !Validation::isNotEmpty(phone)
                ) {

                    cout << "Phone cannot be empty."
                         << endl;

                    break;
                }


                cout << "Enter new course: ";

                getline(
                    cin,
                    course
                );


                if (
                    !Validation::isNotEmpty(course)
                ) {

                    cout << "Course cannot be empty."
                         << endl;

                    break;
                }


                cout << "Enter new semester: ";

                cin >> semester;


                if (cin.fail()) {

                    clearInvalidInput();

                    cout << "Invalid semester."
                         << endl;

                    break;
                }


                cin.ignore();


                if (
                    !Validation::isValidSemester(
                        semester
                    )
                ) {

                    cout << "Semester must be "
                         << "between 1 and 8."
                         << endl;

                    break;
                }


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


                cout << "\n========== DELETE STUDENT ==========\n";


                cout << "Enter student ID: ";

                cin >> studentId;


                if (cin.fail()) {

                    clearInvalidInput();

                    cout << "Invalid student ID."
                         << endl;

                    break;
                }


                cin.ignore();


                if (
                    !Validation::isPositive(
                        studentId
                    )
                ) {

                    cout << "Student ID must "
                         << "be greater than 0."
                         << endl;

                    break;
                }


                cout << "Are you sure? (y/n): ";

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


// ==================================================
// SUBJECT MENU
// ==================================================

void showSubjectMenu(
    Database& database
) {

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


        if (cin.fail()) {

            clearInvalidInput();

            cout << "Invalid input."
                 << endl;

            continue;
        }


        cin.ignore();


        switch (choice) {


            // ==================================
            // ADD SUBJECT
            // ==================================

            case 1: {

                string code;

                string name;

                int maxMarks;


                cout << "\n========== ADD SUBJECT ==========\n";


                cout << "Enter subject code: ";

                getline(
                    cin,
                    code
                );


                if (
                    !Validation::isNotEmpty(code)
                ) {

                    cout << "Subject code cannot "
                         << "be empty."
                         << endl;

                    break;
                }


                cout << "Enter subject name: ";

                getline(
                    cin,
                    name
                );


                if (
                    !Validation::isNotEmpty(name)
                ) {

                    cout << "Subject name cannot "
                         << "be empty."
                         << endl;

                    break;
                }


                cout << "Enter maximum marks: ";

                cin >> maxMarks;


                if (cin.fail()) {

                    clearInvalidInput();

                    cout << "Invalid maximum marks."
                         << endl;

                    break;
                }


                cin.ignore();


                if (
                    !Validation::isPositive(
                        maxMarks
                    )
                ) {

                    cout << "Maximum marks must "
                         << "be greater than 0."
                         << endl;

                    break;
                }


                Subject subject(
                    0,
                    code,
                    name,
                    maxMarks
                );


                database.addSubject(
                    subject
                );


                break;
            }


            // ==================================
            // VIEW SUBJECTS
            // ==================================

            case 2:

                database.displaySubjects();

                break;


            // ==================================
            // SEARCH SUBJECT
            // ==================================

            case 3: {

                int subjectId;


                cout << "\n========== SEARCH SUBJECT ==========\n";

                cout << "Enter subject ID: ";

                cin >> subjectId;


                if (cin.fail()) {

                    clearInvalidInput();

                    cout << "Invalid subject ID."
                         << endl;

                    break;
                }


                cin.ignore();


                if (
                    !Validation::isPositive(
                        subjectId
                    )
                ) {

                    cout << "Subject ID must "
                         << "be greater than 0."
                         << endl;

                    break;
                }


                database.searchSubject(
                    subjectId
                );


                break;
            }


            // ==================================
            // UPDATE SUBJECT
            // ==================================

            case 4: {

                int subjectId;

                string code;

                string name;

                int maxMarks;


                cout << "\n========== UPDATE SUBJECT ==========\n";


                cout << "Enter subject ID: ";

                cin >> subjectId;


                if (cin.fail()) {

                    clearInvalidInput();

                    cout << "Invalid subject ID."
                         << endl;

                    break;
                }


                cin.ignore();


                if (
                    !Validation::isPositive(
                        subjectId
                    )
                ) {

                    cout << "Subject ID must "
                         << "be greater than 0."
                         << endl;

                    break;
                }


                cout << "Enter new subject code: ";

                getline(
                    cin,
                    code
                );


                if (
                    !Validation::isNotEmpty(code)
                ) {

                    cout << "Subject code cannot "
                         << "be empty."
                         << endl;

                    break;
                }


                cout << "Enter new subject name: ";

                getline(
                    cin,
                    name
                );


                if (
                    !Validation::isNotEmpty(name)
                ) {

                    cout << "Subject name cannot "
                         << "be empty."
                         << endl;

                    break;
                }


                cout << "Enter new maximum marks: ";

                cin >> maxMarks;


                if (cin.fail()) {

                    clearInvalidInput();

                    cout << "Invalid maximum marks."
                         << endl;

                    break;
                }


                cin.ignore();


                if (
                    !Validation::isPositive(
                        maxMarks
                    )
                ) {

                    cout << "Maximum marks must "
                         << "be greater than 0."
                         << endl;

                    break;
                }


                database.updateSubject(
                    subjectId,
                    code,
                    name,
                    maxMarks
                );


                break;
            }


            // ==================================
            // DELETE SUBJECT
            // ==================================

            case 5: {

                int subjectId;

                char confirmation;


                cout << "\n========== DELETE SUBJECT ==========\n";


                cout << "Enter subject ID: ";

                cin >> subjectId;


                if (cin.fail()) {

                    clearInvalidInput();

                    cout << "Invalid subject ID."
                         << endl;

                    break;
                }


                cin.ignore();


                if (
                    !Validation::isPositive(
                        subjectId
                    )
                ) {

                    cout << "Subject ID must "
                         << "be greater than 0."
                         << endl;

                    break;
                }


                cout << "Are you sure? (y/n): ";

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


// ==================================================
// MARKS MENU
// ==================================================

void showMarksMenu(
    Database& database
) {

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


        if (cin.fail()) {

            clearInvalidInput();

            cout << "Invalid input."
                 << endl;

            continue;
        }


        cin.ignore();


        switch (choice) {


            // ==================================
            // ADD MARKS
            // ==================================

            case 1: {

                int studentId;

                int subjectId;

                int marksObtained;


                cout << "\n========== ADD MARKS ==========\n";


                cout << "Enter student ID: ";

                cin >> studentId;


                if (cin.fail()) {

                    clearInvalidInput();

                    cout << "Invalid student ID."
                         << endl;

                    break;
                }


                if (
                    !Validation::isPositive(
                        studentId
                    )
                ) {

                    clearInvalidInput();

                    cout << "Student ID must "
                         << "be greater than 0."
                         << endl;

                    break;
                }


                cout << "Enter subject ID: ";

                cin >> subjectId;


                if (cin.fail()) {

                    clearInvalidInput();

                    cout << "Invalid subject ID."
                         << endl;

                    break;
                }


                if (
                    !Validation::isPositive(
                        subjectId
                    )
                ) {

                    clearInvalidInput();

                    cout << "Subject ID must "
                         << "be greater than 0."
                         << endl;

                    break;
                }


                cout << "Enter marks obtained: ";

                cin >> marksObtained;


                if (cin.fail()) {

                    clearInvalidInput();

                    cout << "Invalid marks."
                         << endl;

                    break;
                }


                cin.ignore();


                if (
                    !Validation::isNonNegative(
                        marksObtained
                    )
                ) {

                    cout << "Marks cannot "
                         << "be negative."
                         << endl;

                    break;
                }


                /*
                 * Maximum-mark validation is also
                 * performed inside Database::addMarks()
                 * because the database knows the
                 * maximum marks of the selected subject.
                 */


                Marks marks(
                    0,
                    studentId,
                    subjectId,
                    marksObtained
                );


                database.addMarks(
                    marks
                );


                break;
            }


            // ==================================
            // VIEW ALL MARKS
            // ==================================

            case 2:

                database.displayMarks();

                break;


            // ==================================
            // VIEW STUDENT MARKS
            // ==================================

            case 3: {

                int studentId;


                cout << "\n========== STUDENT MARKS ==========\n";


                cout << "Enter student ID: ";

                cin >> studentId;


                if (cin.fail()) {

                    clearInvalidInput();

                    cout << "Invalid student ID."
                         << endl;

                    break;
                }


                cin.ignore();


                if (
                    !Validation::isPositive(
                        studentId
                    )
                ) {

                    cout << "Student ID must "
                         << "be greater than 0."
                         << endl;

                    break;
                }


                database.displayStudentMarks(
                    studentId
                );


                break;
            }


            // ==================================
            // UPDATE MARKS
            // ==================================

            case 4: {

                int studentId;

                int subjectId;

                int marksObtained;


                cout << "\n========== UPDATE MARKS ==========\n";


                cout << "Enter student ID: ";

                cin >> studentId;


                if (
                    cin.fail() ||
                    !Validation::isPositive(
                        studentId
                    )
                ) {

                    clearInvalidInput();

                    cout << "Invalid student ID."
                         << endl;

                    break;
                }


                cout << "Enter subject ID: ";

                cin >> subjectId;


                if (
                    cin.fail() ||
                    !Validation::isPositive(
                        subjectId
                    )
                ) {

                    clearInvalidInput();

                    cout << "Invalid subject ID."
                         << endl;

                    break;
                }


                cout << "Enter new marks: ";

                cin >> marksObtained;


                if (cin.fail()) {

                    clearInvalidInput();

                    cout << "Invalid marks."
                         << endl;

                    break;
                }


                cin.ignore();


                if (
                    !Validation::isNonNegative(
                        marksObtained
                    )
                ) {

                    cout << "Marks cannot "
                         << "be negative."
                         << endl;

                    break;
                }


                /*
                 * Database::updateMarks()
                 * will verify that the new marks
                 * do not exceed the subject's
                 * maximum marks.
                 */


                database.updateMarks(
                    studentId,
                    subjectId,
                    marksObtained
                );


                break;
            }


            // ==================================
            // DELETE MARKS
            // ==================================

            case 5: {

                int studentId;

                int subjectId;

                char confirmation;


                cout << "\n========== DELETE MARKS ==========\n";


                cout << "Enter student ID: ";

                cin >> studentId;


                if (
                    cin.fail() ||
                    !Validation::isPositive(
                        studentId
                    )
                ) {

                    clearInvalidInput();

                    cout << "Invalid student ID."
                         << endl;

                    break;
                }


                cout << "Enter subject ID: ";

                cin >> subjectId;


                if (
                    cin.fail() ||
                    !Validation::isPositive(
                        subjectId
                    )
                ) {

                    clearInvalidInput();

                    cout << "Invalid subject ID."
                         << endl;

                    break;
                }


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


// ==================================================
// RESULT MENU
// ==================================================

void showResultMenu(
    Database& database
) {

    int choice;


    do {

        cout << "\n";
        cout << "========================================"
             << endl;

        cout << "             RESULT MANAGEMENT"
             << endl;

        cout << "========================================"
             << endl;

        cout << "1. Generate Student Result" << endl;

        cout << "2. Back" << endl;

        cout << "========================================"
             << endl;


        cout << "Enter choice: ";

        cin >> choice;


        if (cin.fail()) {

            clearInvalidInput();

            cout << "Invalid input."
                 << endl;

            continue;
        }


        cin.ignore();


        switch (choice) {


            case 1: {

                int studentId;


                cout << "\n========== GENERATE RESULT ==========\n";


                cout << "Enter student ID: ";

                cin >> studentId;


                if (cin.fail()) {

                    clearInvalidInput();

                    cout << "Invalid student ID."
                         << endl;

                    break;
                }


                cin.ignore();


                if (
                    !Validation::isPositive(
                        studentId
                    )
                ) {

                    cout << "Student ID must "
                         << "be greater than 0."
                         << endl;

                    break;
                }


                database.generateResult(
                    studentId
                );


                break;
            }


            case 2:

                break;


            default:

                cout << "Invalid choice!"
                     << endl;
        }


    } while (choice != 2);
}


// ==================================================
// MAIN MENU
// ==================================================

void showMainMenu(
    Database& database
) {

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

        cout << "4. Result Management" << endl;

        cout << "5. Exit" << endl;

        cout << "========================================"
             << endl;


        cout << "Enter choice: ";

        cin >> choice;


        if (cin.fail()) {

            clearInvalidInput();

            cout << "Invalid input. "
                 << "Please enter a number."
                 << endl;

            continue;
        }


        cin.ignore();


        switch (choice) {


            case 1:

                showStudentMenu(
                    database
                );

                break;


            case 2:

                showSubjectMenu(
                    database
                );

                break;


            case 3:

                showMarksMenu(
                    database
                );

                break;


            case 4:

                showResultMenu(
                    database
                );

                break;


            case 5:

                cout << "\nExiting program..."
                     << endl;

                break;


            default:

                cout << "Invalid choice!"
                     << endl;
        }


    } while (choice != 5);
}