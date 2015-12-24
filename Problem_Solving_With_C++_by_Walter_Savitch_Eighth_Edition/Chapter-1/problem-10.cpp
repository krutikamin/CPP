//----------------------------------------------------------------------------------------------//
//	Name -		problem-10.cpp								//
//	Description -	Write a programme that inputs a character from the keyboard and then 	//
//			outputs a large block letter "C" composed of that character.		//
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
	char myChar;

	cout << "Please enter the character to display: ";
	cin >> myChar;
	cout << "----------------------------------------------\n";
	cout << "   " << myChar << " " << myChar << " " << myChar << endl;
	cout << "  " << myChar << "     " << myChar << endl;
	cout << " " << myChar << endl;
	cout << " " << myChar << endl;
	cout << " " << myChar << endl;
	cout << " " << myChar << endl;
	cout << " " << myChar << endl;
	cout << "  " << myChar << "     " << myChar << endl;
	cout << "   " << myChar << " " << myChar << " " << myChar << endl ;
	cout << "----------------------------------------------\n";

	cout << "Press any key to continue...";
	cin.get();

	return 0;
}
