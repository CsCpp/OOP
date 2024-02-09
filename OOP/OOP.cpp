#include <iostream>
using namespace std;

//указатель на функцию
// тип функции (*имя указателя)(спкцификация параметров):


int Foo1 (int a)
{
    cout << "void FOO1()" << endl;
    return a - 1;
}

int Foo2(int a)
{
    cout << "void FOO2()" << endl;
    return a * 2;
}


int main()
{
    int (*fooPointer)(int a);
    fooPointer = Foo1;

    cout << fooPointer(2) << endl;

    return 0;
}
