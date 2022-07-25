/*

Write a C++ program to illustrate
i. Division by zero
ii. Array index out of bounds exception
Also use multiple catch blocks.

Sandali Singh
OOPs Assignment 

*/

#include <iostream>
//#include <stdexcept> // To use runtime_error
using namespace std;

// Defining function Division
float Division(float num, float den)
{
	// If denominator is Zero
	// throw runtime_error
	if (den == 0) {
		throw runtime_error("Math error: Attempted to divide by Zero\n");
	}

	// Otherwise return the result of division
	return (num / den);

} // end Division

int main(){
	float numerator, denominator, result;
	numerator = 12.5;
	denominator = 0;

	// try block calls the Division function
	try {
		result = Division(numerator, denominator);

		// this will not print in this example
		cout << "The quotient is "
			<< result << endl;
	} catch (runtime_error& e) {

		cout << "Exception occurred" << endl
			<< e.what();
	}

} // end main
