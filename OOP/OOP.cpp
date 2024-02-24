#include <iostream>
#include <string>
using namespace std;

//  конкатенация строк С и С++


int main()
{
	setlocale(LC_ALL, "ru");
//-----------------------------------------------------------------------------------
	char str1[255] = "Hello";
	const char str2[255] = "World";
	cout << str1 << endl;
	strcat_s(str1, str2);
	cout << str1 << endl;
	string str3 = "Hello";
	string str4 = "World";
	string result;
	result = str3 + ' ' + str4 + "! " + str1;
	cout << result << endl;
//-----------------------------------------------------------------------------------
return 777;
}
