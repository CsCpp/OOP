#include <iostream>
#include <string>
using namespace std;


//  тернарный оператор
// 


int main()
{
	setlocale(LC_ALL, "ru");
//-----------------------------------------------------------------------------------

	int a;
	
	while (1)
	{
		cin >> a;
		a < 10 ? cout << "a<10" << endl : a>10? cout << "a>10" << endl: cout << "a=10" << endl;
/*
		if (a < 10)
		{
			cout << "a<10" << endl;
		}
		else
		{
			cout << "a>10" << endl;
		}
*/
	}
//-----------------------------------------------------------------------------------
return 777;
}
