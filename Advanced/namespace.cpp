#include <iostream>

using namespace std; // indicates you are using this namespace without having to explcitily do std::

namespace A
{
    int a = 100;
}

namespace B
{
    int a = 10;
}

//Global namespace
int a = 1;
int main()
{
    int a = 0;
    //local namespace;
    cout << a << endl; // 0
    cout << ::a << endl; // 1
    cout << A::a << endl; // 100
    cout << B::a << endl; // 10
    return 0;
}