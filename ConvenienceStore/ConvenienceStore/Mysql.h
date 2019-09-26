#pragma once
#include "mysqlx/xdevapi.h"
#include <iostream>
#include <stdio.h>

class Mysql {
public:
	Mysql();
	~Mysql();
	void sql(std::vector<System::String>& data);
	System::String^ encodeString(std::string str);
};