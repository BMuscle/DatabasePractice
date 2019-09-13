#include "MyForm.h"
#include "Mysql.h"
#include <iostream>
#include <Windows.h>

using namespace ConvenienceStore;



[STAThreadAttribute]
int main() {
	SetConsoleOutputCP(CP_UTF8);

	Mysql* sql = new Mysql();

	//ƒtƒH[ƒ€‚Ìì¬
	MyForm^ fm = gcnew MyForm();
	fm->ShowDialog();
	return 0;
	
}