#include "../include/Result.h"

#include <iostream>
#include <iomanip>

using namespace std;


// ==========================================
// DEFAULT CONSTRUCTOR
// ==========================================

Result::Result() {

    studentId = 0;

    totalMarks = 0;

    maximumMarks = 0;

    percentage = 0.0;

    grade = "N/A";

    resultStatus = "N/A";
}


// ==========================================
// PARAMETERIZED CONSTRUCTOR
// ==========================================

Result::Result(
    int studentId,
    int totalMarks,
    int maximumMarks,
    double percentage,
    const string& grade,
    const string& resultStatus
) {

    this->studentId = studentId;

    this->totalMarks = totalMarks;

    this->maximumMarks = maximumMarks;

    this->percentage = percentage;

    this->grade = grade;

    this->resultStatus = resultStatus;
}


// ==========================================
// GETTERS
// ==========================================

int Result::getStudentId() const {

    return studentId;
}


int Result::getTotalMarks() const {

    return totalMarks;
}


int Result::getMaximumMarks() const {

    return maximumMarks;
}


double Result::getPercentage() const {

    return percentage;
}


string Result::getGrade() const {

    return grade;
}


string Result::getResultStatus() const {

    return resultStatus;
}


// ==========================================
// SETTERS
// ==========================================

void Result::setStudentId(int studentId) {

    this->studentId = studentId;
}


void Result::setTotalMarks(int totalMarks) {

    this->totalMarks = totalMarks;
}


void Result::setMaximumMarks(int maximumMarks) {

    this->maximumMarks = maximumMarks;
}


void Result::setPercentage(double percentage) {

    this->percentage = percentage;
}


void Result::setGrade(const string& grade) {

    this->grade = grade;
}


void Result::setResultStatus(
    const string& resultStatus
) {

    this->resultStatus = resultStatus;
}


// ==========================================
// CALCULATE PERCENTAGE
// ==========================================

void Result::calculatePercentage() {

    if (maximumMarks <= 0) {

        percentage = 0.0;

        return;
    }


    percentage =
        (
            static_cast<double>(totalMarks)
            /
            maximumMarks
        )
        * 100.0;
}


// ==========================================
// CALCULATE GRADE
// ==========================================

void Result::calculateGrade() {

    if (percentage >= 90) {

        grade = "A+";
    }

    else if (percentage >= 80) {

        grade = "A";
    }

    else if (percentage >= 70) {

        grade = "B";
    }

    else if (percentage >= 60) {

        grade = "C";
    }

    else if (percentage >= 50) {

        grade = "D";
    }

    else if (percentage >= 40) {

        grade = "E";
    }

    else {

        grade = "F";
    }
}


// ==========================================
// CALCULATE RESULT STATUS
// ==========================================

void Result::calculateResultStatus() {

    if (percentage >= 40) {

        resultStatus = "PASS";
    }

    else {

        resultStatus = "FAIL";
    }
}


// ==========================================
// DISPLAY RESULT
// ==========================================

void Result::displayResult() const {

    cout << "\n";

    cout << "========================================"
         << endl;

    cout << "              STUDENT RESULT"
         << endl;

    cout << "========================================"
         << endl;


    cout << "Student ID     : "
         << studentId
         << endl;


    cout << "Total Marks    : "
         << totalMarks
         << " / "
         << maximumMarks
         << endl;


    cout << fixed
         << setprecision(2);


    cout << "Percentage     : "
         << percentage
         << "%"
         << endl;


    cout << "Grade          : "
         << grade
         << endl;


    cout << "Result         : "
         << resultStatus
         << endl;


    cout << "========================================"
         << endl;
}