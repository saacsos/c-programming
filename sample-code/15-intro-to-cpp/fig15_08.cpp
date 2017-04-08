/*
 * Using default arguments.
 * $ g++ fig15_08.cpp -o fig15_08
*/
#include <iostream>
using namespace std;

// function prototype that specifies default arguments
float boxVolume(float length = 1.0f, float width = 1.0f, float height = 1.0f);

int main()
{
    // no arguments -- use default values for all dimensions
    cout << "The default box volume is " << boxVolume();

    // specify length; default width and height
    cout << "\n\nThe volume of a box with length 10, \n"
         << "width 1 and height 1 is: " << boxVolume(10) << endl;

     // specify length and width; default height
     cout << "\n\nThe volume of a box with length 10, \n"
          << "width 12 and height 1 is: " << boxVolume(10, 12) << endl;

      // specify all arguments
      cout << "\n\nThe volume of a box with length 10, \n"
           << "width 12 and height 17 is: " << boxVolume(10, 12, 17) << endl;
}

// function boxVolume calculates the volume of a box
float boxVolume(float length, float width, float height)
{
    return length * width * height;
}
