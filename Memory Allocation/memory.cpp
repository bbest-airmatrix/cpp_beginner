#include <iostream>

using namespace std;

int main()
{
    int arr[1000]; // done during compilation

    int amount;
    cout << "Enter array size for memory storage" << endl;
    cin >> amount;

    //int array[amount]; Can't do this because the compiler did not make enough memory room for our program to take into account the user input.

    //Solution
    int *a = new int[amount]; // new keyword dynamically allocates memory for this

    delete []a;
    a = NULL;

    // use new keyword to alloc memory dynamically
    // can also use {} to scope variables
    {
        int *p = new int;

        *p = 50;

        cout << *p << endl;

        //to release memory; keeps pointer pointing to address but that address spot does not belong to our program anymore.
        delete p;
        // always assign null after
        p = NULL;
    }

    return 0;
}