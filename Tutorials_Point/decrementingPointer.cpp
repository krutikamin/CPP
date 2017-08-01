// https://www.tutorialspoint.com/cplusplus/cpp_pointer_arithmatic.htm

#include <iostream>

using namespace std;
const int MAX = 3;

int main(void) {
	int var[MAX] = {10, 100, 200};
	int *ptr;

	// let us have address of the last element in pointer.
	ptr = &var[MAX-1];

	for(int i = MAX; i > 0; i--) {
		cout << "Address of var[" << i << "] = " << ptr << endl;
		cout << "Value of var[" << i << "] = " << *ptr << endl;

		// point to the previous location
		ptr--;
	}

	return 0;
}
