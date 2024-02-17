#include <iostream>
using namespace std;

//константные аргументы функций

void FillArray( int* const arr, const int size)
{
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 33;
    }
}

void ShowArray(const int* const arr, const int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main()
{
    int size = 7;
    int* arr = new int[size];
    FillArray(arr, size);
    ShowArray(arr, size);


    return 0;
}
