#include <iostream>
using namespace std;

int main (void) {
	int i, j;

	for (i = 2; i < 100; i++) {
		for (j = 2; j <= (i/j); j++)
			if (!(i % j)) break; // if factor found, not prime
			if (j > (i / j)) cout << i << " is a prime.\n";
	}
	
	return 0;
}
