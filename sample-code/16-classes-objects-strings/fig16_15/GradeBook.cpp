/*
 * Implementations of the GradeBook member-function definitions.
 * The setCourseName function performs validation.
 */
#include <iostream>
#include "GradeBook.h"
using namespace std;

// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook(string name)
{
    setCourseName(name); // validate and store courseName
} // end GradeBook constructor

// function that sets the course name;
// ensures that the course name has at most 30 characters
void GradeBook::setCourseName(string name)
{
    if (name.size() <= 30) // if name has 30 or fewer characters
        courseName = name; // store the course name in the object

    else { // if name has more than 30 characters
        // set courseName to first 30 characters of parameter name
        courseName = name.substr(0, 30); // start at 0, length of 30

        cerr << "Name \"" << name << "\" exceeds maximum length (30)." << endl;
        cerr << "Limiting courseName to first 30 characters.\n" << endl;
    } // end if
} // end function setCourseName

// function to get the course name
string GradeBook::getCourseName() const
{
    return courseName; // return object's courseName
} // end function getCourseName

// display a welcome message to the GradeBook user
void GradeBook::displayMessage() const
{
    // call getCourseName to get the courseName
    cout << "Welcome to the grade book for "
         << getCourseName() << "!" << endl;
} // end function displayMessage
