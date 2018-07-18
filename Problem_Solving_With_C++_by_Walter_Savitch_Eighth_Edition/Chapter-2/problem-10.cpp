//----------------------------------------------------------------------------------------------//
//	Name -		problem-10.cpp								//
//	Description -	Write program that reads in ten whole numbers and that outputs the sum	//
//			of all the numbers greater than zero, the sum of all the numbers less	//
//			than zero (which will be a negative number or zero), and the sum of all	//
//			the numbers, whether positive, negative, or zero. The user enters the	//
//			ten numbers just once each and the user can enter them in any order. 	//
//			Your program should not ask the user to enter the positive numbers and	//
//			the negative numbers separately.					//
//	Created -	07/17/2018								//
//	Last Modified -	07/17/2018								//
//	Errors -	None									//
//	Sample Run -										//
//----------------------------------------------------------------------------------------------//

#include <iostream>
using namespace std;

int main(void)
{
	const	int	NUMBERS_COUNT = 10;
	int	numberRead;
	int	positiveTotal = 0;
	int	negativeTotal = 0;

	cout << "Enter ten number with space in between -\n";
	for (int i = NUMBERS_COUNT; i > 0; i--)
	{
		cin >> numberRead;
		if (numberRead <= 0)
		{
			negativeTotal += numberRead;	
		}
		else 
		{
			positiveTotal += numberRead;
		}
	}

	cout << "Total of positive numbers = " << positiveTotal << endl;
	cout << "Total of negative numbers = " << negativeTotal << endl;
	cout << "Total = " << positiveTotal + negativeTotal << endl;

	return 0;
}
