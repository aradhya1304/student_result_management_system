#include "ResultManager.h"
#include <iostream>
#include <iomanip>
#include <memory>
#include <stdexcept>
#include <cppconn/prepared_statement.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

ResultManager::ResultManager(Database& db) : db(db) {}

std::string ResultManager::grade(double p) {
    if (p >= 90) return "A+";
    if (p >= 80) return "A";
    if (p >= 70) return "B";
    if (p >= 60) return "C";
    if (p >= 50) return "D";
    if (p >= 40) return "E";
    return "F";
}

void ResultManager::addStudent(int rollNo, const std::string& name,
                               const std::string& course, int semester) {
    auto con = db.getConnection();
    std::unique_ptr<sql::PreparedStatement> ps(
        con->prepareStatement(
            "INSERT INTO students(roll_no,name,course,semester) VALUES(?,?,?,?)"));
    ps->setInt(1, rollNo);
    ps->setString(2, name);
    ps->setString(3, course);
    ps->setInt(4, semester);
    ps->executeUpdate();
    std::cout << "Student added successfully.\n";
}

void ResultManager::showStudents() {
    auto con = db.getConnection();
    std::unique_ptr<sql::Statement> st(con->createStatement());
    std::unique_ptr<sql::ResultSet> rs(
        st->executeQuery("SELECT roll_no,name,course,semester FROM students ORDER BY roll_no"));

    std::cout << "\n--- Students ---\n";
    while (rs->next()) {
        std::cout << rs->getInt("roll_no") << " | "
                  << rs->getString("name") << " | "
                  << rs->getString("course") << " | Sem "
                  << rs->getInt("semester") << '\n';
    }
}

void ResultManager::searchStudent(int rollNo) {
    auto con = db.getConnection();
    std::unique_ptr<sql::PreparedStatement> ps(
        con->prepareStatement(
            "SELECT roll_no,name,course,semester FROM students WHERE roll_no=?"));
    ps->setInt(1, rollNo);

    std::unique_ptr<sql::ResultSet> rs(ps->executeQuery());
    if (!rs->next()) {
        std::cout << "Student not found.\n";
        return;
    }

    Student s(rs->getInt("roll_no"), rs->getString("name"),
              rs->getString("course"), rs->getInt("semester"));
    s.display();
}

void ResultManager::deleteStudent(int rollNo) {
    auto con = db.getConnection();
    std::unique_ptr<sql::PreparedStatement> ps(
        con->prepareStatement("DELETE FROM students WHERE roll_no=?"));
    ps->setInt(1, rollNo);
    int affected = ps->executeUpdate();
    std::cout << (affected ? "Student deleted successfully.\n"
                           : "Student not found.\n");
}

void ResultManager::addOrUpdateResult(int rollNo, int subjectId, double marks) {
    if (marks < 0 || marks > 100) {
        throw std::invalid_argument("Marks must be between 0 and 100.");
    }

    auto con = db.getConnection();
    std::unique_ptr<sql::PreparedStatement> ps(
        con->prepareStatement(
            "INSERT INTO results(roll_no,subject_id,marks) VALUES(?,?,?) "
            "ON DUPLICATE KEY UPDATE marks=VALUES(marks)"));
    ps->setInt(1, rollNo);
    ps->setInt(2, subjectId);
    ps->setDouble(3, marks);
    ps->executeUpdate();
    std::cout << "Result saved successfully.\n";
}

void ResultManager::showResult(int rollNo) {
    auto con = db.getConnection();

    std::unique_ptr<sql::PreparedStatement> ps(
        con->prepareStatement(
            "SELECT s.name, sub.subject_code, sub.subject_name, r.marks "
            "FROM students s "
            "JOIN results r ON s.roll_no=r.roll_no "
            "JOIN subjects sub ON r.subject_id=sub.subject_id "
            "WHERE s.roll_no=? ORDER BY sub.subject_id"));

    ps->setInt(1, rollNo);
    std::unique_ptr<sql::ResultSet> rs(ps->executeQuery());

    double total = 0;
    int count = 0;
    std::string studentName;

    std::cout << "\n--- Result ---\n";
    while (rs->next()) {
        studentName = rs->getString("name");
        double marks = rs->getDouble("marks");
        total += marks;
        count++;

        std::cout << rs->getString("subject_code") << " - "
                  << rs->getString("subject_name") << " : "
                  << marks << "/100\n";
    }

    if (count == 0) {
        std::cout << "No result found for this roll number.\n";
        return;
    }

    double percentage = total / count;
    std::cout << "\nStudent : " << studentName
              << "\nTotal   : " << total << "/" << count * 100
              << "\nPercent : " << std::fixed << std::setprecision(2)
              << percentage << "%"
              << "\nGrade   : " << grade(percentage) << "\n";
}
