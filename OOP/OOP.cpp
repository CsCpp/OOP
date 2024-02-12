#include <iostream>
using namespace std;

//передача аргумента по указателю
// как вернуть 2 и более значения из функции


void Foo(int *pa)
{
    *pa+=5;
}

int main()
{
    setlocale(LC_ALL, "ru");
    int a = 5;
    cout << a << endl;
    Foo(&a);
    cout << a << endl;

    return 0;
}
