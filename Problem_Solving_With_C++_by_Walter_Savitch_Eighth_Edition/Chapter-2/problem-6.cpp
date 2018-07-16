//----------------------------------------------------------------------------------------------//
//	Name -		problem-6.cpp								//
//	Description -	Write a program that determines whether a meeting room is in violation	//
//			of fire law regulations regarding the maximum room capacity. The 	//
//			program will read in the maximum room capacity and the number of people	//
//			attending the meeting. If the nuber of people is less than or equal to	//
//			maximum room capacity, the program announces that it is leagal to hold	//
//			the meeting and tells how many additional people may legally attend.	//
//			If the number of people exceeds the maximum room capacity, the program	// 
//			announces that the meeting cannot be held as planned due to fire 	//
//			regulations. For a harder version, write your program so that it allows	//
//			the calculation to be repeated as often as the user wishes. If this is	//
//			a class exercise, ask your instructor whether you should do this harder	//
//			version.
//												//
//	Created -	07/15/2018								//
//	Last Modified -	07/15/2018								//
//	Errors -	None									//
//	Sample Run -										//
//----------------------------------------------------------------------------------------------//

#include <iostream>
using namespace std;

int main(void)
{
	int	roomCapacity;
	int	numAttendees;

	// Read in the maximum room capacity into roomCapacity
	cout << "Enter maximum room capacity - ";
	cin >> roomCapacity;
	cout << endl;

	// Read in the number of people attending the meeting into numAttendees;
	cout << "Enter number of people attending the meeting - ";
	cin >> numAttendees;
	cout << endl;

	// If the number of people is less than or equal to maximum room capacity
	if(numAttendees <= roomCapacity)
	{
		cout << "It is leagal to hold the meeting.\n" <<
			"Additional " << roomCapacity - numAttendees <<
			" people may legally attend.\n";
	}
	else // if the number of people exceeds the maximum room capacity
	{
		cout << "The meeting cannot be held as planned due to fire regulations.\n";
	}

	return 0;
}
