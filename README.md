# Student Result Management System
### C++ + OOP + MySQL

A console-based Student Result Management System built using **C++**, **Object-Oriented Programming (OOP)** and **SQL/MySQL**.

## Features
- Add student
- View all students
- Search student by roll number
- Add/update subject marks
- View complete result
- Calculate total, percentage and grade
- Delete student
- MySQL database storage

## OOP concepts used
- Classes and objects
- Encapsulation
- Constructors
- Inheritance
- Abstraction
- Polymorphism (virtual method)
- Separation of responsibilities

## Project structure
```text
Student-Result-Management-System-CPP-SQL-OOP/
├── include/
│   ├── Database.h
│   ├── Student.h
│   └── ResultManager.h
├── src/
│   ├── Database.cpp
│   ├── Student.cpp
│   ├── ResultManager.cpp
│   └── main.cpp
├── sql/
│   └── database.sql
├── CMakeLists.txt
└── README.md
```

## Requirements
- Windows/Linux
- C++17 compiler
- MySQL Server
- MySQL Connector/C++ 8.x
- CMake (optional, but recommended)

## Database setup
1. Start MySQL.
2. Open MySQL Workbench or phpMyAdmin.
3. Run `sql/database.sql`.
4. The script creates the `student_result_db` database and required tables.

## Configure MySQL
Open `src/Database.cpp` and change these values if needed:
```cpp
host = "tcp://127.0.0.1:3306";
user = "root";
password = "";
database = "student_result_db";
```

If your MySQL root account has a password, replace the empty password.

## Compile
Install MySQL Connector/C++ and configure its include/library paths for your compiler.

With CMake, update the Connector/C++ path in `CMakeLists.txt` if required, then:
```bash
mkdir build
cd build
cmake ..
cmake --build .
```

You can also compile the source files directly with your compiler after configuring the Connector/C++ include and library paths.

## Interview explanation
> "I developed a Student Result Management System using C++. I applied OOP concepts such as classes, encapsulation, inheritance and polymorphism to separate student and result management responsibilities. I used MySQL to persist student, subject and marks data. The system performs CRUD operations and calculates total marks, percentage and grade from the stored results."

## Note
The ZIP contains the complete source code and SQL database script. MySQL Connector/C++ is not bundled because it is an external dependency and should be installed separately.
