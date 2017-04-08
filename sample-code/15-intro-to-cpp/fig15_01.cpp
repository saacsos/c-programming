/*
 * Addition program that displays the sum of two numbers.
 * $ g++ fig15_01.cpp -o fig15_01
*/
#include <iostream> // allows program to perform input and output

int main()
{
    std::cout << "Enter first integer: "; // prompt user for data
	int number1;
	std::cin >> number1; // read first integer from user into number1

	std::cout << "Enter second integer: "; // prompt user for data
	int number2;
	std::cin >> number2; // read second integer from user into number2

	int sum = number1 + number2;
	std::cout << "Sum is " << sum << std::endl; // display sum; end line

    return 0;
}
