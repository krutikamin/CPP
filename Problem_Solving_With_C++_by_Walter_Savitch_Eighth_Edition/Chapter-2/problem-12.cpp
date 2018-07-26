//----------------------------------------------------------------------------------------------//
//	Name -		problem-12.cpp								//
//	Description -	The Babylonian algorithm to compute the square root of a number n is as	//
//			follows:								//
//			1. Make a guess at the answer (you can pick n/2 as your initial guess)	//
//			2. Compute r = n / guess						//
//			3. Set guess = (guess + r) / 2						//
//			4. Go back to step 2 for as many iterations as necessary. The more that	//
//			   steps 2 and 3 are repeated, the closest guess will become to the	//
//			   square root of n.							//
//			Write a program that inputs an integer for n, iterates through the	//
//			Babylonian algorithm until guess is within 1% of the previous guess,	//
//			and outputs the answer as a double.					//
//	Created -	07/17/2018								//
//	Last Modified -	07/25/2018								//
//	Errors -	None									//
//	Sample Run -										//
//----------------------------------------------------------------------------------------------//

#include <iostream>
using namespace std;

int main(void)
{
	double	oldGuess;
	double	newGuess;
	double	r;
	int	n;

	cout << "Enter an integer - ";
	cin >> n;

	oldGuess = n/2;

	while(1)
	{
		r = n/oldGuess;
		newGuess = (oldGuess + r) / 2;
		//cout << "oldGuess = " << oldGuess << endl;
		//cout << "newGuess = " << newGuess << endl;

		if((((newGuess - oldGuess) / ((newGuess + oldGuess) / 2)) * 100) < 1)
		{
			cout << newGuess << endl;
			break;
		}
		else
		{
			oldGuess = newGuess;
		}
	}
	
	return 0;
}
