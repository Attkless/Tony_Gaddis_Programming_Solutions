/* Total Purchase
A customer in a store is purchasing five items. The prices of the five items are: 

	Price of item 1 = $15.95
	Price of item 2 = $24.95
	Price of item 3 = $6.95
	Price of item 4 = $12.95
	Price of item 5 = $3.95

Write a program that holds the prices of the five items in five variables. Display each item's 
price, the subtotal of the sale, the amount of sales tax, and the total. Assume the sales tax is 7%.

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float item1, item2, item3, item4, item5;
	item1 = 15.95;
	item2 = 24.95;
	item3 = 6.95;
	item4 = 12.95;
	item5 = 3.95;
	
	float total, subTotal, tax, salesTax;
	
	tax = .07;
	
	// Displays each item's price
	cout << "Item #1 cost: " << item1 << endl;
	cout << "Item #2 cost: " << item2 << endl;
	cout << "Item #3 cost: " << item3 << endl;
	cout << "Item #4 cost: " << item4 << endl;
	cout << "Item #5 cost: " << item5 << endl;
	
	cout << endl; // This is just a filler new line in order to break apart the data
	
	// Figures out the subtotal of the sale
	subTotal = item1 + item2 + item3 + item4 + item5;
	cout << "Subtotal: " << subTotal << endl;
	
	// Calculates the sales tax of the sale
	salesTax = tax * subTotal; 
	cout << "Sales tax: " << salesTax << endl;
	
	// Prints out the total of the sale
	total = subTotal + salesTax;
	cout << "Total: " << total << endl;
}
