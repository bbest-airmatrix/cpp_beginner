#include <iostream>

using namespace std;

// global variables
// get default values of their types.
int globalVar;

// Function delcaration
void welcome();
bool isNumber(string); // don't need param names for declaration
void changeValueTo(int, int);
int main()
{
    welcome();
    string tmp;

    bool play = true;

    while (play)
    {
        cout << "Enter the number: " << endl;
        cin >> tmp;

        bool n = isNumber(tmp);

        if (n)
        {
            cout << "Number was entered correctly" << endl;
        }
        else
        {
            cout << "Number was entered incorrectly" << endl;
        }

        string ans;
        cout << "Play again? (Y\\n): ";
        cin >> ans;
        if (ans == "n")
        {
            play = false;
        }
    }

    return 0;
}

// Function definition
void welcome()
{
    cout << "Welcome!" << endl;
}

bool isNumber(string tmp)
{

    for (int i = 0; i < tmp.length(); i++)
    {
        if (!(tmp[i] >= 48 && tmp[i] <= 57))
        {
            return false;
            break;
        }
    }

    return true;
}

void changeValueTo(int x, int y) {
    // This will not change x outside this function because the function makes a copy of the passed values for use.
    // Need to use pointers to change value at the address.
    x = y;
}