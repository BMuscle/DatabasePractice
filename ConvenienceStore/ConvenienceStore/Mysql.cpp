#include "Mysql.h"
#include "mysqlx/xdevapi.h"
#include <iostream>
#include <stdio.h>
using namespace::mysqlx;

Mysql::Mysql() {
	try {
		Session sess("localhost", "***", "***");
		//Schema db = sess.getSchema("store");
		
		sess.sql("USE store").execute();
		auto myResult = sess.sql("SELECT name FROM product WHERE price = 150").execute();

		
		Row row = myResult.fetchOne();
		string s = row.get(0);
		bytes code = row.getBytes(0);
		std::cout << s;

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