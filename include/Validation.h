#ifndef VALIDATION_H
#define VALIDATION_H

#include <string>

using namespace std;


class Validation {

public:

    // ==========================================
    // STRING VALIDATION
    // ==========================================

    static bool isNotEmpty(
        const string& value
    );


    // ==========================================
    // INTEGER VALIDATION
    // ==========================================

    static bool isPositive(
        int value
    );


    static bool isNonNegative(
        int value
    );


    // ==========================================
    // RANGE VALIDATION
    // ==========================================

    static bool isInRange(
        int value,
        int minimum,
        int maximum
    );


    // ==========================================
    // MARKS VALIDATION
    // ==========================================

    static bool isValidMarks(
        int marks,
        int maximumMarks
    );


    // ==========================================
    // SEMESTER VALIDATION
    // ==========================================

    static bool isValidSemester(
        int semester
    );
};

#endif