#pragma once
#include <memory>
#include <string>
#include <mysql_driver.h>
#include <mysql_connection.h>

class Database {
private:
    sql::mysql::MySQL_Driver* driver;
    std::unique_ptr<sql::Connection> connection;

public:
    Database(const std::string& host,
             const std::string& user,
             const std::string& password,
             const std::string& database);

    sql::Connection* getConnection();
};
