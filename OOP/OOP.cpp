#include <iostream>
#include <string>
using namespace std;


//  int main || void main
// 


int main(int argc,  char*  argv[])
{
	setlocale(LC_ALL, "ru");
//-----------------------------------------------------------------------------------
	for (int i = 0; i < argc; ++i)
	{
		cout << argv[i] << endl;

	}
	system ("pause");
//-----------------------------------------------------------------------------------
	return 0;
}
