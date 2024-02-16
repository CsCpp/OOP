#include <iostream>
using namespace std;

//двумерный динамический массив

void printArr(int** arr, int rows, int cols)
{
    cout << "-------------------------------------------------------------------------" << endl;
    cout << "--------------------------------PRINT_arr--------------------------------" << endl;
    cout << "-------------------------------------------------------------------------" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "--------------------------------END print--------------------------------" << endl;
    cout << "-------------------------------------------------------------------------" << endl;
}


int main()
{
    int rows = 0;
    int cols = 0;
    cout << "enter ROWS: ";
    cin >> rows;
    cout << endl << "enter COLS: ";
    cin >> cols;
    cout<<endl<< endl;
    int** arr = new int* [rows];

   /* for (int i = 0; i < rows; ++i)
    {
        arr[i] = new int[cols];
    }
   */
    //--------------------------------- Rand
    for (int i = 0; i < rows; ++i)
    {   
        arr[i] = new int[cols];

        for (int j = 0; j < cols; ++j)
        {
            arr[i][j] = rand() % 99;
        }
    }
    //--------------------------------- Print
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    printArr(arr, rows, cols);



    //---------------------------------
    for (int i = 0; i < rows; ++i)
    {
        delete [] arr[i];
    }
    
    delete[] arr;
    return 0;
}
