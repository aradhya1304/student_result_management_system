<div align="center">

# 🎓 STUDENT RESULT MANAGEMENT SYSTEM

### `C++` • `OOP` • `MySQL` • `DBMS` • `Git` • `GitHub`

<img src="https://capsule-render.vercel.app/api?type=waving&color=0:0F2027,50:203A43,100:2C5364&height=220&section=header&text=Student%20Result%20Management%20System&fontSize=38&fontColor=ffffff&animation=fadeIn&fontAlignY=38" width="100%"/>

<br>

<img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=22&duration=3000&pause=800&color=36BCF7&center=true&vCenter=true&width=800&lines=C%2B%2B+%7C+Object-Oriented+Programming;MySQL+%7C+Database+Management+System;CRUD+%7C+SQL+%7C+Result+Generation;Built+Step-by-Step+with+Git+%26+GitHub" />

<br><br>

<img src="https://img.shields.io/badge/C%2B%2B-17-00599C?style=for-the-badge&logo=cplusplus&logoColor=white"/>
<img src="https://img.shields.io/badge/MySQL-Database-4479A1?style=for-the-badge&logo=mysql&logoColor=white"/>
<img src="https://img.shields.io/badge/OOP-Object%20Oriented-8E44AD?style=for-the-badge"/>
<img src="https://img.shields.io/badge/DBMS-Relational%20Database-16A085?style=for-the-badge"/>
<img src="https://img.shields.io/badge/Git-Version%20Control-F05032?style=for-the-badge&logo=git&logoColor=white"/>
<img src="https://img.shields.io/badge/GitHub-Repository-181717?style=for-the-badge&logo=github"/>

</div>

---

# 🌟 About The Project

> 🎓 **Student Result Management System** is a console-based application developed using **C++**, **Object-Oriented Programming**, **MySQL**, and **DBMS concepts**.

The project is designed to manage student academic information through a structured relational database.

It provides functionality for:

