//----------------------------------------------------------------------------------------------//
//	Name -		problem-5.cpp								//
//	Description -	Negotiating a consumer loan is not always straightforward. One form of	//
//			loan is the discount installment loan, which works as follows.		//
//			Suppose a loan has a face value of $1000, the interest rate is 15%, and	//
//			the duration is 18 months. The interest is computed by multiplying the  //
//			face value of $1000 by 0.15, to yield $150. That figure is then 	//
//			multiplied by the loan period of 1.5 years to yield $225 as the total	//
//			interest owed. That amount is immediately deducted from the face value,	//
//			leaving the consumer with only $775. 					//
//			Repayment is made in equal monthly installments based on the face value.//
//			So the monthly loan payment will be $1000 divided by 18, which is 	//
//			$55.56. This method of calculation may not be too bad if the consumer 	//
//			needs $775, but the calculation is abit more complicated if the consumer//
//			needs $1000.								//
//			Write a program that will take three inputs: the amount the consumer 	//
//			needs to receive, the interest rate, and the duration of the loan in 	//
//			months. The program should then calculate the face value required in 	//
//			order for the consumer to receive the amount needed. It should also 	//
//			calculate the monthly payment. Your program should allow the calulations//
//			to be repeated as often as the user wishes.				//
//	Created -	01/12/2018								//
//	Last Modified -	01/12/2018								//
//	Errors -	Incorrect output							//
//----------------------------------------------------------------------------------------------//

#include <iostream>
using namespace std;

int main(void)
{
	int 	numMonths;
	double 	amountNeeded;
	double	interestRate;
	double	interestAmount;
	double	totalInterestAmount;
	char	answer;

	do 
	{
		cout << "Amount needed - $";
		cin >> amountNeeded;
		cout << endl;

		cout << "Interest rate in percent - ";
		cin >> interestRate;
		cout << endl;

		cout << "Loan duration in months - ";
		cin >> numMonths;
		cout << endl;

		interestAmount = amountNeeded * (interestRate / 100);
		cout << "InterestAmount = $" << interestAmount << endl;
		totalInterestAmount = interestAmount + interestAmount * (numMonths / 12);
		cout << "totalInterestAmount = $" << totalInterestAmount << endl;
		amountNeeded += totalInterestAmount;
		//amountNeeded += interestAmount;

		cout << "Total = $" << amountNeeded << endl;
		cout << "Monthly payment = $" << ((amountNeeded + interestAmount) / numMonths) << endl;

		cout << "Try again? (Y/N) ";
		cin >> answer;
		cout << endl;
	} while (answer == 'Y' || answer == 'y');

	return 0;
}
