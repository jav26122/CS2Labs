// Jaret Varn <jav76@uakron.edu>
// University of Akron


#include <iostream>
#include "algo.hpp"
#include <vector>
#include <list>


int main()
{
	using std::cout;
	using std::endl;
	using std::vector;
	using std::list;

	vector<int> a = {1, 2, 3, 4, 5, 5, 4, 5, 2, 1, 7, 7, 3, 1, 2, 3, 4};
	list<int> b = {1, 2, 3, 4, 5, 5, 4, 5, 2, 1, 7, 7, 3, 1, 2, 3, 4};

	int value1 = 3;
	int value2 = 7;
	int in1 = 4;
	int in2 = 5;

	auto firstVector = a.begin();
	auto limitVector = a.end();
	auto firstList = b.begin();
	auto limitList = b.end();
	// Testing print function
	cout << "Printing the vector" << endl;
	print(firstVector, limitVector);
    cout << "Printing the list" << endl;
	print(firstList, limitList);

	// Testing find function
	cout << endl << "Testing 'find' function for value " << value1 << endl;
	cout << *find(firstVector, limitVector, value1) << endl;
	cout << "Testing 'find' function for value " << value2 << endl;
	cout << *find(firstVector, limitVector, value2) << endl;

    cout << endl << "Testing 'find' function for value " << value1 << endl;
	cout << *find(firstVector, limitVector, value1) << endl;
	cout << "Testing 'find' function for value " << value2 << endl;
	cout << *find(firstVector, limitVector, value2) << endl;

	// Testing in function
	cout << "Testing 'in' function for value " << in1 << endl;
	cout << in(firstVector, limitVector, in1) << endl;
	cout << "Testing 'in' function for value " << in2 <<  endl;
	cout << in(firstVector, limitVector, in2) << endl;

	// Testing count function;
	cout << "Testing 'count' function for value " << value1 << endl;
	cout << count(firstVector, limitVector, value1) << endl;
	cout << "Testing 'count' function for value 4 " << endl;
	cout << count(firstVector, firstVector + 6, 4) << endl;

	// Testing equal function
	cout << "Testing 'equal' function for " <<  endl;
	cout << equal(firstVector, limitVector, firstVector+13, firstVector+16) << endl;
	cout << "Testing 'equal' function for equality between [" << *firstVector << ", " << *limitVector << ")" << " and [" << *(firstVector + 5) << ", " << *(firstVector + 7) << ")" << endl;
	cout << equal(firstVector, limitVector, firstVector+5, firstVector+8) << endl;

	// Testing minimum functions
	cout << "Testing minimum function with 5 and 3" << endl;
	cout << minimum(5, 3) << endl;
	cout << "Testing minimum function between [" << *firstVector << ", " << *limitVector << ")" << endl;
	cout << *minimum(firstVector, limitVector) << endl;

	// Testing maximum functions
	cout << "Testing maximum function with 5 and 3" << endl;
	cout << maximum(5, 3) << endl;
	cout << "Testing maximum function between [" << *firstVector << ", " << *limitVector << ")" << endl;
	cout << *maximum(firstVector, limitVector) << endl;

	// Testing compare function
	cout << "Testing compare function between [" << *firstVector << ", " << *limitVector << ")" << " and [" << *firstVector << ", " << *(limitVector + 1) << ")" << endl;
	cout << compare(firstVector, limitVector, firstVector, limitVector+1) << endl;
	cout << "Testing compare function between [" << *firstVector << ", " << *limitVector << ")" << " and [" << *(firstVector - 1) << ", " << *(limitVector) << ")" << endl;
	cout << compare(firstVector, limitVector, firstVector-1, limitVector) << endl;
	cout << "Testing compare function between [" << *firstVector << ", " << *limitVector << ")" << " and [" << *firstVector << ", " << *limitVector << ")" << endl;
	cout << compare(firstVector, limitVector, firstVector, limitVector) << endl;




	return 1;
}
