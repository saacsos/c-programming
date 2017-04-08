/*
 * Inline function that calculates the volume of a cube.
 * $ g++ fig15_03.cpp -o fig15_03
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Definition of inline function cube. Definition of function appears
// before function is called, so a function prototype is not required.
// First line of function definition acts as the prototype.
inline double cube(const double side)
{
    return side * side * side; // calculate the cube of side
}

int main()
{
    double sideValue; // stores value entered by user

    for (int i = 1; i <= 3; i++) {
        cout << "\nEnter the side length of your cube: ";
        cin >> sideValue; // read value from user

        // calculate cube of sideValue and display result
        cout << "Volume of cube with side " << sideValue
             << " is " << cube(sideValue) << endl;
    }
}
