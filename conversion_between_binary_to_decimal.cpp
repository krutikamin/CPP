// ============================================================================
// File: HW01.cpp
// ============================================================================
// Student:    Krutik Amin 
// Date:       02/04/2014
// Class:      CSCI 241 ("Computer Organization and Assembly Language Programming")
// Instructor: Mr. Ding
// Program:    HW01: This program converts binary number to decimal and
//					 decimal number to binary.
//
// Description:
//  This program asks user to enter either binary or decimal number and displays
//	binary number to decimal and decimal number to binary.
//
// ============================================================================


#include <iostream>
using namespace std;

// ============================================================================
// Function:	DisplayMenu
// Description:	This function display 3 choices on the screen to choose from
// Parameter:   NONE
// Return:      An integer value
// ============================================================================
int DisplayMenu();

// ============================================================================
// Function:	BinToDec
// Description:	This function converts an 8-bit binary integer to its decimal
// Parameter:   s [IN] -- a C-string with 8-bit binary digits received
// Return:      A decimal integer value calculated from s
// ============================================================================
int BinToDec(char* s);

// ============================================================================
// Function:	DecToBin
// Description:	This function converts a decimal integer to its binary bits
// Parameter:   n [IN] -- a decimal integer received, less than 256
// Return:      A C-string with 8-bit binary digits calculated from n
// ============================================================================
char* DecToBin(int n);

const int BINARY_LENGTH = 8;

int main()
{
	int userChoice = 0;
	
	while(userChoice >= 0)
	{
		int decimalValue;
		char binaryString[BINARY_LENGTH + 1];
		char* binStrPtr;

		userChoice = DisplayMenu();

		switch(userChoice)
		{
		case 1:
			cout << "Please Enter 8-bit binary digits (e.g., 11110000): ";
			cin >> binaryString;
			decimalValue = BinToDec(binaryString);
			cout << "The decimal integer of " << binaryString << "b is " << decimalValue << "d\n";
			break;

		case 2:
			cout << "Please Enter a decimal integer less than 256: ";
			cin >> decimalValue;
			binStrPtr = DecToBin(decimalValue);			
			cout << "The binary of " << decimalValue << "d is " << binStrPtr<< "b\n";
			break;

		case 3:
			userChoice = -1;
			cout << "bye.\n";
			break;

		default:
			cout << "Not a valid value. Try again.\n";
			break;
		}
	}

	system("pause");
	return 0;
}


int DisplayMenu()
{
	int choice;

	cout << "\n>>> Please select the conversion type:\n"
			"1. Binary to Decimal\n"
			"2. Decimal to Binary\n"
			"3. Exit\n"
			"---------------------------------------\n"
			"Enter your choice: ";
	cin >> choice;

	return choice;
}



int BinToDec(char* s)
{
	int decimalValue = 0;

	for(int index = 0; index < BINARY_LENGTH; index++)
	{
		int currentDecimal = s[index] - '0';
		
		decimalValue *= 2;
		decimalValue += currentDecimal;
	}

	return decimalValue;
}



char* DecToBin(int n)
{
	static char binaryString[BINARY_LENGTH + 1];
	int strLen = BINARY_LENGTH;
	
	binaryString[BINARY_LENGTH] = '\0';

	for(int index = 0; index < strLen; index++)
	{
		binaryString[index] = '0';
	}

	while(n > 0)
	{
		int remainder = n % 2;
		binaryString[--strLen] = remainder + 48;
		n /= 2;
	}
	
	return binaryString;
}