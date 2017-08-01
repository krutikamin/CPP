// https://www.tutorialspoint.com/cplusplus/cpp_passing_pointers_to_functions.htm

#include <iostream>

using namespace std;

void getSeconds(unsigned long *par);

int main(void) {
	unsigned long sec;

	getSeconds(&sec);

	//print the actual value
	cout << "Number of seconds : " << sec << endl;

	return 0;
}

void getSeconds(unsigned long *par) {
	// get the current number of seconds
	*par = time(NULL);
	return;
}
