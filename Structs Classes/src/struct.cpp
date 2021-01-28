#include <iostream>

using namespace std;

// Structs

struct personalData
{
    string name;
    string surname;
    string telephone;
    short age;
};

int main()
{
    personalData person;

    person.name = "Brandon";
    person.surname = "Best";
    person.telephone = "6473893938";
    person.age = 27;

    personalData *p = &person;

    // use address of struct to get to values
    cout << p->name << endl;
    return 0;
}