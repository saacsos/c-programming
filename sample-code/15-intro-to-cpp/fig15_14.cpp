/*
 * Demonstrating C++ Standard Library class template vector.
 * $ g++ fig15_14.cpp -o fig15_14
*/
#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>
using namespace std;

void outputVector(const vector<int> &); // display the vector
void inputVector(vector<int> &); // input values into the vector

int main()
{
    vector<int> integers1(7); // 7-element vector<int>
    vector<int> integers2(10); // 10-element vector<int>

    // print integers1 size and contents
    cout << "Size of vector integers1 is " << integers1.size()
         << "\nvector after initialization:" << endl;
    outputVector(integers1);
    cout << endl;

    // print integers2 size and contents
    cout << "Size of vector integers2 is " << integers2.size()
         << "\nvector after initialization:" << endl;
    outputVector(integers2);
    cout << endl;

    // ---------------------------------------------------
    cout << "--------------------------------------------\n" << endl;
    // input and print integers1 and integers2
    cout << "Enter 17 integers: " << endl;
    inputVector(integers1);
    inputVector(integers2);

    cout << "After input, the vectors contain:\n"
         << "integers1:" << endl;
    outputVector(integers1);
    cout << "integers2:" << endl;
    outputVector(integers2);
    cout << endl;

    // use inequality (!=) operator with vector objects
    cout << "Evaluating: integers1 != integers2" << endl;
    if (integers1 != integers2)
        cout << "integers1 and integers2 are not equal" << endl;

    cout << endl;

    // create vector integers3 using integers1 as an initializer
    vector<int> integers3(integers1); // copy constructor

    // print size and contents of integers3
    cout << "Size of vector integers3 is " << integers3.size()
         << "\nvector after initialization:" << endl;
    outputVector(integers3);
    cout << endl;
    // ---------------------------------------------------
    cout << "--------------------------------------------\n" << endl;

    // use overloaded assignment (=) operator
    cout << "Assigning integers2 to integers1:" << endl;
    integers1 = integers2; // assign integers2 to integers1

    cout << "integers1:" << endl;
    outputVector(integers1);
    cout << "integers2:" << endl;
    outputVector(integers2);
    cout << endl;

    // ---------------------------------------------------
    cout << "--------------------------------------------\n" << endl;

    // use equality (==) operator with vector objects
    cout << "Evaluating: integers1 == integers2" << endl;

    if (integers1 == integers2)
        cout << "integers1 and integers2 are equal" << endl;

    // ---------------------------------------------------
    cout << "--------------------------------------------\n" << endl;

    // use square brackets to create rvalue
    cout << "integers1[5] is " << integers1[5] << endl;
    cout << endl;
    // use square brackets to create lvalue
    cout << "Assigning 1000 to integers[5]" << endl;
    integers1[5] = 1000;
    cout << "integers1:" << endl;
    outputVector(integers1);
    cout << endl;

    // ---------------------------------------------------
    cout << "--------------------------------------------\n" << endl;

    // attempt to use out-of-range index
    try {
        cout << "Attempt to display integers1.at(15)" << endl;
        cout << integers1.at(15) << endl;
    } catch (out_of_range &ex) {
        cout << "An exception occurred: " << ex.what() << endl;
    }
}

// output vector contents
void outputVector(const vector<int> &array)
{
    size_t i; // declare control variable

    for (i = 0; i < array.size(); ++i)
    {
        cout << setw(12) << array[i];

        if ((i + 1) % 4 == 0)
            cout << endl;
    }
    cout << endl;
}

// input vector contents
void inputVector(vector<int> &array)
{
    for (size_t i = 0; i < array.size(); ++i)
        cin >> array[i];
}
