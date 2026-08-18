#include "Student.h"
#include <iostream>

Person::Person(const std::string& name) : name(name) {}

Student::Student(int rollNo, const std::string& name,
                 const std::string& course, int semester)
    : Person(name), rollNo(rollNo), course(course), semester(semester) {}

int Student::getRollNo() const { return rollNo; }
const std::string& Student::getName() const { return name; }
const std::string& Student::getCourse() const { return course; }
int Student::getSemester() const { return semester; }

void Student::display() const {
    std::cout << "Roll No : " << rollNo << "\n"
              << "Name    : " << name << "\n"
              << "Course  : " << course << "\n"
              << "Semester: " << semester << "\n";
}
