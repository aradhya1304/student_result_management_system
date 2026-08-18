#include "../include/Marks.h"

#include <iostream>

using namespace std;


// ==========================================
// DEFAULT CONSTRUCTOR
// ==========================================

Marks::Marks() {

    markId = 0;

    studentId = 0;

    subjectId = 0;

    marksObtained = 0;
}


// ==========================================
// PARAMETERIZED CONSTRUCTOR
// ==========================================

Marks::Marks(
    int markId,
    int studentId,
    int subjectId,
    int marksObtained
) {

    this->markId = markId;

    this->studentId = studentId;

    this->subjectId = subjectId;

    this->marksObtained = marksObtained;
}


// ==========================================
// GETTERS
// ==========================================

int Marks::getMarkId() const {

    return markId;
}


int Marks::getStudentId() const {

    return studentId;
}


int Marks::getSubjectId() const {

    return subjectId;
}


int Marks::getMarksObtained() const {

    return marksObtained;
}


// ==========================================
// SETTERS
// ==========================================

void Marks::setMarkId(int markId) {

    this->markId = markId;
}


void Marks::setStudentId(int studentId) {

    this->studentId = studentId;
}


void Marks::setSubjectId(int subjectId) {

    this->subjectId = subjectId;
}


void Marks::setMarksObtained(
    int marksObtained
) {

    this->marksObtained = marksObtained;
}


// ==========================================
// DISPLAY MARKS
// ==========================================

void Marks::displayMarks() const {

    cout << "Mark ID        : "
         << markId
         << endl;

    cout << "Student ID     : "
         << studentId
         << endl;

    cout << "Subject ID     : "
         << subjectId
         << endl;

    cout << "Marks Obtained : "
         << marksObtained
         << endl;
}