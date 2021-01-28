#include <iostream>

using namespace std;

int *multiplyBy(int *, int); //takes in a pointer int and an int.

int main()
{
    int var = 5;

    cout << &var << endl; // gives the variable address

    // Pointer is a variable that stores a memory address.

    int *p; // the * is justed used to indicate that this variable is a pointer.
    p = &var;

    cout << p << endl;

    // To get the value at that address
    cout << *p << endl;

    int *const p_const = &var;   // This pointer has to be init when defined, because it can't change after defining the address it is pointing to.
    const int *p_2 = &var;       // this is a pointer that can't change the value that is under the address.
    const int *const p_3 = &var; // Can't change the value under var and can't change the address it points to.

    // Pointer to a pointer

    int **pp = &p;

    int a[3];
    int *p_arr = &a[0];
    // pointers are smart and will shift with the value as things are added to the array

    return 0;
}

int *multiplyBy(int *var, int amount)
{
    *var *= amount;
    return var;
}