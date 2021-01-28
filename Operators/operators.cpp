#include <iostream>

using namespace std;

int main()
{
    int a = 50;
    int b = 10;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl; // when dividing two integers the answer will always be an integer so it rounds the number down.
    cout << a % b << endl; // modulus - returns the remainder
    
    a += 10; // increment or use ++a for pre-incrementation or a++ for post-incrementation
    a -= 10; // decrement or use --
    // *=
    // /=
    // %=

    // Relational Ops
    cout << (a == b) << endl; // 1 = true and 0 = false
    cout << (a != b) << endl;
    cout << (a < b) << endl;
    cout << (a > b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;

    // Logical Ops
    cout << (a != b && a >= b) << endl; // AND &&
    cout << (a != b || a == b) << endl; // OR ||
    cout << !(a != b) << endl; // Negation !

    return 0;
}