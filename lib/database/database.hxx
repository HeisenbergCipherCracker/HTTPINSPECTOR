#include <sqlite3.h>
#include <iostream>
using namespace std;

class Database{
private:
    sqlite3* db;

    void open_database(){
        int rc = sqlite3_open("HTTPinspector.db", &db);
        if (rc != SQLITE_OK) {
            cerr << "Failed to open database." << endl;
        }
    }

    void create_table(){
        int rc = 0; // Initialize rc
        const char* sql = "CREATE TABLE IF NOT EXISTS datas (id INTEGER PRIMARY KEY, cap TEXT, other INTEGER)";
        rc = sqlite3_exec(db, sql, nullptr, nullptr, nullptr);
        if (rc != SQLITE_OK ) {
            cerr << "Could not create a database table for datas." << endl;
        }
    }

public:
    void init_db(){
        open_database();
        create_table();
    }
};