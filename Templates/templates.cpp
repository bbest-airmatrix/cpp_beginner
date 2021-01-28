#include <iostream>

using namespace std;

// Problem: need a way to generalize functions to avoid the following
// int add(int x, int y) { return x + y; };
// double add(double x, double y) { return x + y; };
// double add(double x, int y) { return x + y; };
// double add(int x, double y) { return x + y; };
// BAD!

// Use a template for generalization
template <typename T>

/*
This template using function simply adds two variables that are of the same type.
*/
T add(T x, T y)
{
    return X + y;
};

int main()
{
    cout << add(2.5, 5.5) << endl;
    return 0;
}