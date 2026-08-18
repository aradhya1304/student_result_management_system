#include <iostream>
#include "include/Student.h"

using namespace std;

int main() {

    Student student(
        101,
        "Aradhya",
        "aradhya@example.com",
        "B.Tech",
        3
    );

    cout << "======================================" << endl;
    cout << "      STUDENT INFORMATION" << endl;
    cout << "======================================" << endl;

    student.displayStudent();

    return 0;
}