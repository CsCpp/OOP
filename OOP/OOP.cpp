#include <iostream>
using namespace std;

//указатели и массивы. Арифметика указателей



int main()
{
    setlocale(LC_ALL, "ru");
    const int Size = 5;
    int arr[Size] = { 2,5,34,86,-65 };
    for (auto&& a : arr)
    {
        cout << a << " ";

    }
    cout << endl;
    int* pArr = arr;
    cout << "------------------------------------------------------" << endl;
    cout << arr << "\t  адресс массива arr" << endl;
    cout << pArr << "\t  адресс  на который указывает указатель pArr" << endl;
    cout << &pArr << "\t  адресс самого указателя pArr" << endl;
    cout << "------------------------------------------------------" << endl;
    for (int i = 0; i < Size; ++i)
    {
        cout << pArr[i] << " ";

    }
    cout << endl;
    cout << "------------------------------------------------------" << endl;
    for (int i = 0; i < Size; ++i)
    {
        cout << *(pArr+i) << " ";

    }
    cout << endl;
    cout << "------------------------------------------------------" << endl;
    for (int i = 0; i < Size; ++i)
    {
        cout << (pArr + i) << endl;

    }
    cout << endl;

    return 0;
}
