/*
 * Comparing pass-by-value and pass-by-reference with references.
 * $ g++ fig15_05.cpp -o fig15_05
*/
#include <iostream>
using namespace std;

int squareByValue(int); // function prototype (value pass)
void squareByReference(int &); // function prototype (reference pass)

int main()
{
    // demonstrate squareByValue
    int x = 3;
    cout << "x = " << x << " before squareByValue" << endl;
    cout << "Value returned by squareByValue: "
         << squareByValue(x) << endl;

    cout << "-------------------------------------" << endl;

    int z = 12;
    cout << "z = " << z << " before squareByReference" << endl;
    squareByReference(z);
    cout << "z = " << z << " after squareByReference" << endl;
}

// squareByValue multiplies number by itself, store the result
// in number and returns the new value of number.
int squareByValue(int number)
{
    return number *= number; // caller's argument not modified
}

// squareByReference multiplies numberRef by itself and stores
// the result in the variable to which numberRef refers in the caller
void squareByReference(int &numberRef)
{
    numberRef *= numberRef; // caller's argument modified
}
