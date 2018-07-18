//----------------------------------------------------------------------------------------------//
//	Name -		problem-11.cpp								//
//	Description -	OLD -									//
//			[Write program that reads in ten whole numbers and that outputs the sum	//
//			of all the numbers greater than zero, the sum of all the numbers less	//
//			than zero (which will be a negative number or zero), and the sum of all	//
//			the numbers, whether positive, negative, or zero. The user enters the	//
//			ten numbers just once each and the user can enter them in any order. 	//
//			Your program should not ask the user to enter the positive numbers and	//
//			the negative numbers separately.]					//
//			Modify your program from Programming Project 10 so that it outputs the	//
//			sum of all positive numbers, the average of all positive numbers, the	//
//			sum of all nonpositibe numbers, the average of all nonpositive numbers,	//
//			the sum of all positve and non positive numbers, and the average of all //
//			numbers entered.							//
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
	int	positiveNumbersCount = 0;
	int	negativeTotal = 0;
	int	negativeNumbersCount = 0;

	cout << "Enter ten number with space in between -\n";
	for (int i = NUMBERS_COUNT; i > 0; i--)
	{
		cin >> numberRead;
		if (numberRead <= 0)
		{
			negativeTotal += numberRead;	
			negativeNumbersCount++;
		}
		else 
		{
			positiveTotal += numberRead;
			positiveNumbersCount++;
		}
	}

	cout << "Total of positive numbers = " << positiveTotal << endl;
	cout << "Average of positive numbers = " << (double)(positiveTotal / positiveNumbersCount) << endl;
	cout << "Total of negative numbers = " << negativeTotal << endl;
	cout << "Average of negative numbers = " << (double)(negativeTotal / negativeNumbersCount) << endl;
	cout << "Total = " << positiveTotal + negativeTotal << endl;
	cout << "Total average = " << (double)(positiveTotal + negativeTotal) / NUMBERS_COUNT << endl;

	return 0;
}
