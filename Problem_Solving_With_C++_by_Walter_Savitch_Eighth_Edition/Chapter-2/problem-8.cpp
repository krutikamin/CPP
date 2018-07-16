//----------------------------------------------------------------------------------------------//
//	Name -		problem-8.cpp								//
//	Description -	It is difficult to make budget that spans several years, because prices	//
//			are not stable. If your company needs 200 pencils per year, you cannot 	//
//			simply use this year's price as the cost of pencils 2 years from now. 	//
//			Because of inflation the cost is likely to be higher than it is today.	//
//				Write a program to gauge the expected cost of an item in a 	//
//			specified number of years. The program asks for the cost of the item, 	//
//			the number of years from now that the item will be purchased, and the 	//
//			rate of inflation. The program then outputs the estimated cost of the 	//
//			item after the specified period. Have the user enter the inflation rate //
//			as a percentage, like 5.6 (percent). Your program should then convert 	//
//			the percent to a fraction, like 0.056, and should use a loop to 	//
//			estimate the proce adjusted for inflation. (HINT: This is similar to 	//
//			computing interest on a charge card accout, which was discussed in this //
//			chapter.)								//
//	Created -	07/16/2018								//
//	Last Modified -	07/16/2018								//
//	Errors -	None									//
//	Sample Run -										//
//----------------------------------------------------------------------------------------------//

#include <iostream>
using namespace std;

int main(void)
{
	double	itemCost;
	double	inflationRate;
	int	numYears;

	cout << "Enter cost of item - $";
	cin >> itemCost;

	cout << "Enter number of years from now that the item will be puchased - ";
	cin >> numYears;

	cout << "Enter inflation rate (as a percentage) - ";
	cin >> inflationRate;

	while (numYears--)
	{
		itemCost += (itemCost * (inflationRate / 100));
	}

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "Estimated item cost after " << numYears << " years = $" << itemCost << endl;

	return 0;
}
