#include "personaldata.h"

// Constructor
PersonalData::PersonalData()
{
    age = 1;
    counter++;
    ID = counter;
}

// Destructor
PersonalData::~PersonalData()
{
    return;
}

// Init static variable
int PersonalData::counter = 0;

void PersonalData::setAge(int age)
{

    if (age < 0)
    {
        // can use this keyword to refer to classes instance variable if you want.
        this->age = 0;
    }
    else
    {
        this->age = age;
    }
};

short PersonalData::getAge()
{
    return age;
}

PersonalData PersonalData::operator+(PersonalData pd) {
    PersonalData tmp;

    tmp.age = this->age + pd.age;

    return tmp;
}