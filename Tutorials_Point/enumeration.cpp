// https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm
// http://en.cppreference.com/w/cpp/language/enum
//	enum Foo { a, b, c = 10, d, e = 1, f, g = f + c };
//	a = 0, b = 1, c = 10, d = 11, e = 1, f = 2, g = 12

#include <iostream>
using namespace std;

int main() {
	enum colour { red, green, blue } temp;
	temp = blue;

	cout << "temp = " << temp << endl;

	return 0;
}
