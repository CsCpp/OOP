#include <iostream>
using namespace std;

//указатель на функцию
// тип функции (*имя указателя)(спкцификация параметров):

string GetDataFromPetya()
{
    return "Petya";
}

string GetDataFromVanya()
{
    return "Vanya";
}

string GetDataFromLena()
{
    return "Lena";
}

void ShowInfo(string(*foo)())
{
    cout << foo() << endl;
}

int main()
{
    ShowInfo(GetDataFromPetya);
    ShowInfo(GetDataFromVanya);
    ShowInfo(GetDataFromLena);

    return 0;
}
