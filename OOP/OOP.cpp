#include <iostream>
#include "Sum.h"
#include"MyClass.h"

using namespace std;
using namespace myNamespace;


int main()
{
    setlocale(LC_ALL, "ru");
    
    cout << Sum(2, 6) << endl;

    MyClass a;
   
    a.PrintMSG("msg");

    return 0;
}
