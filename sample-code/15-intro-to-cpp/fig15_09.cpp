/*
 * Using the unary scope resolution operator.
 * $ g++ fig15_09.cpp -o fig15_09
*/
#include <iostream>
using namespace std;

int number = 7; // global variable named number;

int main()
{
    double number = 10.5; // local variable named number
    // display values of local and global variables
    cout << "Local double value of number = " << number << endl;

    cout << "Global int value of number = " << ::number << endl;
}
