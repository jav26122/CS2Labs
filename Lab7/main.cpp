// Jaret Varn <jav76@uakron.edu>
// University of Akron


#include <iostream>
#include "algo.hpp"


int main()
{
	using std::cout;
	using std::endl;
	int a[] {1, 2, 3, 4, 5, 5, 4, 5, 2, 1, 7, 7, 3, 1, 2, 3, 4};
	int* first = a + 1;
	int* limit = first + 3;
	int value1 = 3;
	int value2 = 7;
	int in1 = 4;
	int in2 = 5;

	// Testing print function
	cout << "Printing the array using range: [" << first << ", " << limit << ")" << endl;
	print(first, limit);

	// Testing find function
	cout << endl << "Testing 'find' function for value " << value1 << " between [" << first << ", " << limit << ")" << endl;
	cout << *find(first, limit, value1) << endl;
	cout << "Testing 'find' function for value " << value2 << " between [" << first << ", " << limit << ")" << endl;
	cout << *find(first, limit, value2) << endl;

	// Testing in function
	cout << "Testing 'in' function for value " << in1 << " between [" << first << ", " << limit << ")" << endl;
	cout << in(first, limit, in1) << endl;
	cout << "Testing 'in' function for value " << in2 << " between [" << first << ", " << limit << ")" << endl;
	cout << in(first, limit, in2) << endl;

	// Testing count function;
	cout << "Testing 'count' function for value " << value1 << " between [" << first << ", " << limit << ")" << endl;
	cout << count(first, limit, value1) << endl;
	cout << "Testing 'count' function for value 4 between [" << first << ", " << (first + 6) << ")" << endl;
	cout << count(first, first + 6, 4) << endl;

	// Testing equal function
	cout << "Testing 'equal' function for equality between [" << first << ", " << limit << ")" << " and [" << first + 13 << ", " << first + 16 << ")" << endl;
	cout << equal(first, limit, first+13, first+16) << endl;
	cout << "Testing 'equal' function for equality between [" << first << ", " << limit << ")" << " and [" << first + 5 << ", " << first + 7 << ")" << endl;
	cout << equal(first, limit, first+5, first+8) << endl;

	// Testing minimum functions
	cout << "Testing minimum function with 5 and 3" << endl;
	cout << minimum(5, 3) << endl;
	cout << "Testing minimum function between [" << first << ", " << limit << ")" << endl;
	cout << *minimum(first, limit) << endl;

	// Testing maximum functions
	cout << "Testing maximum function with 5 and 3" << endl;
	cout << maximum(5, 3) << endl;
	cout << "Testing maximum function between [" << first << ", " << limit << ")" << endl;
	cout << *maximum(first, limit) << endl;

	// Testing compare function
	cout << "Testing compare function between [" << first << ", " << limit << ")" << " and [" << first << ", " << limit + 1 << ")" << endl;
	cout << compare(first, limit, first, limit+1) << endl;
	cout << "Testing compare function between [" << first << ", " << limit << ")" << " and [" << first - 1 << ", " << limit << ")" << endl;
	cout << compare(first, limit, first-1, limit) << endl;
	cout << "Testing compare function between [" << first << ", " << limit << ")" << " and [" << first << ", " << limit << ")" << endl;
	cout << compare(first, limit, first, limit) << endl;

	// Testing copy function
	cout << endl << "Showing range from [" << a << ", " << a + 8 << ") before copy from [" << a << ", " << a+4 << ") to [" << a+4 << ", " << a + 8 << ")" << endl;
	print(a, a+8);
	cout << endl << "Showing range from [" << a << ", " << a + 8 << ") after copy from [" << a << ", " << a+4 << ") to [" << a+4 << ", " << a + 8 << ")" << endl;
	copy(a, a+4, a+4, a+8);
	print(a, a+8);

	// Testing fill function
	cout << endl << endl << "Showing range from [" << a << ", " << a + 10 << ") before fill from [" << a << ", " << a+8 << ") with value '5' " << endl;
	print(a, a+10);
	cout << endl << "Showing range from [" << a << ", " << a + 10 << ") after fill from [" << a << ", " << a+8 << ") with value '5' " << endl;
	fill(a, a+8, 5);
	print(a, a+10);

	return 1;
}
