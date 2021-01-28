
// Preprocessor Directives
#include <iostream> //includes the header file for the iostream lib. To include files use "" instead of <>
#define PI 3.14 // define directive replaces any instance of PI in the code with 3.14. You can put anything in here, even c++ code.
// https://www.cplusplus.com/doc/tutorial/preprocessor/
using namespace std;

int main()
{
    int a;
    cin >> a; // cin calls for console input and assigns value to variable a;

    cout << "You entered: " << a << endl;
    return 0;
}