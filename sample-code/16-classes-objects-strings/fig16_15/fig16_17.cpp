/*
 * Create and manipulate a GradeBook object; illustrate validation
 * $ make
 */
#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook
using namespace std;

int main()
{
    // create two GradeBook objects:
    // initial course name of gradeBook1 is too long
    GradeBook gradeBook1("01418114 Introduction to Computer Science");
    GradeBook gradeBook2("01418116 Computer Programming");

    // display each GradeBook's courseName
    cout << "gradeBook1's initial course name is: "
         << gradeBook1.getCourseName() << endl;
    cout << "gradeBook2's initial course name is: "
         << gradeBook2.getCourseName() << endl;

    // modify gradeBook1's courseName (with a valid-length string)
    gradeBook1.setCourseName("CS114 Intro to CS");

    // display each GradeBook's courseName
    cout << "\ngradeBook1's course name is: "
         << gradeBook1.getCourseName() << endl;
    cout << "gradeBook2's course name is: "
         << gradeBook2.getCourseName() << endl;
} // end main
