#include <iostream>
using namespace std;

//inline ключевое слово. Встраиваемая функция.

inline int Sum(int a, int b)
{
    return a + b;
}

int main()
{
    cout << Sum(3, 6) << endl;
   
    return 0;
}
