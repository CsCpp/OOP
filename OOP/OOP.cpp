#include <iostream>
using namespace std;

//Операторы new && delete



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
    int* pa = new int;
    cout << pa << endl;
    cout << *pa << endl;
    *pa = 33;
    cout << *pa << endl;
    delete pa;
    return 0;
}
