#include "Mysql.h"
#include "mysqlx/xdevapi.h"
#include <iostream>
#include <stdio.h>
using namespace::mysqlx;

Mysql::Mysql() {
	try {
		Session sess("localhost", "rk221", "1192");
		//Schema db = sess.getSchema("store");
		
		sess.sql("USE store").execute();
		auto myResult = sess.sql("SELECT name FROM product WHERE >= 150").execute();



		/* —á
		Row row = myResult.fetchOne();
		std::cout << row.get(0);

		auto myResult = sess.sql("SELECT name FROM product WHERE >= 150").execute();
		for (auto r : myResult) {
			std::cout << r.get(0);
		}
		*/


		sess.close();
			
	}
	catch (const mysqlx::Error& err) {
		std::cout << err << std::endl;
	}

}

/*

	std::list<Schema> schemaList = sess.getSchemas();
	std::cout << "Available schemas in this session:" << std::endl;
	for (Schema schema : schemaList) {
		std::cout << schema.getName() << std::endl;
	}
	*/