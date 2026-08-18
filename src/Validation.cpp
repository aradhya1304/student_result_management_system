#include "../include/Validation.h"

using namespace std;


// ==========================================
// CHECK NON-EMPTY STRING
// ==========================================

bool Validation::isNotEmpty(
    const string& value
) {

    return !value.empty();
}


// ==========================================
// CHECK POSITIVE NUMBER
// ==========================================

bool Validation::isPositive(
    int value
) {

    return value > 0;
}


// ==========================================
// CHECK NON-NEGATIVE NUMBER
// ==========================================

bool Validation::isNonNegative(
    int value
) {

    return value >= 0;
}


// ==========================================
// CHECK RANGE
// ==========================================

bool Validation::isInRange(
    int value,
    int minimum,
    int maximum
) {

    return value >= minimum &&
           value <= maximum;
}


// ==========================================
// CHECK MARKS
// ==========================================

bool Validation::isValidMarks(
    int marks,
    int maximumMarks
) {

    return marks >= 0 &&
           marks <= maximumMarks;
}


// ==========================================
// CHECK SEMESTER
// ==========================================

bool Validation::isValidSemester(
    int semester
) {

    return semester >= 1 &&
           semester <= 8;
}