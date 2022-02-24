/* 
							Miles Per Gallon

A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a program that
calculates the number of miles per gallon the car gets. Display the result on the screen.

Hint: Use the following formula to calculate miles per gallon (MPG):
	
	MPG = Miles Driven / Gallons of Gas Used
	
*/

#include <iostream>

using namespace std;

int main() {
	float milesDriven, gallonsHold, mpg;
	
	milesDriven = 375; // Stores the miles that the car has driven
	gallonsHold = 15;  // Stores the amount of gas that the car can hold
	
	// Calculates the Miles Per Gallon that the car can obtain
	mpg = milesDriven / gallonsHold;
	
	cout << "The car has a MPG (Miles Per Gallon) of: " << mpg << endl;
	
	return 0;
}
