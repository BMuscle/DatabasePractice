#include "MyForm.h"
#include "Mysql.h"

using namespace ConvenienceStore;




[STAThreadAttribute]
int main() {


	Mysql* sql = new Mysql();

	//ƒtƒH[ƒ€‚Ìì¬
	MyForm^ fm = gcnew MyForm();
	fm->ShowDialog();
	return 0;
	
}