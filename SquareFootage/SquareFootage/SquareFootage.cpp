// Jeremy Harrell
// ITSE 1301
// Programming Problem square footage 
// Creating a program that will take the total for final square feet and multiply them by the price to get a total 

#include "stdafx.h"
#include <iostream>
using namespace std; 


int main()
{
	//Setting up the ints so they can represent the number used for price, area, and total
	int IntPrice1 = 1;
	int IntArea1 = 1;
	int IntPrice2 = 2;
	int IntArea2 = 2;
	int IntPrice3 = 3;
	int IntArea3 = 3;

	//Setting up the first set of input
	cout << "Area for Home 1: ";
	cin >> IntArea1;
	
	cout << "Price for Home 1: ";
	cin >> IntPrice1; 

	//First output for house 1
	cout << "Total for Home 1: " << IntArea1 * IntArea1 << endl;
	 
	//Setting up for the second output
	cout << "Area for Home 2: ";
	cin >> IntArea2;

	cout << "Price for Home 2: ";
	cin >> IntPrice2; 

	//Result for the second total
	cout << "Total for Home 2: " << IntArea2 * IntPrice2 << endl; 

	//Setting up for the third home 
	cout << "Area for Home 3: ";
	cin >> IntArea3;

	cout << "Price for Home 3: ";
	cin >> IntPrice3;

	//output for the third home 
	cout << "Total for Home 3: " << IntArea3 * IntPrice3 << endl;

    return 0;
}

