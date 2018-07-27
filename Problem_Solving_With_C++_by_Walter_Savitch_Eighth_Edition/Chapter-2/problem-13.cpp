//----------------------------------------------------------------------------------------------//
//	Name -		problem-13.cpp								//
//	Description -	Many treadmills output the speed of the treadmill in miles per hour 	//
//			(mph) on the console, but most runners think of speed in terms of pace.	//
//			A common pace is the number of minutes and seconds per mile instead of	//
//			mph.									//
//			Write a program that starts with a quantity in mph and converts the 	//
//			quantitiy in mph and converts the quantitiy into minutes and seconds	//
//			per mile. As an example, the proper output for an input of 6.5 mph 	//
//			should be 9 minutes and 13.8 seconds per mile. If you need to convert	//
//			a double to an int, which will discard any value after the decimal	//
//			point, then you may use							//
//			intValue = static_cast<int>(dblVal);					//
//	Created -	07/25/2018								//
//	Last Modified -	07/25/2018								//
//	Errors -	None									//
//	Sample Run -										//
//----------------------------------------------------------------------------------------------//

#include <iostream>
using namespace std;

int main(void)
{
	double	mph;
	double	minutes;
	double	seconds;
	
	cout << "Enter speed in mph - ";
	cin >> mph;

	minutes = 60 / mph;
	cout << static_cast<int>(minutes);
	seconds = minutes - (static_cast<int>(minutes));
	seconds *= 60;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
	cout << "Your pace is " << static_cast<int>(minutes) << " minutes and " << seconds << " seconds.\n";

	return 0;
}
