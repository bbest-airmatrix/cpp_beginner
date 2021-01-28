#include <iostream>

using namespace std;

void change(string &);
string &changeReturn(string &); // we can also return a reference variable. So changing the value of the return also changes the original.
// if the function only return a regular string then we could change it without changing the original value.
int main()
{
    string name = "Brandon";

    cout << name << endl;
    cout << &name << endl; //address

    string &nr_6 = name; // reference variable essentially is another label pointing to the same address/value
    // you can also do const string label = var in order to not allow changing of the original value.

    // IF you want to change a variable value inside a func then you pass a reference variable.

    nr_6 = "Emma";

    cout << name << endl;

    change(name);
    cout << name << endl;

    string &s = changeReturn(name);

    s = "!";

    cout << "s: " << name << endl;
    cout << "name: " << name << endl;
    return 0;
}

void change(string &s)
{
    s = "Unknown";
}

string &changeReturn(string &s)
{
    s = "Mystery";
    return s;
}