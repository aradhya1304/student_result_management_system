#include <iostream>
#include "include/Student.h"
#include "include/Subject.h"
#include "include/Marks.h"

using namespace std;

int main() {

    Student student(
        101,
        "Aradhya",
        "aradhya@example.com",
        "B.Tech",
        3
    );

    Subject subject(
        201,
        "Database Management System",
        100,
        3
    );

    Marks marks(
        301,
        101,
        201,
        85
    );

    cout << "======================================" << endl;
    cout << "      STUDENT RESULT MANAGEMENT" << endl;
    cout << "======================================" << endl;

    cout << "\n----- STUDENT INFORMATION -----\n";
    student.displayStudent();

    cout << "\n----- SUBJECT INFORMATION -----\n";
    subject.displaySubject();

    cout << "\n----- MARKS INFORMATION -----\n";
    marks.displayMarks();

    return 0;
}