cmake_minimum_required(VERSION 3.20)

project(StudentResultManagementSystem)


# ==========================================
# C++ STANDARD
# ==========================================

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_STANDARD_REQUIRED ON)


# ==========================================
# SOURCE FILES
# ==========================================

add_executable(
    student_system

    src/main.cpp

    src/Database.cpp

    src/Student.cpp

    src/Subject.cpp

    src/Marks.cpp

    src/Result.cpp

    src/Validation.cpp

    src/Menu.cpp
)


# ==========================================
# INCLUDE DIRECTORY
# ==========================================

target_include_directories(
    student_system
    PRIVATE
    include
)


# ==========================================
# MYSQL CONNECTOR/C++
# ==========================================

find_package(
    MySQL REQUIRED
)


target_link_libraries(
    student_system
    PRIVATE
    mysqlcppconn8
)