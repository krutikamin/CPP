//----------------------------------------------------------------------------------------------//
//	Name -			problem-5.cpp																//
//	Description -	Write a c++ programme that reads in two integers and then outputs both		//
//					their sum and their product.												//
//	Created -		23/12/2015																	//
//	Last Modified -	23/12/2015																	//
//	Errors -		None																		//
//----------------------------------------------------------------------------------------------//

#include <iostream>
using namespace std;

int main(void) 
{
	int		integerOne, integerTwo;

	cout << "Please enter the first integer : ";
	cin >> integerOne;

	cout << "Please enter the second integer: ";
	cin >> integerTwo;

	cout << "----------------------------------------------------------\n";
	cout << "The sum\t\t" << "The product\n";
	cout << (integerOne + integerTwo) << "\t\t" << (integerOne*integerTwo) << endl;

	cout << "This is the end of the program.\n";
	cout << "Press any key to continue...";
	cin.get();
	getchar();
	
	return 0;
}