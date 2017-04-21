/*
 * Standard Library string class test program.
 * $ g++ fig18_01.cpp -o fig18_01
 */
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int main()
{
    string s1("happy");
    string s2(" birthday");
    string s3;

    // test overloaded equality and relational operators
    cout << "--- overloaded equality and relational operators ---" << endl;
    cout << "s1 is \"" << s1 << "\"; "
         << "s2 is \"" << s2 << "\"; "
         << "s3 is \"" << s3 << "\";\n\n"
         << "The results of comparing s2 and s1:\n"
         << "s2 == s1 yields " << (s2 == s1 ? "true": "false") << "\n"
         << "s2 != s1 yields " << (s2 != s1 ? "true": "false") << "\n"
         << "s2 >  s1 yields " << (s2 > s1 ? "true": "false") << "\n"
         << "s2 <  s1 yields " << (s2 < s1 ? "true": "false") << "\n"
         << "s2 >= s1 yields " << (s2 >= s1 ? "true": "false") << "\n"
         << "s2 <= s1 yields " << (s2 <= s1 ? "true": "false") << "\n";

    // test string member-function empty
    cout << "--- string member-function empty ---" << endl;
    cout << "\nTesting s3.empty():" << endl;
    if (s3.empty()) {
        cout << "s3 is empty: assigning s1 to s3;" << endl;
        s3 = s1; // assign s1 to s3
        cout << "s3 is \"" << s3 << "\"" << endl;
    } // endif;

    // test overloaded string concatenation operator
    cout << "--- overloaded string concatenation operator ---" << endl;
    cout << "\ns1 += s2 yields s1 = ";
    s1 += s2; // test overloaded concatenation
    cout << s1 << endl;

    // test overloaded string concatenation operator with a C string
    cout << "--- overloaded string concatenation operator with a C string ---"
         << endl;
    cout << "\n\ns1 += \" to you\" yields" << endl;
    s1 += " to you";
    cout << "s1 = " << s1 << "\n\n";

    // test substr "to-end-of-string" option
    cout << "--- substr \"to-end-of-string\" option ---" << endl;
    cout << "The substring of s1 starting at\n"
         << "location 15, s1.substr(15), is:\n"
         << s1.substr(15) << endl;

    // test copy constructor
    cout << "--- copy constructor ---" << endl;
    string s4(s1);
    cout << "s4 = " << s4 << "\n\n";

    // test overloaded copy assignment (=) operator with self-assignment
    cout << "--- overloaded copy assignment (=) operator with self-assignment ---"
         << endl;
    cout << "assigning s4 to s4" << endl;
    s4 = s4;
    cout << "s4 = " << s4 << endl;

    // test using overloaded subscript operator to create lvalue
    cout << "--- using overloaded subscript operator to create lvalue ---"
         << endl;
    s1[0] = 'H';
    s1[6] = 'B';
    cout << "s1 after s1[0] = 'H' and s1[6] = 'B' is: "
         << s1 << "\n\n";

    // test subscript out of range with string member function "at"
    cout << "Attempt to assign 'd' to s1.at(30) yields:" << endl;
    try {
        s1.at(30) = 'd'; // ERROR: subscript out of range
    } catch (out_of_range &ex) {
        cout << "An exception occured: " << ex.what() << endl;
    } // end try-catch
} // end main
