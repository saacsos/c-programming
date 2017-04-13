/*
 * GradeBook member-function definitions. The file contains
 * implementations of the member functions prototyped in GradeBook.h
 */
#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook
using namespace std;

// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook(string name)
    : courseName(name) // member initializer to initialize courseName
{
    // empty body
} // end GradeBook constructor

// function to set the courseName
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
