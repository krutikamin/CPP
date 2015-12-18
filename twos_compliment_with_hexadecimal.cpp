// ============================================================================
// File: Extra.cpp
// ============================================================================
// Student:    Krutik Amin 
// Date:       02/06/2014
// Class:      CSCI 123 ("Intro to Programming Using C++")
// Instructor: Mr. Ding
// Program:    Extra credit: Twos_Complement_with_Hexadecimal
//
// Description:
//  This program calculates the twos complement of given hexadecimal value
//
// Sample output:
//  Please Enter 4-digit Hexadecimal integer (e.g., A1B2): A0BC
//	Two's Complement of Hex A0BC is 5F44
//	Try again? (y/n) y
//
// ============================================================================


#include <iostream>
using namespace std;

// ============================================================================
// Function:	TwosComplement
// Description:	This function converts a Hexadecimal to its Two's Complement
//
// Parameter:   s [IN] - a C-string with a 4-digit Hexadecimal received
//              s2 [out] - a C-string with a 4-digit of s two's complement
// Return:      None
// ============================================================================
void TwosComplement(char* s, char* s2);

// ============================================================================
// Function:	ToUpper
// Description:	This function converts a Hexadecimal to its upper letters
//
// Parameter:   charStringPtr [IN] - a C-string with a 4-digit Hexadecimal received
// Return:      None
// ============================================================================
void ToUpper(char *charStringPtr);


const int HEX_LENGTH = 5;


int main()
{
	char ans;
	static char hex[HEX_LENGTH];
	static char twosComplement[HEX_LENGTH];

	do {
		cout << "Please Enter 4-digit Hexadecimal integer (e.g., A1B2): ";
		cin >> hex;

		ToUpper(hex);
		TwosComplement(hex, twosComplement);

		cout << "Two's Complement of Hex " << hex << " is " << twosComplement;
		cout << "\nTry again? (y/n) ";
		cin >> ans;
		cout << endl;
	} while(ans != 'n');
}


void ToUpper(char *charStringPtr)
{
	for (int index = 0 ; index < strlen(charStringPtr); ++index)
	{
		charStringPtr[index] = toupper(charStringPtr[index]);
	}

	return;
}


void TwosComplement(char* s, char* s2)
{
	int stringLength = strlen(s);
	int hexInteger;

	s2[stringLength + 1] = NULL;

	for (int index = 1 ; index <= strlen(s); ++index)
	{
		if(((s[stringLength - index] >= '0') && (s[stringLength - index] <= '9')) ||
			((s[stringLength - index] >= 'A') && (s[stringLength - index] <= 'F')))
		{
			hexInteger = s[stringLength - index] - '0';
			if(index == 1)
			{
				s2[stringLength - index] = (char)(~hexInteger + 72);
			}
			else
			{
				s2[stringLength - index] = (char)(~hexInteger + 71);
			}
		}
		else
		{
			s2 = "error";
			break;
		}
	}

	return;
}