#include <iostream>
#include <string>
using namespace std;


//  int arge, char*argv[]
// 


void main(int argc,  char*  argv[])
{
	setlocale(LC_ALL, "ru");
//-----------------------------------------------------------------------------------
	for (int i = 0; i < argc; ++i)
	{
		cout << argv[i] << endl;

	}
	system ("pause");
//-----------------------------------------------------------------------------------

}
