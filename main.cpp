#include <iostream>

#include "include/Student.h"
#include "include/Subject.h"
#include "include/Marks.h"
#include "include/Result.h"

using namespace std;

int main() {

    Student student(
        101,
        "Aradhya",
        "aradhya@example.com",
        "B.Tech",
        3
    );

    Subject dbms(
        201,
        "Database Management System",
        100,
        3
    );

    Subject dataStructures(
        202,
        "Data Structures",
        100,
        3
    );

    Subject mathematics(
        203,
        "Mathematics",
        100,
        3
    );

    Marks dbmsMarks(
        301,
        101,
        201,
        85
    );

    Marks dataStructureMarks(
        302,
        101,
        202,
        78
    );

    Marks mathematicsMarks(
        303,
        101,
        203,
        91
    );

    Result result(101);

    result.addMarks(dbmsMarks);
    result.addMarks(dataStructureMarks);
    result.addMarks(mathematicsMarks);

    result.calculate();

    cout << "======================================" << endl;
    cout << "      STUDENT RESULT MANAGEMENT" << endl;
    cout << "======================================" << endl;

    cout << "\n----- STUDENT INFORMATION -----\n";

    student.displayStudent();

    cout << "\n----- RESULT -----\n";

    result.displayResult();

    return 0;
}