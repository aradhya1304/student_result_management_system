#ifndef RESULT_H
#define RESULT_H

#include <vector>
#include "Marks.h"

using namespace std;

class Result {
private:
    int studentId;
    vector<Marks> marksList;

    double totalMarks;
    double percentage;
    char grade;
    string status;

    void calculateResult();

public:
    Result();

    Result(int studentId);

    void addMarks(const Marks& marks);

    void calculate();

    void displayResult() const;

    double getTotalMarks() const;
    double getPercentage() const;
    char getGrade() const;
    string getStatus() const;
};

#endif