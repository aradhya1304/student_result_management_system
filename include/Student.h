#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student {
private:
    int studentId;
    string name;
    string email;
    string course;
    string phone;
    int semester;

public:
    Student();

    Student(int id, string name, string email,
        string phone, string course, int semester);

    void displayStudent() const;

    int getStudentId() const;
    string getName() const;
    string getEmail() const;
    string getCourse() const;
    int getSemester() const;
};

#endif