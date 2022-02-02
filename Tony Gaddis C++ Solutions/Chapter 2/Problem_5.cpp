/*
5. Average of Values
To get the average of a series of values, you add the values up and then divide the sum by the number
of values. Write a program that stores the following values in five different variables: 28, 32, 37, 24, and 33. 
The program should first calculate the sum of these five variables and store the result in a separate
variable named sum. Then, the program should divide the sum variable by 5 to get the average. Display
the average on the screen.
*/

#include <iostream>

using namespace std;

int main() {
    float score1, score2, score3, score4, score5, sum, average;
    score1 = 28;
    score2 = 32;
    score3 = 37;
    score4 = 24;
    score5 = 33;
    sum = score1 + score2 + score3 + score4 + score5;
    average = sum / 5;
    cout << average << endl;
}