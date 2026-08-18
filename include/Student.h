#ifndef SUBJECT_H
#define SUBJECT_H

#include <string>

using namespace std;

class Subject {

private:

    int subjectId;

    string subjectCode;

    string subjectName;

    int maxMarks;

public:

    Subject();

    Subject(
        int id,
        string code,
        string name,
        int maxMarks
    );

    int getSubjectId() const;

    string getSubjectCode() const;

    string getSubjectName() const;

    int getMaxMarks() const;

    void setSubjectId(int id);

    void setSubjectCode(const string& code);

    void setSubjectName(const string& name);

    void setMaxMarks(int marks);

    void displaySubject() const;
};

#endif