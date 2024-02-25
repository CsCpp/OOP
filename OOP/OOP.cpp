#include <iostream>
#include <string>
using namespace std;

#define DEBUG // раскоментировать для теста


//  условная компиляция
// 


int main()
{
	setlocale(LC_ALL, "ru");
//-----------------------------------------------------------------------------------
#ifdef DEBUG
		cout << "Начало цикла //DEBUG" << endl;
#else 
		cout << " нету //DEBUG" << endl;		
#endif // DEBUG

	
	for (int i = 0; i < 5; ++i)
	{
		cout << i << endl;
	}
#ifdef DEBUG
	cout << "Конец цикла //DEBUG" << endl;
#endif // DEBUG
//-----------------------------------------------------------------------------------
return 777;
}
