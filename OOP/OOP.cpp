#include <iostream>
#include <functional>
#include<vector>

typedef std::vector<int> int_vector;

//typedef

void doWork2(int_vector& mV, std::function<void(int)> func)
{
    for (auto&& e : mV)
    {
        func(e);
    }
}


int main()
{
    setlocale(LC_ALL, "ru");
    int_vector mV = { 2,52,41,41,36,89,21,15,24,93,27,51,84 };

    int p = 0;
    std::cout << "Лямбда функция . p=" << p << std::endl;

    auto ls = [&p]()
        {
            p = 3;
        };
    ls();
    std::cout << "Лямбда функция . p=" << p << std::endl;



    doWork2(mV,
        [](int a) 
        {
            if (a % 2 == 0)
            {
                std::cout << "ананимная функция  \\ четные числа  " << a << std::endl;
            }
        });



    return 0;
}
