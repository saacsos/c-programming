/*
 * Including class GradeBook from file GradeBook.h for use in main.
 * $ g++ fig16_10.cpp -o fig16_10
 */
#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook
using namespace std;

// function main begins program execution
int main()
{
    // create two GradeBook objects
    GradeBook gradeBook1("01418114 Introduction to Computer Science");
    GradeBook gradeBook2("01418116 Computer Programming");

    // display initial value of courseName for each GradeBook
    cout << "gradeBook1 created for course: "
         << gradeBook1.getCourseName() << endl;

    cout << "gradeBook2 created for course: "
         << gradeBook2.getCourseName() << endl;
} // end main
