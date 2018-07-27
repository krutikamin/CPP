//----------------------------------------------------------------------------------------------//
//	Name -		problem-14.cpp								//
//	Description -	Write a program that plays the game of Mad Lib. Your program should	//
//			prompt the user to enter the following strings:				//
//			- The first or last name of your instructor				//
//			- Your name								//
//			- A food								//
//			- A number between 100 and 120						//
//			- An adjective								//
//			- A colour								//
//			- An animal								//
//			Anfter the strings are input, they should be substituted into the story	//
//			below and output to the console.					//
//												//
//			Dear Instructor [Instructor Name],					//
//												//
//			I am sorry that I am unable to turn in my homework at this time. First,	//
//			I ate a rotten [Food], which made me turn [Color] and extremely ill. I 	//
//			came down with a fever of [Number 100-120]. Next, my [Adjective] pet	//
//			[Animal] must have smelled the remaining of the [Food] on my homework,	//
//			because he ate it. I am currently rewriting my homework and hope you	//
//			will accept it late.							//
//												//
//			Sincerely,								//
//			[Your Name]								//
//	Created -	07/26/2018								//
//	Last Modified -	07/26/2018								//
//	Errors -	None									//
//	Sample Run -										//
//----------------------------------------------------------------------------------------------//

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int	number;
	string 	instructorName;
	string	name;
	string	food;
	string	adjective;
	string	colour;
	string	animal;

	cout << "Enter the first or last name of your instructor : ";
	cin >> instructorName;
	cout << endl;

	cout << "Enter your name : ";
	cin >> name;
	cout << endl;

	cout << "Enter food : ";
	cin >> food;
	cout << endl;

	cout << "Enter a number between 100 and 120 : ";
	cin >> number;
	cout << endl;
	
	cout << "Enter an adjective : ";
	cin >> adjective;
	cout << endl;
	
	cout << "Enter colour : ";
	cin >> colour;
	cout << endl;
	
	cout << "Enter an animal : ";
	cin >> animal;
	cout << endl << endl;
	
	cout << "Dear Instructor " << instructorName << ",\n\n"
	     << "I am sorry that I am unable to turn in my homework at this time. First,\n"
             << "I ate a rotten " << food << ", which made me turn " << colour << " and extremely ill. I\n"
	     << "came down with a fever of " << number << ". Next, my " << adjective << " pet\n"
	     << animal << " must have smelled the remaining of the " << food << " on my homework,\n"
	     << "because he ate it. I am currently rewriting my homework and hope you\n"
	     << "will accept it late.\n\n"
	     << "Sincerely,\n"
	     << name << endl;

	return 0;
}
