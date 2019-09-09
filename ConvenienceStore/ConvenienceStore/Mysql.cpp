#include "Mysql.h"
#include "mysqlx/xdevapi.h"
#include <iostream>

using namespace::mysqlx;

Mysql::Mysql() {
	try {
		//Session sess("rk221:1192@localhost/store");
		Session sess("localhost", "rk221", "1192");
		//Schema db = sess.getSchema("store");
		
		sess.sql("USE store").execute();
		auto myResult = sess.sql("SELECT name FROM product").execute();
		Row row = myResult.fetchOne();
		std::cout << row.get(0);
		/*
			
			std::list<Schema> schemaList = sess.getSchemas();
			std::cout << "Available schemas in this session:" << std::endl;
			for (Schema schema : schemaList) {
				std::cout << schema.getName() << std::endl;
			}
			*/
			
	}
	catch (const mysqlx::Error& err) {
		std::cout << err << std::endl;
	}

}