```text
👨‍🎓 Students
       ↓
📚 Subjects
       ↓
📝 Marks
       ↓
📊 Results
       ↓
📈 Reports

🧊 3D SYSTEM ARCHITECTURE
<div align="center">
                         ╔═══════════════╗
                         ║   👤 USER     ║
                         ╚═══════╤═══════╝
                                 │
                                 ▼
                  ╔══════════════════════════╗
                  ║     💻 C++ APPLICATION   ║
                  ╠══════════════════════════╣
                  ║                          ║
                  ║  👨‍🎓 Student Management  ║
                  ║  📚 Subject Management   ║
                  ║  📝 Marks Management     ║
                  ║  📊 Result Generation    ║
                  ║  📈 Reports              ║
                  ║                          ║
                  ╚════════════╤═════════════╝
                               │
                               │ MySQL X DevAPI
                               ▼
                  ╔══════════════════════════╗
                  ║       🐬 MySQL           ║
                  ╠══════════════════════════╣
                  ║                          ║
                  ║  👨‍🎓 STUDENTS            ║
                  ║          │               ║
                  ║          ▼               ║
                  ║       📝 MARKS            ║
                  ║          ▲               ║
                  ║          │               ║
                  ║          │               ║
                  ║  📚 SUBJECTS            ║
                  ║                          ║
                  ╚══════════════════════════╝


              🔄 CRUD  •  SQL  •  JOIN  •  OOP
</div>
🚀 Features
<div align="center">
👨‍🎓 Students	📚 Subjects	📝 Marks
Add	Add	Add
Display	Display	Display
Search	Search	Search
Update	Update	Update
Delete	Delete	Delete
</div>
🎓 Student Management
Add student
Display all students
Search student
Update student
Delete student
📚 Subject Management
Add subject
Display subjects
Search subject
Update subject
Delete subject
📝 Marks Management
Add marks
Display marks
Search student marks
Update marks
Delete marks
📊 Result Management
Calculate total marks
Calculate percentage
Calculate grade
Determine PASS / FAIL
Generate student result
⚡ How The System Works
                    🚀 START
                       │
                       ▼
               🔌 CONNECT MYSQL
                       │
                       ▼
                 🏠 MAIN MENU
                       │
          ┌────────────┼────────────┐
          │            │            │
          ▼            ▼            ▼
      👨‍🎓 STUDENT   📚 SUBJECT    📝 MARKS
          │            │            │
          └────────────┼────────────┘
                       │
                       ▼
                📊 GENERATE RESULT
                       │
                       ▼
                  📈 REPORT
                       │
                       ▼
                    🚪 EXIT
🗄️ Database Design
🐬 Relational Database
┌─────────────────────────┐
│       👨‍🎓 STUDENTS       │
├─────────────────────────┤
│ 🔑 student_id           │
│    name                 │
│    email                │
│    phone                │
│    course               │
│    semester             │
└────────────┬────────────┘
             │
             │ 1
             │
             │ N
             ▼
┌─────────────────────────┐
│        📝 MARKS         │
├─────────────────────────┤
│ 🔑 mark_id              │
│ 🔗 student_id           │
│ 🔗 subject_id           │
│    marks_obtained       │
└────────────┬────────────┘
             │
             │ N
             │
             │ 1
             ▼
┌─────────────────────────┐
│       📚 SUBJECTS       │
├─────────────────────────┤
│ 🔑 subject_id           │
│    subject_code         │
│    subject_name         │
│    max_marks             │
└─────────────────────────┘
🧠 OOP Architecture
                  🧩 OBJECT ORIENTED DESIGN


                         DATABASE
                            │
                            ▼
                      ┌───────────┐
                      │ Database  │
                      └─────┬─────┘
                            │
          ┌─────────────────┼─────────────────┐
          │                 │                 │
          ▼                 ▼                 ▼
     ┌─────────┐       ┌─────────┐       ┌─────────┐
     │ Student │       │ Subject │       │  Marks  │
     └────┬────┘       └────┬────┘       └────┬────┘
          │                 │                 │
          └─────────────────┼─────────────────┘
                            │
                            ▼
                       ┌─────────┐
                       │ Result  │
                       └─────────┘
OOP Concepts Used
╭──────────────────────────────────────────╮
│              🧩 OOP CONCEPTS             │
├──────────────────────────────────────────┤
│                                          │
│  ✓ Classes & Objects                     │
│  ✓ Encapsulation                         │
│  ✓ Abstraction                           │
│  ✓ Constructors                          │
│  ✓ Modular Programming                   │
│  ✓ Object Interaction                    │
│                                          │
╰──────────────────────────────────────────╯
🗃️ DBMS Concepts
Concept	Usage
🔑 Primary Key	Unique record identification
🔗 Foreign Key	Table relationships
🛡️ Constraints	Data validation
➕ INSERT	Add records
🔍 SELECT	Read records
✏️ UPDATE	Modify records
🗑️ DELETE	Remove records
🔗 JOIN	Combine tables
🔢 COUNT	Count records
➕ SUM	Calculate totals
📊 AVG	Calculate averages
📦 GROUP BY	Generate reports
🔄 CRUD
             🔄 CRUD OPERATIONS


                  ┌─────────┐
                  │ CREATE  │
                  │ INSERT  │
                  └────┬────┘
                       │
                       ▼
                  ┌─────────┐
                  │  READ   │
                  │ SELECT  │
                  └────┬────┘
                       │
                       ▼
                  ┌─────────┐
                  │ UPDATE  │
                  └────┬────┘
                       │
                       ▼
                  ┌─────────┐
                  │ DELETE  │
                  └─────────┘
📊 Result Calculation
                  📝 MARKS
                     │
                     ▼
              ┌──────────────┐
              │ TOTAL MARKS  │
              └──────┬───────┘
                     │
                     ▼
              ┌──────────────┐
              │ PERCENTAGE   │
              └──────┬───────┘
                     │
                     ▼
              ┌──────────────┐
              │    GRADE     │
              └──────┬───────┘
                     │
                     ▼
              ┌──────────────┐
              │ PASS / FAIL  │
              └──────────────┘
Formula
Percentage = (Obtained Marks / Maximum Marks) × 100
Example
Obtained Marks = 356
Maximum Marks  = 400


Percentage = (356 / 400) × 100


Result = 89.00%
Grade  = A
Status = PASS
📁 Project Structure
🎓 Student-Result-Management-System
│
├── 📂 include
│   ├── Student.h
│   ├── Subject.h
│   ├── Marks.h
│   ├── Result.h
│   └── Database.h
│
├── 📂 src
│   ├── Student.cpp
│   ├── Subject.cpp
│   ├── Marks.cpp
│   ├── Result.cpp
│   ├── Database.cpp
│   └── main.cpp
│
├── 📂 sql
│   └── database.sql
│
├── 📂 docs
│   ├── architecture.png
│   ├── er-diagram.png
│   └── screenshots
│
├── 📄 README.md
├── 📄 .gitignore
└── 📄 LICENSE
🛠️ Technology Stack
<div align="center">
┌────────────────────────────────────────────┐
│              TECHNOLOGY STACK              │
├────────────────────────────────────────────┤
│                                            │
│       💻 C++17                             │
│       🧩 Object-Oriented Programming       │
│       🐬 MySQL                             │
│       🔗 MySQL X DevAPI                    │
│       🗄️ DBMS                              │
│       🌳 Git                               │
│       🐙 GitHub                            │
│                                            │
└────────────────────────────────────────────┘
</div>
⚙️ Installation
1️⃣ Clone Repository
git clone https://github.com/YOUR_USERNAME/student_result_management_system.git
cd student_result_management_system
🐬 MySQL Setup

Open MySQL Workbench:

CREATE DATABASE student_result_db;


USE student_result_db;

Then execute:

sql/database.sql
🔐 Database Configuration

Configure the connection in:

src/Database.cpp

Example:

host = "localhost";
username = "root";
password = "YOUR_PASSWORD";
databaseName = "student_result_db";

⚠️ Never commit your real MySQL password to GitHub.

🔨 Compile
g++ -std=c++17 src/*.cpp -Iinclude -o student_result
▶️ Run
Windows
student_result.exe
Linux / macOS
./student_result
🖥️ Main Menu
╔══════════════════════════════════════════════╗
║                                              ║
║        🎓 STUDENT RESULT MANAGEMENT           ║
║                                              ║
╠══════════════════════════════════════════════╣
║                                              ║
║    1. 👨‍🎓 Student Management                  ║
║    2. 📚 Subject Management                  ║
║    3. 📝 Marks Management                    ║
║    4. 📊 Generate Result                     ║
║    5. 📈 Reports                             ║
║    6. 🚪 Exit                                ║
║                                              ║
╚══════════════════════════════════════════════╝
🛡️ Validation

The application validates:

✓ Student ID
✓ Subject ID
✓ Marks
✓ Maximum Marks
✓ Semester
✓ Duplicate records
✓ Empty input
✓ Menu choices
✓ Database constraints
🧪 Testing
╔══════════════════════════════════════════════╗
║                🧪 TESTING                   ║
╠══════════════════════════════════════════════╣
║                                              ║
║  ✓ Add Student                               ║
║  ✓ Search Student                            ║
║  ✓ Update Student                            ║
║  ✓ Delete Student                            ║
║                                              ║
║  ✓ Add Subject                               ║
║  ✓ Search Subject                            ║
║  ✓ Update Subject                            ║
║  ✓ Delete Subject                            ║
║                                              ║
║  ✓ Add Marks                                 ║
║  ✓ Update Marks                              ║
║  ✓ Delete Marks                              ║
║                                              ║
║  ✓ Generate Result                           ║
║  ✓ Calculate Percentage                      ║
║  ✓ Calculate Grade                           ║
║  ✓ PASS / FAIL                               ║
║                                              ║
╚══════════════════════════════════════════════╝
🌳 GitHub Development Journey

The project is developed through meaningful commits instead of one giant commit.

                       🌳 MAIN
                         │
                         ▼
                  Initial Setup
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
                    Validation
                         │
                         ▼
                     Reports
                         │
                         ▼
                  Documentation
                         │
                         ▼
                    🚀 v1.0
📝 Commit History Strategy

Recommended commits:

01. Initial project setup
02. Add Student class
03. Add Subject class
04. Add Marks class
05. Add Result class
06. Add MySQL connection
07. Implement student CRUD
08. Implement subject CRUD
09. Implement marks CRUD
10. Add result generation
11. Add database constraints
12. Add input validation
13. Add reports and statistics
14. Improve console UI
15. Add README documentation
16. Final project cleanup

Example:

git add .
git commit -m "Implement student CRUD operations"
git push origin main
📸 Screenshots

Once the application is complete, add screenshots here.

🏠 Main Menu
<img src="docs/screenshots/main-menu.png" width="800"/>
👨‍🎓 Student Management
<img src="docs/screenshots/student-management.png" width="800"/>
📚 Subject Management
<img src="docs/screenshots/subject-management.png" width="800"/>
📝 Marks Management
<img src="docs/screenshots/marks-management.png" width="800"/>
📊 Result Report
<img src="docs/screenshots/result-report.png" width="800"/>
🚀 Future Roadmap
                    🚀 VERSION ROADMAP


                         v1.0
                          │
             ┌────────────┼────────────┐
             ▼            ▼            ▼
          Student      Subject       Marks
             │            │            │
             └────────────┼────────────┘
                          ▼
                       Result
                          │
                          ▼
                        v1.1
                          │
             ┌────────────┼────────────┐
             ▼            ▼            ▼
          Reports     Validation    Statistics
                          │
                          ▼
                        v2.0
                          │
             ┌────────────┼────────────┐
             ▼            ▼            ▼
          Login          GUI          PDF
             │            │            │
             └────────────┼────────────┘
                          ▼
                        v3.0
                          │
                          ▼
                    🌐 WEB VERSION
Future Features
🔐 Authentication
👨‍🎓 Student login
🖥️ GUI
🌐 Web version
📄 PDF result
📊 Dashboard
📈 Analytics
🎓 CGPA calculation
📅 Attendance management
📧 Email results
📤 Excel export
🎓 Learning Outcomes

By completing this project, the following concepts are demonstrated:

╔══════════════════════════════════════════╗
║             🎓 LEARNING                  ║
╠══════════════════════════════════════════╣
║                                          ║
║  💻 C++ Programming                      ║
║  🧩 Object-Oriented Programming          ║
║  🐬 MySQL                                ║
║  🗄️ DBMS                                 ║
║  🔄 CRUD                                 ║
║  🔗 SQL JOIN                             ║
║  📊 Database Relationships               ║
║  🛡️ Validation                           ║
║  🌳 Git                                  ║
║  🐙 GitHub                               ║
║                                          ║
╚══════════════════════════════════════════╝
📊 Project Highlights
<div align="center">
Category	Technology
💻 Programming	C++17
🧩 Architecture	OOP
🐬 Database	MySQL
🗄️ Database Concepts	DBMS
🔗 Connectivity	MySQL X DevAPI
🔄 Operations	CRUD
📊 Results	Automatic Calculation
🛡️ Validation	Input + Database
🌳 Version Control	Git
🐙 Repository	GitHub
</div>
👨‍💻 Author
<div align="center">
Aradhya Gupta
🎓 Student Developer

C++ • OOP • MySQL • DBMS • Git • GitHub

</div>
⭐ Support

If you like this project:

⭐ Star the repository
🍴 Fork the repository
🐛 Report bugs
💡 Suggest improvements
📜 License

This project is created for educational and learning purposes.

See the LICENSE file for details.

<div align="center"> <img src="https://capsule-render.vercel.app/api?type=waving&color=0:2C5364,50:203A43,100:0F2027&height=140&section=footer"/>
🎓 STUDENT RESULT MANAGEMENT SYSTEM
BUILD • LEARN • COMMIT • IMPROVE 🚀
</div> ```