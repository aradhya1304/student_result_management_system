#ifndef MARKS_H
#define MARKS_H

class Marks {

private:

    int markId;

    int studentId;

    int subjectId;

    int marksObtained;


public:

    Marks();

    Marks(
        int markId,
        int studentId,
        int subjectId,
        int marksObtained
    );


    // Getters

    int getMarkId() const;

    int getStudentId() const;

    int getSubjectId() const;

    int getMarksObtained() const;


    // Setters

    void setMarkId(int markId);

    void setStudentId(int studentId);

    void setSubjectId(int subjectId);

    void setMarksObtained(int marksObtained);


    // Display

    void displayMarks() const;
};

#endif