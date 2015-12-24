//----------------------------------------------------------------------------------------------//
//	Name -		problem-7.cpp								//
//	Description -	Write a c++ programme that prints out "C S !" in large block letters	// 
//			inside a border of *s followed by two lines then the message Computer	//
//			Computer Science is Cool Stuff						//
//	Created -	23/12/2015								//
//	Last Modified -	23/12/2015								//
//	Errors -	None									//
//----------------------------------------------------------------------------------------------//

#include <iostream>
using namespace std;

int main(void) 
{
	cout << "*****************************************************\n\n";
	cout << "       C C C           S S S S       !!\n";
	cout << "      C      C        S        S     !!\n";
	cout << "     C               S               !!\n";
	cout << "    C                 S              !!\n";
	cout << "    C                  S S S S       !!\n";
	cout << "    C                          S     !!\n";
	cout << "     C                          S    !!\n";
	cout << "      C      C        S        S       \n";
	cout << "       C C C            S S S S      00\n\n";
	cout << "*****************************************************\n\n";
	cout << "   Computer Science is Cool Stuff!!!\n\n";
	
	cout << "Press any key to continue...";
	cin.get();
	
	return 0;
}
