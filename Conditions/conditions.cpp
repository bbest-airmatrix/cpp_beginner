#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Enter a: " << endl;
    cin >> a;

    cout << "Enter b: " << endl;
    cin >> b;

    // IF statements
    if (a > b)
    {
        cout << a << " > " << b << endl;
    }
    else if (a < b)
    {
        cout << a << " < " << b << endl;
    }
    else
    {
        cout << a << " == " << b << endl;
    }

    // SWITCH statement

    int x = 50;

    switch (x) // can only use int and char (compares using acii value) type for switch
    {
    case 0:
        cout << "Number is zero!" << endl;
        break;
    case 25:
        cout << "Number is twenty-five!" << endl;
        break;
    default:
        cout << "Number is: " << x << endl;
    }

    // Conditional Operator
    // Just like in JS  <condition> ? <return this if true> : <otherwise return this>

    int y = 100;

    string message = (x < y) ? "x < y" : "x >= y";

    return 0;
}