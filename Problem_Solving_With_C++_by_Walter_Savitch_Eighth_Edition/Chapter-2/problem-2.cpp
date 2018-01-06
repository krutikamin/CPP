//----------------------------------------------------------------------------------------------//
//	Name -		problem-2.cpp								//
//	Description -	A government research lab has concluded that an artificial sweetener 	//
//			commonly used in diet soda pop will cause death in laboratory mice.	//
//			A friend of yours is desperate to lose weight but cannot give up soda	//
//			pop. Your friend wants to know how much diet soda pop it is possible	//
//			to drink without dying as a result. Write a program to supply the 	//
//			answer.									//
//			The input to the program is the amount of artificial sweetener needed	//
//			to kill a mouse, and the weight of the dieter. To ensure the safety of	//
//			your friend, be sure the program requests the weight at which the 	// 
//			dieter will stop dieting, rather than the dieter's current weight.	//
//			Assume that diet soda contains 1/10th of 1% artificial sweetener. Use	//
//			a variable declaration with the modifier "const" to give a name to this	//
//			fraction. You may want to express the percent as the "double" value	//
//			0.001. Your program should allow the calculation to be repeated as 	//
// 			often as the user wishes.						//
//	Created -	01/05/2018								//
//	Last Modified -	01/05/2018								//
//	Errors -	None									//
//	Sample Run -	Just run and see.							//
//----------------------------------------------------------------------------------------------//

#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
	char	answer;
	const	double	DEATH = 0.001;
	double	weightOfSweetenerToKillMouse;
	double	weightOfSweetenerToKillPerson;
	double	mouseWeight;
	double 	targetWeight;
	double	weightOfSoda;

	cout << "Please enter the weight of the mouse in grams - ";
	cin >> mouseWeight;
	cout << endl;

	cout << "Please enter the amount of artificial sweetener needed to kill the\n"
 	     << "mouse in grams - ";
	cin >> weightOfSweetenerToKillMouse;
	cout << endl;

	do
	{
		cout << "Please enter the targeted weight to stop dieting in kg - ";
		cin >> targetWeight;
		cout << endl;
		targetWeight *= 1000;	// Convert the weight to grams
		weightOfSweetenerToKillPerson = (targetWeight * weightOfSweetenerToKillMouse) / mouseWeight;
		weightOfSoda = weightOfSweetenerToKillPerson * DEATH;

		cout << "\nAmount of soda in grams is - " << weightOfSoda << " grams\n"
		     << "and in kilograms is - " << weightOfSoda / 1000 << " kgs\n";

		cout << "Calculate again(Y/N)?\n";
		cin >> answer;
	} while(answer == 'Y' || answer == 'y');

	return 0;
}
