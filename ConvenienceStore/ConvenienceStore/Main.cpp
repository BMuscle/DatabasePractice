#include "MyForm.h"
#include "Mysql.h"
#include <iostream>
#include <Windows.h>

using namespace ConvenienceStore;



[STAThreadAttribute]
int main() {
	SetConsoleOutputCP(CP_UTF8);//�R���\�[����UTF8�\��

	Mysql* sql = new Mysql();

	//�t�H�[���̍쐬
	MyForm^ fm = gcnew MyForm();
	fm->ShowDialog();
	return 0;
	
}