#include <iostream>
using namespace std;

int main (void) {
	int *ptr = NULL;
	
	cout << ptr << endl;
	ptr++;
	cout << ptr << endl;
	cout << *ptr << endl;
	return 0;
}
