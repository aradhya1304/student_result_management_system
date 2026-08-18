#include "../include/Result.h"
#include <iostream>

using namespace std;

Result::Result() {
    studentId = 0;
    totalMarks = 0;
    percentage = 0;
    grade = 'F';
    status = "FAIL";
}

Result::Result(int studentId) {
    this->studentId = studentId;
    totalMarks = 0;
    percentage = 0;
    grade = 'F';
    status = "FAIL";
}

void Result::addMarks(const Marks& marks) {
    marksList.push_back(marks);
}

void Result::calculate() {

    totalMarks = 0;

    for (const Marks& marks : marksList) {
        totalMarks += marks.getMarksObtained();
    }

    if (marksList.empty()) {
        percentage = 0;
        grade = 'F';
        status = "FAIL";
        return;
    }

    double maxTotalMarks = marksList.size() * 100.0;

    percentage = (totalMarks / maxTotalMarks) * 100;

    if (percentage >= 90) {
        grade = 'A';
    }
    else if (percentage >= 80) {
        grade = 'B';
    }
    else if (percentage >= 70) {
        grade = 'C';
    }
    else if (percentage >= 60) {
        grade = 'D';
    }
    else if (percentage >= 50) {
        grade = 'E';
    }
    else {
        grade = 'F';
    }

    if (percentage >= 40) {
        status = "PASS";
    }
    else {
        status = "FAIL";
    }
}

void Result::displayResult() const {

    cout << "\n----- RESULT -----\n";

    cout << "Student ID : " << studentId << endl;

    cout << "Total Marks: " << totalMarks << endl;

    cout << "Percentage : " << percentage << "%" << endl;

    cout << "Grade      : " << grade << endl;

    cout << "Status     : " << status << endl;
}

double Result::getTotalMarks() const {
    return totalMarks;
}

double Result::getPercentage() const {
    return percentage;
}

char Result::getGrade() const {
    return grade;
}

string Result::getStatus() const {
    return status;
}