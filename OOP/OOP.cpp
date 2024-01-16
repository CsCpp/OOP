#include <iostream>
#include <functional>
#include<vector>

using namespace std;


//std::function
void Foo(int a)
{
  
    if (a > 10 && a < 40)
    {
        cout << "Foo - " << a << endl;
    }
}

void Bar(int a)
{
  
    if (a % 2 == 0) 
    {
        cout << "Bar - " << a << endl;
    }

}

void doWork(vector<int> &mV, function<void(int)> f) 
{
    for (auto&& e : mV) 
    {
        f(e);
    }
}

void doWork2(vector<int>& mV, vector<function<void(int)>> funcVector)
{
    for (auto&& e : mV)
    {
        for (auto& fe : funcVector) 
        {
            fe(e);
        }
    }
}


int main()
{
    setlocale(LC_ALL, "ru");
    vector<int> mV = {2,52,41,41,36,89,21,15,24,93,27,51,84};
    cout << endl << "doWork" << endl;
    cout << "Foo..." << endl;
    doWork(mV, Foo);
    cout << "Bar..." << endl;
    doWork(mV, Bar);
    cout <<  endl << "doWork2" << endl;
   
    vector<function<void(int)>> l = {Foo, Bar};

    doWork2(mV, l);
    l.emplace_back(Foo);
    l.emplace_back(Foo);
    doWork2(mV, l);

    return 0;
}
