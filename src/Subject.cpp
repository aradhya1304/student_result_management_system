#include "../include/Subject.h"

#include <iostream>

using namespace std;


// ==========================================
// DEFAULT CONSTRUCTOR
// ==========================================

Subject::Subject() {

    subjectId = 0;

    subjectCode = "";

    subjectName = "";

    maxMarks = 100;
}


// ==========================================
// PARAMETERIZED CONSTRUCTOR
// ==========================================

Subject::Subject(
    int id,
    string code,
    string name,
    int maxMarks
) {

    this->subjectId = id;

    this->subjectCode = code;

    this->subjectName = name;

    this->maxMarks = maxMarks;
}


// ==========================================
// GETTERS
// ==========================================

int Subject::getSubjectId() const {

    return subjectId;
}


string Subject::getSubjectCode() const {

    return subjectCode;
}


string Subject::getSubjectName() const {

    return subjectName;
}


int Subject::getMaxMarks() const {

    return maxMarks;
}


// ==========================================
// SETTERS
// ==========================================

void Subject::setSubjectId(int id) {

    subjectId = id;
}


void Subject::setSubjectCode(
    const string& code
) {

    subjectCode = code;
}


void Subject::setSubjectName(
    const string& name
) {

    subjectName = name;
}


void Subject::setMaxMarks(int marks) {

    maxMarks = marks;
}


// ==========================================
// DISPLAY SUBJECT
// ==========================================

void Subject::displaySubject() const {

    cout << "Subject ID   : "
         << subjectId << endl;

    cout << "Subject Code : "
         << subjectCode << endl;

    cout << "Subject Name : "
         << subjectName << endl;

    cout << "Max Marks    : "
         << maxMarks << endl;
}