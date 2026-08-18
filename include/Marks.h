#ifndef MARKS_H
#define MARKS_H

class Marks {
private:
    int markId;
    int studentId;
    int subjectId;
    double marksObtained;

public:
    Marks();

    Marks(int markId, int studentId, int subjectId,
          double marksObtained);

    void displayMarks() const;

    int getMarkId() const;
    int getStudentId() const;
    int getSubjectId() const;
    double getMarksObtained() const;
};

#endif