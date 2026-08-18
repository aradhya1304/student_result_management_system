cmake_minimum_required(VERSION 3.16)
project(StudentResultManagementSystem)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Update these paths for your MySQL Connector/C++ installation.
# Example Windows installation:
# set(MYSQL_CONNECTOR_ROOT "C:/Program Files/MySQL/MySQL Connector C++ 8.4")

if(DEFINED MYSQL_CONNECTOR_ROOT)
    include_directories(
        "${MYSQL_CONNECTOR_ROOT}/include"
        "${MYSQL_CONNECTOR_ROOT}/include/jdbc"
    )
    link_directories("${MYSQL_CONNECTOR_ROOT}/lib64/vs14")
endif()

add_executable(StudentResultSystem
    src/main.cpp
    src/Database.cpp
    src/Student.cpp
    src/ResultManager.cpp
)

# Library name/path can differ by Connector/C++ version.
# Configure the correct connector library for your installation.
# target_link_libraries(StudentResultSystem mysqlcppconn8)
