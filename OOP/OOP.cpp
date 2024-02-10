#include <iostream>
using namespace std;

//указатель



int main()
{
    setlocale(LC_ALL, "ru");

    int a = 9;
    cout << &a <<"\tадрес переменной" << endl;
    int* pa = &a;
    cout << pa <<"\tадрес на который ссылается указатель" << endl;
    cout << &pa <<"\tадрес самого указателя"<< endl;
    cout << *pa <<"\t\t\tзначение которое храниться по  указателю"<< endl;



    return 0;
}
