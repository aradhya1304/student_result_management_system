#include "../include/Subject.h"
#include <iostream>

using namespace std;

Subject::Subject() {
    subjectId = 0;
    subjectName = "";
    maxMarks = 0;
    semester = 0;
}

Subject::Subject(int id, string name, int maxMarks, int semester) {
    this->subjectId = id;
    this->subjectName = name;
    this->maxMarks = maxMarks;
    this->semester = semester;
}

void Subject::displaySubject() const {
    cout << "Subject ID : " << subjectId << endl;
    cout << "Subject    : " << subjectName << endl;
    cout << "Max Marks  : " << maxMarks << endl;
    cout << "Semester   : " << semester << endl;
}

int Subject::getSubjectId() const {
    return subjectId;
}

string Subject::getSubjectName() const {
    return subjectName;
}

int Subject::getMaxMarks() const {
    return maxMarks;
}

int Subject::getSemester() const {
    return semester;
}