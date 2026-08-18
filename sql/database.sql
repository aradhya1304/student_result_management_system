CREATE DATABASE IF NOT EXISTS student_result_db;

USE student_result_db;


-- ==========================================
-- STUDENTS TABLE
-- ==========================================

CREATE TABLE IF NOT EXISTS students (

    student_id INT PRIMARY KEY AUTO_INCREMENT,

    name VARCHAR(100) NOT NULL,

    email VARCHAR(100) UNIQUE NOT NULL,

    phone VARCHAR(15),

    course VARCHAR(100) NOT NULL,

    semester INT NOT NULL

);


-- ==========================================
-- SUBJECTS TABLE
-- ==========================================

CREATE TABLE IF NOT EXISTS subjects (

    subject_id INT PRIMARY KEY AUTO_INCREMENT,

    subject_code VARCHAR(20) UNIQUE NOT NULL,

    subject_name VARCHAR(100) NOT NULL,

    max_marks INT NOT NULL DEFAULT 100

);