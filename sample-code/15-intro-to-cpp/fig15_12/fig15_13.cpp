/*
 * Demonstrating function template maximum
 * $ g++ fig15_13.cpp -o fig15_13
*/
#include <iostream>
using namespace std;

#include "maximum.h" // include definition of function template maximum

int main()
{
    // demonstrate maximum with int values
    int int1, int2, int3;

    cout << "Input three integer values: ";
    cin >> int1 >> int2 >> int3;

    // invoke int version of maximum
    cout << "The maximum integer value is: "
         << maximum(int1, int2, int3);

    cout << "\n" << endl;

    // demonstrate maximum with double values
    double double1, double2, double3;

    cout << "Input three double values: ";
    cin >> double1 >> double2 >> double3;

    // invoke double version of maximum
    cout << "The maximum double value is: "
         << maximum(double1, double2, double3);

    cout << "\n" << endl;

    // demonstrate maximum of char values
    char char1, char2, char3;

    cout << "Input three characters: ";
    cin >> char1 >> char2 >> char3;

    // invoke char version of maximum
    cout << "The maximum character value is: "
         << maximum(char1, char2, char3);

    cout << endl;

}
