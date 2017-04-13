/*
 * Define class GradeBook with a member function that takes a parameter,
 * create a GradeBook object and call its displayMessage function.
 * $ g++ fig16_03.cpp -o fig16_03
 */
#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    // function that displays a welcome message to the GradeBook user
    void displayMessage(string courseName) const
    {
        cout << "Welcome to the grade book for " << courseName << "!" << endl;
    } // end function displayMessage
}; // end class GradeBook

// function main begins program execution
int main()
{
    string nameOfCourse; // string of characters to store the course name
    GradeBook myGradeBook; // create a GradeBook object named myGradeBook

    // prompt for and input course name
    cout << "Please enter the course name:" << endl;
    getline(cin, nameOfCourse); // read a course name with blanks
    cout << endl; // output a blank line

    // call myGradeBook's displayMessage function
    // and pass nameOfCourse as an argument
    myGradeBook.displayMessage(nameOfCourse);
} // end main
