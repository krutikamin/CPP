// https://www.tutorialspoint.com/cplusplus/cpp_variable_scope.htm

#include <iostream>
using namespace std;

// Global variable declaration:
int g = 20;

int main () {
	// Local variable declaration:
	int g = 10;

	cout << g << endl;

	return 0;
}
