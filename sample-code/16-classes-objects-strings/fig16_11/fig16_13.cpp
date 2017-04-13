/*
 * GradeBook class demonstration after separating
 * its interface from its implementation.
 * $ g++ fig16_13.cpp -o fig16_13
 */
#include <iostream>
#include "GradeBook.h"
using namespace std;

int main()
{
    // create two GradeBook objects
    GradeBook gradeBook1("01418114 Introduction to Computer Science");
    GradeBook gradeBook2("01418116 Computer Programming");

    // display initial value of courseName for each GradeBook
    cout << "gradeBook1 created for course: "
         << gradeBook1.getCourseName()
         << endl;

    cout << "gradeBook2 created for course: "
         << gradeBook2.getCourseName()
         << endl;
}
