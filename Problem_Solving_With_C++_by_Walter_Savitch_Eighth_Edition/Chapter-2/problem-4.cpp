//----------------------------------------------------------------------------------------------//
//	Name -		problem-4.cpp								//
//	Description -	Workers at particular company have won a 7.6% pay increase retroactive	//
//			for 6 months. Write a program that takes an employee's previous annual	//
//			alary as input, and outputs the amount of retroactive pay due the  	//
//			employee, the new annual salary, and the new monthly salary.		//
//			Modify the program so that it calculates the retroactive salary for a 	//
//			worker for any number of months, instead of just 6 months. The number	//
//			of months is entered by the user.					//
//	Created -	01/12/2018								//
//	Last Modified -	01/12/2018								//
//	Errors -	None									//
//	Sample Run -										//
//----------------------------------------------------------------------------------------------//

#include <iostream>
using namespace std;

int main(void)
{
	char	answer;
	const	double 	payIncrease = 7.6;
	double	previous_salary;	
	double	new_salary;	
	double	temp;
	int	numMonths;

	do
	{
		cout << "Please enter your annual salary - $";
		cin >> previous_salary;
		cout << endl;
		cout << "Please enter the number of months - ";
		cin >> numMonths;
		
		temp = (previous_salary * numMonths) / 12; // Get the salary for numMonths
		// $7.6 per $100, therefore how much pay increase per previous_salary?
		cout << "Your retroactive pay due = $" << (temp*payIncrease) / 100 << endl;;

		new_salary = previous_salary + ((previous_salary * payIncrease) / 100);

		cout << "Your new annual salary will be $" << new_salary << endl; 
		cout << "Your new monthly salary will be $" << new_salary / 12 << endl;

		cout << "Try again? (Y/N) ";
		cin >> answer;
		cout << endl;
	} while (answer == 'Y' || answer == 'y');
	
	return 0;
}
