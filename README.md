# 🎓 Student Result Management System

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-17-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" />
  <img src="https://img.shields.io/badge/MySQL-Database-4479A1?style=for-the-badge&logo=mysql&logoColor=white" />
  <img src="https://img.shields.io/badge/OOP-Object%20Oriented-6A1B9A?style=for-the-badge" />
  <img src="https://img.shields.io/badge/DBMS-Relational%20Database-00897B?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Git-GitHub-F05032?style=for-the-badge&logo=git&logoColor=white" />
</p>

<p align="center">
  <b>🚀 A professional console-based Student Result Management System built with C++, OOP, MySQL and DBMS concepts.</b>
</p>

<p align="center">
  <i>Designed to demonstrate real-world software structure, database integration, object-oriented programming and version control.</i>
</p>

---

# 🧊 PROJECT SHOWCASE

```text
╔══════════════════════════════════════════════════════════════╗
║                                                              ║
║              🎓 STUDENT RESULT MANAGEMENT SYSTEM             ║
║                                                              ║
║          C++  +  OOP  +  MySQL  +  DBMS  +  GitHub          ║
║                                                              ║
║       ┌─────────────┐        ┌─────────────┐                ║
║       │ 👨‍🎓 STUDENT │        │ 📚 SUBJECT  │                ║
║       └──────┬──────┘        └──────┬──────┘                ║
║              │                      │                       ║
║              └──────────┬───────────┘                       ║
║                         ▼                                   ║
║                  ┌──────────────┐                           ║
║                  │ 📝   MARKS   │                           ║
║                  └───────┬──────┘                           ║
║                          │                                  ║
║                          ▼                                  ║
║                  ┌──────────────┐                           ║
║                  │ 📊  RESULT   │                           ║
║                  └───────┬──────┘                           ║
║                          │                                  ║
║                          ▼                                  ║
║                  ┌──────────────┐                           ║
║                  │ 📈 REPORTS   │                           ║
║                  └──────────────┘                           ║
║                                                              ║
╚══════════════════════════════════════════════════════════════╝
📌 TABLE OF CONTENTS
Project Overview
Why This Project
Project Objectives
Key Features
System Architecture
Application Flow
Database Architecture
ER Diagram
OOP Concepts
DBMS Concepts
CRUD Operations
Result Calculation
Project Structure
Technologies Used
Requirements
Installation
Database Setup
Configuration
Compilation
Running the Application
Application Menu
Sample Result
Validation
Git Workflow
Commit Strategy
Testing
Learning Outcomes
Future Improvements
Screenshots
Author
License
🎯 PROJECT OVERVIEW

The Student Result Management System is a console-based database application developed using:

╔══════════════════════════════════════╗
║              TECHNOLOGY              ║
╠══════════════════════════════════════╣
║                                      ║
║  💻 C++17                            ║
║  🧩 Object-Oriented Programming      ║
║  🐬 MySQL                            ║
║  🗄️ DBMS                             ║
║  🔗 MySQL X DevAPI                   ║
║  🌳 Git & GitHub                     ║
║                                      ║
╚══════════════════════════════════════╝

The system allows administrators/users to manage:

👨‍🎓 Student information
📚 Subject information
📝 Student marks
📊 Student results
📈 Performance reports

The project demonstrates how a C++ application communicates with a relational MySQL database while following object-oriented programming principles.

💡 WHY THIS PROJECT?

Traditional result management can become difficult when student information, subjects and marks are maintained manually.

This project provides a structured digital solution.

Without the system
Student Data
     ↓
Manual Records
     ↓
Manual Marks
     ↓
Manual Calculation
     ↓
Possible Errors
With the system
Student Data
     ↓
MySQL Database
     ↓
Marks Management
     ↓
Automatic Calculation
     ↓
Result Generation
     ↓
Accurate Reports
🎯 PROJECT OBJECTIVES

The main objectives are:

01 → Learn C++ Object-Oriented Programming


02 → Implement a relational MySQL database


03 → Connect C++ with MySQL


04 → Implement CRUD operations


05 → Understand database relationships


06 → Implement SQL JOIN operations


07 → Generate student results automatically


08 → Validate user input


09 → Practice Git & GitHub


10 → Build a professional portfolio project
✨ KEY FEATURES
👨‍🎓 1. Student Management
┌───────────────────────────────────────┐
│         👨‍🎓 STUDENT MANAGEMENT       │
├───────────────────────────────────────┤
│                                       │
│  ➤ Add Student                        │
│  ➤ Display Students                   │
│  ➤ Search Student                     │
│  ➤ Update Student                     │
│  ➤ Delete Student                     │
│                                       │
└───────────────────────────────────────┘

Student information includes:

Student ID
Name
Email
Phone
Course
Semester
📚 2. Subject Management
┌───────────────────────────────────────┐
│          📚 SUBJECT MANAGEMENT         │
├───────────────────────────────────────┤
│                                       │
│  ➤ Add Subject                        │
│  ➤ Display Subjects                   │
│  ➤ Search Subject                     │
│  ➤ Update Subject                     │
│  ➤ Delete Subject                     │
│                                       │
└───────────────────────────────────────┘

Subject information includes:

Subject ID
Subject Code
Subject Name
Maximum Marks
📝 3. Marks Management
┌───────────────────────────────────────┐
│            📝 MARKS MANAGEMENT        │
├───────────────────────────────────────┤
│                                       │
│  ➤ Add Marks                          │
│  ➤ Display All Marks                  │
│  ➤ Display Student Marks              │
│  ➤ Update Marks                       │
│  ➤ Delete Marks                       │
│                                       │
└───────────────────────────────────────┘

The system maintains the relationship between:

Student
   │
   ▼
Marks
   │
   ▼
Subject
📊 4. Result Generation

The system automatically calculates:

                 📝 MARKS
                    │
                    ▼
              Total Marks
                    │
                    ▼
             Maximum Marks
                    │
                    ▼
              Percentage
                    │
                    ▼
                 Grade
                    │
                    ▼
               PASS/FAIL
📈 5. Reports & Statistics

The system can be extended to provide:

╔══════════════════════════════════════╗
║          📈 PERFORMANCE REPORT       ║
╠══════════════════════════════════════╣
║                                      ║
║  👨‍🎓 Total Students                  ║
║  📚 Total Subjects                   ║
║  📝 Students With Marks              ║
║  ✅ Students Passed                  ║
║  ❌ Students Failed                  ║
║  📊 Average Percentage               ║
║  🏆 Top Performers                  ║
║                                      ║
╚══════════════════════════════════════╝
🏗️ SYSTEM ARCHITECTURE
                         👤 USER
                           │
                           ▼
              ┌────────────────────────┐
              │      C++ CONSOLE        │
              │       APPLICATION       │
              └───────────┬────────────┘
                          │
             ┌────────────┼────────────┐
             │            │            │
             ▼            ▼            ▼
        👨‍🎓 Student    📚 Subject    📝 Marks
        Management     Management    Management
             │            │            │
             └────────────┼────────────┘
                          │
                          ▼
                   📊 Result Engine
                          │
                          ▼
                  🔗 MySQL X DevAPI
                          │
                          ▼
                 ┌─────────────────┐
                 │   🐬 MySQL DB   │
                 └────────┬────────┘
                          │
            ┌─────────────┼─────────────┐
            ▼             ▼             ▼
       👨‍🎓 students    📚 subjects    📝 marks
🔄 APPLICATION FLOW
                     🚀 START
                        │
                        ▼
               Connect to MySQL
                        │
                        ▼
                  Main Menu
                        │
          ┌─────────────┼─────────────┐
          │             │             │
          ▼             ▼             ▼
       Student       Subject        Marks
      Management    Management    Management
          │             │             │
          └─────────────┼─────────────┘
                        │
                        ▼
                 Generate Result
                        │
                        ▼
                  View Report
                        │
                        ▼
                      EXIT
🗄️ DATABASE ARCHITECTURE

The system uses a relational database.

┌─────────────────────┐
│      STUDENTS       │
├─────────────────────┤
│ PK student_id       │
│    name             │
│    email            │
│    phone            │
│    course           │
│    semester         │
└──────────┬──────────┘
           │
           │ 1
           │
           │ N
           ▼
┌─────────────────────┐
│       MARKS         │
├─────────────────────┤
│ PK mark_id          │
│ FK student_id       │
│ FK subject_id       │
│    marks_obtained   │
└──────────┬──────────┘
           │
           │ N
           │
           │ 1
           ▼
┌─────────────────────┐
│      SUBJECTS       │
├─────────────────────┤
│ PK subject_id       │
│    subject_code     │
│    subject_name     │
│    max_marks        │
└─────────────────────┘
🔗 ER DIAGRAM
              ┌───────────────────┐
              │      STUDENT      │
              ├───────────────────┤
              │ PK student_id     │
              │    name           │
              │    email          │
              │    phone          │
              │    course         │
              │    semester       │
              └─────────┬─────────┘
                        │
                        │
                    1 : N
                        │
                        ▼
              ┌───────────────────┐
              │       MARKS       │
              ├───────────────────┤
              │ PK mark_id        │
              │ FK student_id     │
              │ FK subject_id     │
              │    marks_obtained │
              └─────────┬─────────┘
                        │
                        │
                    N : 1
                        │
                        ▼
              ┌───────────────────┐
              │      SUBJECT      │
              ├───────────────────┤
              │ PK subject_id     │
              │    subject_code   │
              │    subject_name   │
              │    max_marks      │
              └───────────────────┘
🧠 OOP CONCEPTS

This project demonstrates practical Object-Oriented Programming.

🔹 Classes & Objects

Main classes:

Student
Subject
Marks
Result
Database
🔹 Encapsulation

Data members are kept private and accessed using public methods.

class Student
{
private:


    int studentId;
    string name;


public:


    int getStudentId();
    string getName();
};
🔹 Abstraction

Database complexity is hidden inside the Database class.

main.cpp
    │
    ▼
Database Class
    │
    ▼
SQL Query
    │
    ▼
MySQL

The user does not need to know how the SQL query is internally executed.

🔹 Constructors

Constructors are used to initialize objects.

🔹 Modular Programming

The project separates functionality into different files:

Student
Subject
Marks
Result
Database
Main

This makes the application easier to maintain.

🐬 DBMS CONCEPTS
Concept	Implementation
Primary Key	Unique record identification
Foreign Key	Table relationships
Unique Constraint	Prevent duplicate values
NOT NULL	Required data
CHECK	Data validation
CRUD	Create, Read, Update, Delete
JOIN	Combine related tables
WHERE	Filter records
COUNT	Count records
SUM	Calculate totals
AVG	Calculate averages
GROUP BY	Group records
Relational Model	Structured database
🔄 CRUD OPERATIONS
                    CRUD
                     │
       ┌─────────────┼─────────────┐
       │             │             │
       ▼             ▼             ▼
    CREATE          READ         UPDATE
       │             │             │
       ▼             ▼             ▼
    INSERT        SELECT        UPDATE
       │             │             │
       └─────────────┼─────────────┘
                     │
                     ▼
                   DELETE
Student CRUD
CREATE → Add Student
READ   → Display/Search Student
UPDATE → Update Student
DELETE → Delete Student
Subject CRUD
CREATE → Add Subject
READ   → Display/Search Subject
UPDATE → Update Subject
DELETE → Delete Subject
Marks CRUD
CREATE → Add Marks
READ   → Display Marks
UPDATE → Update Marks
DELETE → Delete Marks
🧮 RESULT CALCULATION

The result engine follows:

Total Marks
     │
     ▼
Sum of Obtained Marks
     │
     ▼
Maximum Marks
     │
     ▼
Percentage
     │
     ▼
Grade
     │
     ▼
PASS / FAIL
Percentage Formula
Percentage =


(Total Obtained Marks / Maximum Marks) × 100
Example
Obtained = 264
Maximum  = 300


Percentage = (264 / 300) × 100


Percentage = 88.00%
Grade System
90% - 100%  → A+
80% - 89%   → A
70% - 79%   → B+
60% - 69%   → B
50% - 59%   → C
40% - 49%   → D
Below 40%   → F
📁 PROJECT STRUCTURE
Student-Result-Management-System/
│
├── 📂 include/
│   │
│   ├── Student.h
│   ├── Subject.h
│   ├── Marks.h
│   ├── Result.h
│   └── Database.h
│
├── 📂 src/
│   │
│   ├── Student.cpp
│   ├── Subject.cpp
│   ├── Marks.cpp
│   ├── Result.cpp
│   ├── Database.cpp
│   └── main.cpp
│
├── 📂 sql/
│   │
│   └── database.sql
│
├── 📂 docs/
│   │
│   ├── architecture.png
│   ├── er-diagram.png
│   └── screenshots/
│
├── 📄 README.md
├── 📄 .gitignore
└── 📄 LICENSE
🛠️ TECHNOLOGIES USED
╔════════════════════════════════════════════╗
║              TECHNOLOGY STACK              ║
╠════════════════════════════════════════════╣
║                                            ║
║  💻 Language       → C++17                 ║
║  🧩 Paradigm       → OOP                   ║
║  🐬 Database       → MySQL                 ║
║  🔗 Connectivity   → MySQL X DevAPI        ║
║  🗄️ Concepts       → DBMS                  ║
║  🛠️ IDE             → Visual Studio Code   ║
║  🗃️ DB Tool         → MySQL Workbench      ║
║  🌳 Version Control → Git                  ║
║  ☁️ Repository      → GitHub               ║
║                                            ║
╚════════════════════════════════════════════╝
💻 REQUIREMENTS

Before running the project, install:

✓ C++ Compiler
✓ C++17 Support
✓ MySQL Server
✓ MySQL Workbench
✓ MySQL X DevAPI / Connector
✓ Git
✓ Visual Studio Code
⚙️ INSTALLATION
1️⃣ Clone Repository
git clone https://github.com/YOUR_USERNAME/student_result_management_system.git
cd student_result_management_system
🐬 DATABASE SETUP

Open MySQL Workbench.

Create the database:

CREATE DATABASE student_result_db;


USE student_result_db;

Then execute:

sql/database.sql

This creates the required tables.

🔐 DATABASE CONFIGURATION

Open:

src/Database.cpp

Configure your MySQL connection:

host = "localhost";
username = "root";
password = "YOUR_PASSWORD";
databaseName = "student_result_db";
⚠️ Security

Never commit your real database password.

Use:

YOUR_PASSWORD

or environment/configuration variables.

🔨 COMPILATION

Example:

g++ -std=c++17 src/*.cpp -Iinclude -o student_result

Depending on your MySQL installation, you may need to add the MySQL X DevAPI include/library paths.

▶️ RUN THE APPLICATION
Windows
student_result.exe
Linux/macOS
./student_result
🖥️ APPLICATION MENU

The application follows a menu-driven structure.

╔══════════════════════════════════════════════╗
║       🎓 STUDENT RESULT MANAGEMENT           ║
╠══════════════════════════════════════════════╣
║                                              ║
║  1. 👨‍🎓 Student Management                    ║
║  2. 📚 Subject Management                    ║
║  3. 📝 Marks Management                      ║
║  4. 📊 Generate Result                       ║
║  5. 📈 Reports                               ║
║  6. 🚪 Exit                                  ║
║                                              ║
╚══════════════════════════════════════════════╝
👨‍🎓 STUDENT MENU
╔════════════════════════════════════╗
║       👨‍🎓 STUDENT MANAGEMENT       ║
╠════════════════════════════════════╣
║                                    ║
║  1. Add Student                    ║
║  2. Display Students               ║
║  3. Search Student                 ║
║  4. Update Student                 ║
║  5. Delete Student                 ║
║  6. Back                           ║
║                                    ║
╚════════════════════════════════════╝
📚 SUBJECT MENU
╔════════════════════════════════════╗
║        📚 SUBJECT MANAGEMENT       ║
╠════════════════════════════════════╣
║                                    ║
║  1. Add Subject                    ║
║  2. Display Subjects               ║
║  3. Search Subject                 ║
║  4. Update Subject                 ║
║  5. Delete Subject                 ║
║  6. Back                           ║
║                                    ║
╚════════════════════════════════════╝
📝 MARKS MENU
╔════════════════════════════════════╗
║         📝 MARKS MANAGEMENT        ║
╠════════════════════════════════════╣
║                                    ║
║  1. Add Marks                      ║
║  2. Display All Marks              ║
║  3. Display Student Marks          ║
║  4. Update Marks                   ║
║  5. Delete Marks                   ║
║  6. Back                           ║
║                                    ║
╚════════════════════════════════════╝
📊 SAMPLE RESULT
==============================================================
                    🎓 STUDENT RESULT
==============================================================


Student ID : 101
Name       : Aradhya Gupta
Course     : B.Tech
Semester   : 3


--------------------------------------------------------------
Code           Subject                  Max        Obtained
--------------------------------------------------------------
CS101          C++ Programming          100             88
CS102          DBMS                     100             91
CS103          MySQL                    100             85
CS104          OOP                      100             92
--------------------------------------------------------------


Total Subjects : 4
Total Marks    : 356 / 400
Percentage     : 89.00%
Grade          : A
Result         : PASS


==============================================================
🛡️ INPUT VALIDATION

The application validates user input.

╔════════════════════════════════════════╗
║           🛡️ VALIDATION                ║
╠════════════════════════════════════════╣
║                                        ║
║  ✓ Invalid Student ID                  ║
║  ✓ Invalid Subject ID                  ║
║  ✓ Negative Marks                      ║
║  ✓ Marks > Maximum Marks               ║
║  ✓ Invalid Semester                    ║
║  ✓ Duplicate Student                  ║
║  ✓ Duplicate Subject                  ║
║  ✓ Duplicate Marks                    ║
║  ✓ Empty Input                         ║
║  ✓ Invalid Menu Choice                 ║
║                                        ║
╚════════════════════════════════════════╝
🔗 DATABASE RELATIONSHIPS
        STUDENTS
           │
           │ 1
           │
           │
           │ N
         MARKS
           │
           │ N
           │
           │ 1
           ▼
        SUBJECTS
Meaning

One student can have many marks.

One subject can have marks for many students.

The marks table connects the two.

🧪 TESTING

The following cases should be tested:

╔══════════════════════════════════════════╗
║               TEST CASES                 ║
╠══════════════════════════════════════════╣
║                                          ║
║ ✓ Add valid student                      ║
║ ✓ Add invalid student                    ║
║ ✓ Search student                         ║
║ ✓ Update student                         ║
║ ✓ Delete student                         ║
║                                          ║
║ ✓ Add valid subject                      ║
║ ✓ Duplicate subject code                 ║
║ ✓ Update subject                         ║
║ ✓ Delete subject                         ║
║                                          ║
║ ✓ Add valid marks                        ║
║ ✓ Negative marks                         ║
║ ✓ Marks greater than maximum             ║
║ ✓ Update marks                           ║
║ ✓ Delete marks                           ║
║                                          ║
║ ✓ Generate result                        ║
║ ✓ Calculate percentage                   ║
║ ✓ Calculate grade                        ║
║ ✓ PASS / FAIL                            ║
║                                          ║
╚══════════════════════════════════════════╝
🌳 GIT & GITHUB WORKFLOW

The project is developed incrementally using Git.

                   🌳 MAIN
                     │
                     ▼
              Project Setup
                     │
                     ▼
              Student Module
                     │
                     ▼
              Subject Module
                     │
                     ▼
                Marks Module
                     │
                     ▼
              Result Module
                     │
                     ▼
              MySQL Integration
                     │
                     ▼
                CRUD System
                     │
                     ▼
             Validation System
                     │
                     ▼
                Reports
                     │
                     ▼
             Documentation
                     │
                     ▼
               Final Release
📝 COMMIT STRATEGY

Instead of creating one huge commit, development is divided into meaningful milestones.

01 → Initial project setup


02 → Add Student class


03 → Add Subject class


04 → Add Marks class


05 → Add Result class


06 → Add MySQL database connection


07 → Implement student CRUD


08 → Implement subject CRUD


09 → Implement marks CRUD


10 → Add result generation


11 → Add database validation


12 → Add database constraints


13 → Improve result report


14 → Add reports and statistics


15 → Improve input validation


16 → Add project documentation


17 → Final project cleanup

Example:

git add .
git commit -m "Implement student CRUD operations"
git push origin main
📦 RELEASE PLAN
v1.0
│
├── Student Management
├── Subject Management
├── Marks Management
├── MySQL Integration
└── Basic Result Generation


        ↓


v1.1
│
├── Validation
├── Database Constraints
└── Improved Result Report


        ↓


v2.0
│
├── Reports
├── Statistics
├── Better UI
└── Authentication
📸 SCREENSHOTS

Screenshots will be added here after the application is finalized.

Main Menu
docs/screenshots/main-menu.png
Student Management
docs/screenshots/student-management.png
Subject Management
docs/screenshots/subject-management.png
Marks Management
docs/screenshots/marks-management.png
Result Report
docs/screenshots/result-report.png
🚀 FUTURE IMPROVEMENTS

The current console application can be upgraded into a complete student portal.

                     🚀 FUTURE
                        │
        ┌───────────────┼────────────────┐
        │               │                │
        ▼               ▼                ▼
   🔐 Login         🖥️ GUI            📄 PDF
 Authentication    Application        Reports
        │               │                │
        ├───────────────┼────────────────┤
        │               │                │
        ▼               ▼                ▼
   👨‍🎓 Student       📊 Dashboard      📈 Analytics
      Portal
        │
        ▼
   🌐 Web Version

Possible future features:

🔐 Admin authentication
👨‍🎓 Student login
🖥️ GUI application
🌐 Web application
📄 PDF result generation
📊 Dashboard
📈 Advanced analytics
🎓 CGPA calculation
📅 Attendance management
📧 Email result
📤 Excel export
🏫 Department management
📚 Semester management
🎓 LEARNING OUTCOMES

This project helps demonstrate practical knowledge of:

C++
✓ C++17
✓ Classes & Objects
✓ Functions
✓ Constructors
✓ STL
✓ Exception Handling
✓ Header/Source separation
OOP
✓ Encapsulation
✓ Abstraction
✓ Modular Design
✓ Object Interaction
DBMS
✓ Relational Databases
✓ SQL
✓ Primary Keys
✓ Foreign Keys
✓ Constraints
✓ CRUD
✓ JOIN
✓ Aggregate Functions
Software Development
✓ Git
✓ GitHub
✓ Version Control
✓ Project Organization
✓ Documentation
✓ Testing
📊 PROJECT HIGHLIGHTS
╔══════════════════════════════════════════════════╗
║              🎓 PROJECT HIGHLIGHTS               ║
╠══════════════════════════════════════════════════╣
║                                                  ║
║  💻 Language          C++17                      ║
║  🐬 Database          MySQL                      ║
║  🧩 Architecture      Modular OOP                ║
║  🗄️ DBMS              Relational Database       ║
║  🔗 Connectivity      MySQL X DevAPI             ║
║  🔄 Operations        Full CRUD                  ║
║  📊 Result            Automatic Calculation      ║
║  🛡️ Validation        Input + Database          ║
║  🌳 Version Control   Git + GitHub              ║
║                                                  ║
╚══════════════════════════════════════════════════╝
👨‍💻 AUTHOR
<p align="center">
Aradhya Gupta

🎓 Student Developer

💻 C++ | OOP | MySQL | DBMS

</p>
⭐ SUPPORT THE PROJECT

If you find this project useful or interesting:

⭐ Star the repository
🍴 Fork the repository
🐛 Report issues
💡 Suggest improvements
📜 LICENSE

This project is created for educational and learning purposes.

You are free to study, modify and improve the project according to the terms of the selected license.

🎉 FINAL PROJECT VISION
                         🎓
                  STUDENT RESULT
                    MANAGEMENT
                      SYSTEM
                         │
             ┌───────────┼───────────┐
             │           │           │
             ▼           ▼           ▼
           C++         OOP         MySQL
             │           │           │
             └───────────┼───────────┘
                         │
                         ▼
                       DBMS
                         │
                         ▼
                       CRUD
                         │
                         ▼
                      RESULTS
                         │
                         ▼
                      REPORTS
                         │
                         ▼
                      GITHUB
                         │
                         ▼
                    🚀 PORTFOLIO
                       PROJECT
<p align="center">