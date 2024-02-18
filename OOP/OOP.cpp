#include <iostream>
using namespace std;

//копирование динамического массива

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
    int* newArr = new int[size];
    FillArray(arr, size);
    FillArray(newArr, size);

    delete [] arr;
    arr = nullptr;
 
    arr = new int[size];
    for (int i = 0; i < size; ++i) // arr=newArr
    {
        arr[i] = newArr[i];
    }


    ShowArray(arr, size);
    ShowArray(newArr, size);






    delete [] arr;
    delete [] newArr;
    return 0;
}
