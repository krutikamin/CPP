//----------------------------------------------------------------------------------------------//
//	Name -		problem-9.cpp								//
//	Description -	Write a programme that allows the user to enter a time in seconds and 	//
//			then outputs how far an object would drop if it is in freefall for that	//
//			length of time using the following equation. Assume acceleration of 	//
//			32 feet per second.							//
//				distance = ((acceleration * time^2)) / 2			//
//	Created -	24/12/2015								//
//	Last Modified -	24/12/2015								//
//	Errors -	None									//
//	Sample Run -										//
//			Please enter the time in seconds: 2					//
//			The object would drop about 64 feet in freefall.			//
//			Press any key to continue...						//
//----------------------------------------------------------------------------------------------//

#include <iostream>
using namespace std;

int main(void)
{
	int time;

	cout << "Please enter the time in seconds: ";
	cin >> time;

	cout << "The object would drop about " << ((32 * time * time) / 2) << " feet in freefall.\n";

	cout << "Press any key to continue...";
	cin.get();
	
	return 0;
}
