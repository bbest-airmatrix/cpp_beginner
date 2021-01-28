#include <iostream>

using namespace std;

enum DayOfWeek
{
    MON, // 0
    TUES, // 1
    WED, // 2
    THURS, // 3
    FRI, // 4
    SAT, // 5
    SUN = 7 // you can also set the corresponding value
};

int main()
{
    DayOfWeek dow = MON;
    return 0;
}