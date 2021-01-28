#include <iostream>

using namespace std;

int main()
{
    // static typed language
    // You can declare variables without values;
    int a; // inits A to the value currently at that address
    cout << a << endl;
    a = 4;
    cout << a << endl;  // 4
    cout << &a << endl; // outputs the address of A

    // Multiple initialization
    int b = 5, c, d = 7;
    cout << b << endl;
    // Variable Types
    int i = 1;        // -2B - 2B, 4 Bytes
    short si;         // -32768 - 327767, 2 Bytes
    float t2 = 5.12;  // 4 Bytes, up to 10e38
    double t3 = 5.12; // 8 Bytes, up to 10e308
    // If you don't need negative numbers then you can use 'unsigned'
    unsigned short positive_short_int = 31;
    // Immutable variables
    const int DO_NOT_CHANGE_ME = -1;

    char t4 = 'B';
    string t5 = "Hello world";
    bool t6 = true;

    cout << t5 << endl;

    // Type Casting
    double x = 5.5;

    cout << (int)x << endl;

    return 0;
}