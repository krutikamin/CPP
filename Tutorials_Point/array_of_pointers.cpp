// https://www.tutorialspoint.com/cplusplus/cpp_array_of_pointers.htm

#include <iostream>

using namespace std;
const int MAX = 3;

int main(void) {
	int var[MAX] = {10, 100, 200};
	int *ptr[MAX];

	for (int i = 0; i < MAX; i++) {
		ptr[i] = &var[i]; // assign the address of integer
	}

	for (int i = 0; i < MAX; i++) {
		cout << "Value of var[" << i << "] = " << *ptr[i] << endl;
	}
	
	return 0;
}
