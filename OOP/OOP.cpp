#include <iostream>
using namespace std;

//  изменение размера динамического массива
//  добавление элемента в конец массив
//  удаление последнего элемента из массива


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

void push_back(int*& arr, int& size,const int value)
{
    int* newArr = new int[size + 1];
    for (int i = 0; i < size; ++i) newArr[i] = arr[i];
    newArr[size] = value;
    size++;
    delete [] arr;
    arr = newArr;
}

void pop_back(int*& arr, int& size)
{   
    size--;
    int* newArr = new int[size];
    for (int i = 0; i < size; ++i) newArr[i] = arr[i];
     
    delete[] arr;
    arr = newArr;

}



int main()
{
    int size = 7;
    int* arr = new int[size];
    FillArray(arr, size);
    ShowArray(arr, size);
//-----------------------------------------------------------------------------------
    push_back(arr, size, 777);
    ShowArray(arr, size);
//-----------------------------------------------------------------------------------
    pop_back(arr, size);
    ShowArray(arr, size);
//-----------------------------------------------------------------------------------
    delete [] arr;
    arr = nullptr;
    return 777;
}
