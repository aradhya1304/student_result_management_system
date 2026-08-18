#ifndef SUBJECT_H
#define SUBJECT_H

#include <string>

using namespace std;

class Subject {
private:
    int subjectId;
    string subjectName;
    int maxMarks;
    int semester;

public:
    Subject();

    Subject(int id, string name, int maxMarks, int semester);

    void displaySubject() const;

    int getSubjectId() const;
    string getSubjectName() const;
    int getMaxMarks() const;
    int getSemester() const;
};

#endif