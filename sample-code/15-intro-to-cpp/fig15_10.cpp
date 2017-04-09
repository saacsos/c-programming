/*
 * Overloaded square functions.
 * $ g++ fig15_10.cpp -o fig15_10
*/
#include <iostream>
using namespace std;

// function square for int values
int square(int number)
{
    cout << "square of integer " << number << " is ";
    return number * number;
}

// function square for double values
double square(double number)
{
    cout << "square of double " << number << " is ";
    return number * number;
}

int main()
{
    cout << square(8) << endl;

    cout << square(6.25) << endl;
}
