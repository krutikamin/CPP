//----------------------------------------------------------------------------------------------//
//	Name -		problem-3.cpp								//
//	Description -	Workers at particular company have won a 7.6% pay increase retroactive	//
//			for 6 months. Write a program that takes an employee's previous annual	//
//			alary as input, and outputs the amount of retroactive pay due the  	//
//			employee, the new annual salary, and the new monthly salary.		//
//	Created -	12/1/2016								//
//	Last Modified -	24/3/2017								//
//	Errors -	None									//
//	Sample Run -										//
//----------------------------------------------------------------------------------------------//

#include <iostream>
using namespace std;

int main(void)
{
	const	double 	payIncrease = 7.6;
	double	previous_salary;	
	double	new_salary;	
	double	temp;

	cout << "Please enter your annual salary - $";
	cin >> previous_salary;
	cout << endl;

	temp = previous_salary / 2;
	cout << "Your retroactive pay due = $" << (temp*payIncrease) / 100 << endl;;

	new_salary = previous_salary + ((previous_salary * payIncrease) / 100);

	cout << "Your new annual salary will be $" << new_salary << endl; 
	cout << "Your new monthly salary will be $" << new_salary / 12 << endl;
	
	return 0;
}
