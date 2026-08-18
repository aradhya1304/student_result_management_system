#include "../include/Marks.h"
#include <iostream>

using namespace std;

Marks::Marks() {
    markId = 0;
    studentId = 0;
    subjectId = 0;
    marksObtained = 0;
}

Marks::Marks(int markId, int studentId, int subjectId,
             double marksObtained) {
    this->markId = markId;
    this->studentId = studentId;
    this->subjectId = subjectId;
    this->marksObtained = marksObtained;
}

void Marks::displayMarks() const {
    cout << "Mark ID        : " << markId << endl;
    cout << "Student ID     : " << studentId << endl;
    cout << "Subject ID     : " << subjectId << endl;
    cout << "Marks Obtained : " << marksObtained << endl;
}

int Marks::getMarkId() const {
    return markId;
}

int Marks::getStudentId() const {
    return studentId;
}

int Marks::getSubjectId() const {
    return subjectId;
}

double Marks::getMarksObtained() const {
    return marksObtained;
}