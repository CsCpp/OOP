#include <iostream>
using namespace std;

//динамический массив



int main()
{
    int size = 0;
    cout << "Size enter" << endl;
    cin >> size;
    int* arr  = new int[size];
    for (int i=0; i<size; ++i) 
    {
        arr[i] = rand()%1000;
        cout << i<<"\t"<< * (arr + i) << endl;
    }
    delete[] arr;
    arr = nullptr;
    return 0;
}
