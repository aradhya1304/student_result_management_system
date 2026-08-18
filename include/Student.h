#pragma once
#include <string>

class Person {
protected:
    std::string name;

public:
    explicit Person(const std::string& name);
    virtual ~Person() = default;
    virtual void display() const = 0;
};

class Student : public Person {
private:
    int rollNo;
    std::string course;
    int semester;

public:
    Student(int rollNo, const std::string& name,
            const std::string& course, int semester);

    int getRollNo() const;
    const std::string& getName() const;
    const std::string& getCourse() const;
    int getSemester() const;

    void display() const override;
};
