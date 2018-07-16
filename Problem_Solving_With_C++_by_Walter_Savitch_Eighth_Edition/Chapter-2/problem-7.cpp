//----------------------------------------------------------------------------------------------//
//	Name -		problem-7.cpp								//
//	Description -	An employee is paid at a rate of $16.78 per hour for the first 40 hours	//
//			worked in a week. Any hours over that are paid at the overtime rate of	//
//			one-and-one-half times that. From the worker's gross pay, 6% is 	//
//			withheld for Social Security tax, 14% is withheld for federal income 	//
//			tax, and $10 per week is withheld from union dues. If the worker has	//
//			three or more dependents, then an additional $35 is withheld to cover 	//
//			the extra cost of health insurance beyond what the employer pays.	//
//				Write a program that will read in the number of hours worked in //
//			a week and the number of dependents as input and will then output the 	//
//			worker's gross pay, each withholding amount, and the net take-home pay 	//
//			for the week. For a harder version, write your program so that it 	//
//			allows the calculation to be repeated as ofter as the user wishes. If 	//
//			this is a class exercise, ask your instructor whether you should do 	//
//			this harder version.							//
//	Created -	07/15/2018								//
//	Last Modified -	07/15/2018								//
//	Errors -	None									//
//	Sample Run -										//
//----------------------------------------------------------------------------------------------//

#include <iostream>
using namespace std;

int main(void)
{
	const 	double 	PAY_RATE = 16.78;
	const 	double 	OVERTIME_RATE = 1.5;
	const	double	SS_TAX_RATE = 0.06;
	const	double 	FED_TAX_RATE = 0.14;
	const	double	STATE_TAX_RATE = 0.1;
	const 	int	CUTOFF = 40;
	//const	int	SS_TAX_RATE = 6;
	//const	int	FED_TAX_RATE = 14;
	const 	int	UNION_DUE_PER_WEEK = 10;
	const	int	ADDITIONAL_HEALTH_INSURANCE = 35;
	double	hoursWorked;
	double	grossPay;
	int	numDependents;

	cout << "Enter hours worked - ";
	cin >> hoursWorked;

	cout << "Enter number of dependents - ";
	cin >> numDependents;

	// If employee worked more than CUTOFF hours in a week
	if(hoursWorked > CUTOFF)
	{
		grossPay = PAY_RATE * CUTOFF;	
		grossPay += PAY_RATE * (hoursWorked - CUTOFF) * OVERTIME_RATE;
	}
	else // if employee worked CUTOFF or less hours in a week
	{
		grossPay = PAY_RATE * hoursWorked;
	}

	// Withhold social security tax
	grossPay -= (grossPay * SS_TAX_RATE);
	//cout << "Gross Pay after social security tax = " << grossPay << endl;

	// Withhold federal income tax
	grossPay -= (grossPay * FED_TAX_RATE);
	//cout << "Gross Pay after federal income tax = " << grossPay << endl;

	// Withhold state income tax
	grossPay -= (grossPay * STATE_TAX_RATE);
	//cout << "Gross Pay after state income tax = " << grossPay << endl;

	// Withhold union dues
	grossPay -= UNION_DUE_PER_WEEK;
	//cout << "Gross Pay after union dues = " << grossPay << endl;

	// If 3 or more dependents, withhold another ADDITIONAL_HEALTH_INSURANCE
	if(numDependents >= 3)
	{
		grossPay -= ADDITIONAL_HEALTH_INSURANCE;
		//cout << "Gross Pay after additional health insurance = " << grossPay << endl;
	}

	cout << "Worker's gross pay = $" << grossPay << endl;

	return 0;
}
