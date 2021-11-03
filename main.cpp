#include <iostream>
#include "singleton.h"

using namespace std;

void TestFuncA()
{
    Singleton& singleton = Singleton::Instance();
    singleton.setValue(20);
}

void TestFuncB()
{
    Singleton& singleton = Singleton::Instance();
    std::cout << singleton.getValue() << std::endl;
}

int main()
{
    TestFuncA();
    TestFuncB();
    cout << "Hello World!" << endl;
    return 0;
}
