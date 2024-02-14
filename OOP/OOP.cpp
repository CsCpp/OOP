#include <iostream>
using namespace std;

//NULL && nullptr



int main()
{
    int* pa = new int;
    cout << pa << endl;
    cout << *pa << endl;
    *pa = 33;
    cout << *pa << endl;
    delete pa;
    cout << pa << endl;
    pa = NULL; // pa = 0;
    cout << pa << endl;
    
    
    int* pb = new int;
    *pb = 233;
    delete pb;
    pb = nullptr;


    return 0;
}
