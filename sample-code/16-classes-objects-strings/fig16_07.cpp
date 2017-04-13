/*
 * Instantiating multiple objects of the GradeBook class
 * and using the GradeBook constructor to specify the course name
 * when each GradeBook object is created
 * $ g++ fig16_07.cpp -o fig16_07
 */
#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    // constructor initializes courseName with string supplied as argument
    explicit GradeBook(string name)
        : courseName(name) // member initializer to initialize courseName
    {
        // empty body
    } // end GradeBook constructor

    // function that sets the course name
    void setCourseName(string name)
    {
        courseName = name; // store the course name in the object
    } // end function setCourseName

    // function that gets the course name
    string getCourseName() const
    {
        return courseName; // return the object's courseName
    } // end function getCourseName

    // function that displays a welcome message
    void displayMessage() const
    {
        // this statement calls getCourseName
        // to get the name of the course this GradeBook represents
        cout << "Welcome to the Grade book for "
             << getCourseName() << "!"
             << endl;
    } // end function displayMessage

private:
    string courseName; // course name for this GradeBook

}; // end class GradeBook

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
} // end main
