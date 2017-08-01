// https://www.tutorialspoint.com/cplusplus/cpp_strings.htm
#include <iostream>
#include <cstring>

using namespace std;

int main (void) {
	char str1[15] = "Hello";
	char str2[15] = "World";
	char str3[15];
	int len;
	
	// copy str1 into str3
	strcpy(str3, str1);
	cout << "strcpy(str3, str1) : " << str3 << endl;
	
	// concatenates str1 and str2
	strcat(str1, str2);
	cout << "strcpy(str1, str2) : " << str1 << endl;

	// total length of str1 after concatenation
	len = strlen(str1);
	cout << "strlen(str1) : " << len << endl;

	return 0;
}
