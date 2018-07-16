//----------------------------------------------------------------------------------------------//
//	Name -		problem-9.cpp								//
//	Description -	You have just purchased a stereo system that cost $1000 on the following//
//			credit plan: no down payment, an interest rate of 18% per year (and 	//
//			hence 1.5% per month), and monthly payments of $50. The monthly 	//
//			payment of $50 is used to pay the interest and whatever is left is used	//
//			to pay part of the remainning debt. Hence, the first month you pay 1.5%	//
//			of $1,000 in interest. That is $15 in interest. So, the remaining $35 	//
//			is deducted from your debt, which leaves you with a debt of $965.00. 	//
//			The next month you pay interest of 1.5% of $965.00, which is $14.48.	// 
//			Hence, you can deduct $35.52 (which is $50 - $14.48) from the amount	//
//			you owe. Write a program that will tell you how many months it will 	//
//			take you to pay off the loan, as well as the total amount of interest	//
//			and the size of the debt after each month. (Your final program need 	//
//			not output these values.) Use a variable to count the number of loop	//
//			iterations and hence the number of months until the debt is zero. You 	//
//			may want to use other variables as well. The last payment may be less	//
//			than $50. Do not forget the interest on the last payment. If you owe 	//
//			$50, then you monthly payment of $50 will not pay off you debt, 	//
//			although it will come close. One month's interest on $50 is only 75 	//
//			cents.									//
//	Created -	07/16/2018								//
//	Last Modified -	07/16/2018								//
//	Errors -	None									//
//	Sample Run -										//
//----------------------------------------------------------------------------------------------//

#include <iostream>
using namespace std;

int main(void)
{
	const 	double	INITIAL_COST = 1000.00;
	const	double	INTEREST_RATE_PER_MONTH = 0.015;
	const	int	MONTHLY_PAYMENT = 50;
	double	newBalance = INITIAL_COST;
	double	totalInterestAmount = 0.0;
	double	newInterestAmount;
	int	numMonths = 0;
	
	while (newBalance > 1.0)
	{
		newInterestAmount = newBalance * INTEREST_RATE_PER_MONTH;
		if (newBalance < 50.0)
		{
			newBalance -= newInterestAmount;	
		}
		else
		{
			newBalance -= (MONTHLY_PAYMENT - newInterestAmount);  
		}

		cout << "newInterestAmount = " << newInterestAmount << endl;
		cout << "newBalance = " << newBalance << endl;
		totalInterestAmount += newInterestAmount;
		numMonths++;
	}

	cout << "It will take " << numMonths << " months to get the amount less than $1.\n";
	cout << "Total interest accumulated - $" << totalInterestAmount << endl;

	return 0;
}
