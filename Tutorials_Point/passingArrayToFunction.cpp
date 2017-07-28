//https://www.tutorialspoint.com/cplusplus/cpp_passing_arrays_to_functions.htm
#include <iostream>
using namespace std;

double getAverage (int arr[], int size);
/* Also defined by -
 * double getAverage (int *arr, int size);
 * double getAverage (int arr[5], int size);
*/

int main (void) {
	// an int array with 5 elements.
	int balance[5] = {1000, 2, 3, 17, 50};
	double avg;

	// pass pointer to the array as an argument.
	avg = getAverage (balance, 5);

	// output of the returned value
	cout << "Average value is : " << avg << endl;

	return 0;
}

double getAverage (int arr[], int size) {
	int i, sum = 0;
	double avg;

	for (i = 0; i < size; i++) {
		sum += arr[i];
	}
	
	avg = double(sum) / size;

	return avg;
}
