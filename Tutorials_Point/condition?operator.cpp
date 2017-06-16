// https://www.tutorialspoint.com/cplusplus/cpp_conditional_operator.htm

#include <iostream>
using namespace std;

int main () {
	// Local variable declaration:
	int x, y = 10;
	
	x = (y < 10) ? 30 : 40;

	cout << "Value if x : " << x << endl;
	
	return 0;
}
