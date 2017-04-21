/*
 * Date Class test program
 * $ make
 */
#include <iostream>
#include "Date.h" // Date class definition
using namespace std;

int main()
{

    Date d1(12, 27, 2010); // December 27, 2010
    Date d2; // defaults to January 1, 1990

    cout << "d1 is " << d1 << endl;
    cout << "d2 is " << d2 << "\n\n";

    cout << "d1 += 7 is " << (d1 += 7) << "\n\n";


    d2.setDate(2, 28, 2008);
    cout << "  d2 is " << d2 << endl;
    cout << "++d2 is " << ++d2 << " (leap year allows 29th)\n\n";


    Date d3(7, 13, 2010);
    cout << "Testing the prefix increment operator:" << endl
         << "  d3 is " << d3 << endl;
    cout << "++d3 is " << ++d3 << endl;
    cout << "  d3 is " << d3 << "\n\n";

    cout << "Testing the postfix increment operator:" << endl
         << "  d3 is " << d3 << endl;
    cout << "d3++ is " << d3++ << endl;
    cout << "  d3 is " << d3 << endl;

} // end main
