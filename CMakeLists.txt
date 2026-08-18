cmake_minimum_required(VERSION 3.20)

project(StudentResultManagementSystem)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(mysql-concpp REQUIRED)

add_executable(student_system

    main.cpp

    src/Student.cpp

    src/Subject.cpp

    src/Marks.cpp

    src/Result.cpp

    src/Database.cpp

    src/Menu.cpp
)

target_link_libraries(
    student_system
    mysql::concpp
)