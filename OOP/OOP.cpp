#include <iostream>
#include <functional>
#include<vector>

using namespace std;


//лямбда-выражение | лямбда-функции | анонимные функции


void doWork2(vector<int>& mV, function<void(int)> func)
{
    for (auto&& e : mV)
    {
        func(e);
    }
}


int main()
{
    setlocale(LC_ALL, "ru");
    vector<int> mV = { 2,52,41,41,36,89,21,15,24,93,27,51,84 };

    int p = 0;
    cout << "Лямбда функция . p=" << p << endl;

    auto ls = [&p]()
        {
            p = 3;
        };
    ls();
    cout << "Лямбда функция . p=" << p << endl;



    doWork2(mV,
        [](int a) 
        {
            if (a % 2 == 0)
            {
                 cout << "ананимная функция  \\ четные числа  " << a << endl;
            }
        });



    return 0;
}
