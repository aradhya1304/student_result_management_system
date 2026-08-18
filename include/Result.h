#ifndef RESULT_H
#define RESULT_H

#include <string>

using namespace std;


class Result {

private:

    int studentId;

    int totalMarks;

    int maximumMarks;

    double percentage;

    string grade;

    string resultStatus;


public:

    // ==========================================
    // CONSTRUCTORS
    // ==========================================

    Result();

    Result(
        int studentId,
        int totalMarks,
        int maximumMarks,
        double percentage,
        const string& grade,
        const string& resultStatus
    );


    // ==========================================
    // GETTERS
    // ==========================================

    int getStudentId() const;

    int getTotalMarks() const;

    int getMaximumMarks() const;

    double getPercentage() const;

    string getGrade() const;

    string getResultStatus() const;


    // ==========================================
    // SETTERS
    // ==========================================

    void setStudentId(int studentId);

    void setTotalMarks(int totalMarks);

    void setMaximumMarks(int maximumMarks);

    void setPercentage(double percentage);

    void setGrade(const string& grade);

    void setResultStatus(const string& resultStatus);


    // ==========================================
    // CALCULATION METHODS
    // ==========================================

    void calculatePercentage();

    void calculateGrade();

    void calculateResultStatus();


    // ==========================================
    // DISPLAY
    // ==========================================

    void displayResult() const;
};

#endif