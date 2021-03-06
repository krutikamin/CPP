//----------------------------------------------------------------------------------------------//
//	Name -		problem-15.cpp								//
//	Description -	Sound travels through air as a result of collisions between the 	//
//			molecules in the air. The temperature of the air affects the speed of 	//
//			the molecules, which in turn affects the speed of sound. The velocity	//
//			of sound in dry air can be approximated by the formula:			//
//			velocity ~= 331.3 + 0.61 x Tc						//
//			where Tc is the temperature of the air in degree Celcius and the 	//
//			velocity is in metre/second.						//
//			Write a program the allows the user to input a starting and an ending	//
//			temperature. Within this temperature range, the program should output 	//
//			the temperature and the corresponding velocity in 1 degree increments.	//
//			For example, if the user entered 0 as the start temperature and 2 as 	//
//			the end temperature, then the program should output			//
//			At 0 degrees Celsius the velocity of sound is 331.3 m/s			//
//			At 1 degrees Celsius the velocity of sound is 331.9 m/s			//
//			At 2 degrees Celsius the velocity of sound is 332.5 m/s			//
//	Created -	07/26/2018								//
//	Last Modified -	07/26/2018								//
//	Errors -	None									//
//	Sample Run -										//
//----------------------------------------------------------------------------------------------//

#include <iostream>
using namespace std;

int main(void)
{
	int	startingTemperature;
	int	endingTemperature;

	cout << "Enter starting temperature of the air in Celcius : ";
	cin >> startingTemperature;

	cout << "Enter ending temperature of the air in Celcius : ";
	cin >> endingTemperature;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
	while (startingTemperature <= endingTemperature)
	{
		cout << "At " << startingTemperature << " degrees Celcius the velocity of sound "
		     << "is " << 331.3 + 0.61 * startingTemperature << " m/s" << endl;
		startingTemperature++;
	}

	return 0;
}
