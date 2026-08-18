#include "Database.h"
#include <stdexcept>

Database::Database(const std::string& host,
                   const std::string& user,
                   const std::string& password,
                   const std::string& database) {
    driver = sql::mysql::get_mysql_driver_instance();
    connection.reset(driver->connect(host, user, password));
    connection->setSchema(database);
}

sql::Connection* Database::getConnection() {
    return connection.get();
}
