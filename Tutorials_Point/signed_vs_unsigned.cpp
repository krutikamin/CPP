// https://www.tutorialspoint.com/cplusplus/cpp_modifier_types.htm

#include <iostream>
using namespace std;

/* This program shows the difference between 
 * signed and unsigned integers.
*/
int main() {
	short int i;		// a signed shoet integer
	short unsigned int j;	// an unsigned short integer
	
	j = 50000;

	i = j;
	cout << i << " " << j << endl;

	return 0;
}
