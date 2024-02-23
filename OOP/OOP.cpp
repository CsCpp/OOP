#include <iostream>
using namespace std;

//  строки и указатели в С++
void Foo(const char* str)
{
	cout << "Foo print STR = " << str << endl;
	cout << "размер строки, strlen(str) = " << strlen(str) << endl;

}

int main()
{
	setlocale(LC_ALL, "ru");
//-----------------------------------------------------------------------------------
	char strOld [] = "Hello!";
	const char* str = strOld;

	cout << str << endl;
	cout << strOld << endl;

	 
	const char* strArr[] = {"Hi","tyt","TEST"};
	for (auto&& a : strArr)
	{
		cout << a << endl;
	}

	Foo(str);

//-----------------------------------------------------------------------------------
return 777;
}
