-- ==========================================
-- Student Result Management System
-- Database Setup
-- ==========================================

CREATE DATABASE IF NOT EXISTS student_result_db;

USE student_result_db;


-- ==========================================
-- STUDENTS TABLE
-- ==========================================

CREATE TABLE students (
    student_id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(100) NOT NULL,
    email VARCHAR(100) UNIQUE,
    phone VARCHAR(15),
    course VARCHAR(100) NOT NULL,
    semester INT NOT NULL
);


-- ==========================================
-- SUBJECTS TABLE
-- ==========================================

CREATE TABLE subjects (
    subject_id INT PRIMARY KEY AUTO_INCREMENT,
    subject_name VARCHAR(100) NOT NULL,
    max_marks INT NOT NULL DEFAULT 100,
    semester INT NOT NULL
);


-- ==========================================
-- MARKS TABLE
-- ==========================================

CREATE TABLE marks (
    mark_id INT PRIMARY KEY AUTO_INCREMENT,

    student_id INT NOT NULL,

    subject_id INT NOT NULL,

    marks_obtained DECIMAL(5,2) NOT NULL,

    FOREIGN KEY (student_id)
        REFERENCES students(student_id)
        ON DELETE CASCADE,

    FOREIGN KEY (subject_id)
        REFERENCES subjects(subject_id)
        ON DELETE CASCADE,

    UNIQUE(student_id, subject_id)
);