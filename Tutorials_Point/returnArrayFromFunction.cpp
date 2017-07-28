//https://www.tutorialspoint.com/cplusplus/cpp_return_arrays_from_functions.htm

#include <iostream>
#include <ctime>

using namespace std;

// function to generate and return random numbers.
int *getRandom() {
	static int r[10];

	// set the seed
	static srand ((unsigned)time(NULL));

	for (int i = 0; i < 10; i++) {
		r[i] = rand();
		cout << r[i] << endl;
	}

	return r;
}

// main function to call above defined function.
int main (void) {
	// a pointer to an int.
	int *p;

	p = getRandom();

	for (int i = 0; i < 10; i++) {
		cout << "*(p + " << i << ") : ";
		cout << *(p + 1) << endl;
	}

	return 0;
}
