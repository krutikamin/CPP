//----------------------------------------------------------------------------------------------//
//	Name -		problem-8.cpp								//
//	Description -	Write a programme that allows the user to enter a number of quarters, 	//
//			dimes, and nickels and then outputs the monetary value of the coins	//
//			in cents.								//
//	Created -	23/12/2015								//
//	Last Modified -	23/12/2015								//
//	Errors -	None									//
//	Sample Run -										//
//			Please enter the number of quarters: 1					//
//			Please enter the number of dimes   : 3					//
//			Please enter the number of nickels : 6					//
//			------------------------------------------				//
//			The monetary value of the coins in cents is 85				//
//			Press any key to continue...						//
//----------------------------------------------------------------------------------------------//

#include <iostream>
using namespace std;

int main(void)
{
	int quarters, dimes, nickels;

	cout << "Please enter the number of quarters: ";
	cin >> quarters;
	cout << "Please enter the number of dimes   : ";
	cin >> dimes;
	cout << "Please enter the number of nickels : ";
	cin >> nickels;
	cout << "------------------------------------------\n";
	cout << "The monetary value of the coins in cents is " << ((quarters * 25) + (dimes * 10) + (nickels * 5)) << endl;

	cout << "Press any key to continue...";
	cin.get();
	
	return 0;
}
