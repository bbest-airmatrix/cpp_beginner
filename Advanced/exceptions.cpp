#include <iostream>

using namespace std;

int main()
{

    int a = 50;

    try
    {
        if (a != 0)
        {
            throw a;
        }
    }
    catch (int e)
    {
        cout << a << endl;
    }
    catch (...)
    {
        cout << "This is a default catch when the type of the throw does not match the others." << endl;
    }
    return 0;
}