#include "MyForm.h"
#include "Mysql.h"

using namespace ConvenienceStore;




[STAThreadAttribute]
int main() {


	Mysql* sql = new Mysql();

	//�t�H�[���̍쐬
	MyForm^ fm = gcnew MyForm();
	fm->ShowDialog();
	return 0;
	
}