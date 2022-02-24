/* 								Distance per Tank of Gas

A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in town and 28.9 miles per
gallon when driven on the highway. Write a program that calculates and displays the distance the car
can travel on one tank of gas when driven in twon and when driven on the highway.

Hint: The following formula can be used to calculate the distance: 

	Distance = Number of Gallons * Average Miles Per Gallon
	
*/

#include <iostream>

using namespace std;

int main() {
	float distance, gallons, drivenTown, drivenHwy;
	
	gallons = 20;
	
	drivenTown = 23.5; // Average distacne while in town
	
	drivenHwy = 28.9;  // Average distacne while on Hwy
	
	distance = gallons * drivenTown; // Distance while in town 
	cout << "DIstance travelled while in town: " << distance << endl;
	
	cout << endl;
	
	distance = gallons * drivenHwy;	 // Distacne while on Hwy
	cout << "Distance travelled while on Highway: " << distance << endl;
	
	return 0;
}
