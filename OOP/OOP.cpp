#include <iostream>
using namespace std;

//передача аргумента по ссылке



void Foo1(int a)
{
    a = 1;;
}

void Foo2(int& a)
{
   a=2;
}

void Foo3(int* pa)
{
    *pa=3;
}

int main()
{
    int a = -1;
    setlocale(LC_ALL, "ru");
    Foo1(a);
    cout << a << endl << endl;
    Foo2(a);
    cout << a << endl << endl;
    Foo3(&a);
    cout << a << endl << endl;

    return 0;
}
