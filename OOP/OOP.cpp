#include <iostream>
using namespace std;

//ссылки



int main()
{
    setlocale(LC_ALL, "ru");
    int a = 5;
    int* pa = &a;
    int& aRef = a;

    cout << aRef <<"  значение по ссылке" << endl;
    cout << pa <<"  адрес переменной а" << endl;
    cout << &aRef << "  адрес куда указывает ссылка" << endl;
    aRef++;
    cout << aRef << endl;
    aRef = 55;
    cout << aRef << endl;
    cout << a << endl;

    int& aRef2 = *pa;
    int* ppa = &aRef2;

    return 0;
}
