#include <iostream>
using namespace std;

int main (void) {
	// Local variable declaration:
	int a = 10;

	// do loop execution
	do {
		cout << "value of a : " << a << endl;
		a = a + 1;

		if (a > 15) {
			// terminate the loop
			break;
		}	
	} while (a < 20);

	return 0;
}
