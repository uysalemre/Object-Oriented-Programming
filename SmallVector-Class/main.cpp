/*
@AUTHOR : EMRE UYSAL
@PERSONAL_WEBSITE: uysalem16_itu2016.pythonanywhere.com
@COPYRIGHT: YOU CAN COPY AND USE THIS CODE WITHOUT PERMISSION.
*/
#include<iostream>
#include"SmallVector.h"

using namespace std;

void printSmallVector(const char* const message, const SmallVector& in_vector) {
	std::cout << message << ": ";
	for (int i = 0; i < in_vector.getSize(); i++)
	{
		std::cout << in_vector[i] << " ";
	}
	std::cout << std::endl<<endl;
}


int main() {
	int temp[35];
	for (int i = 0; i < 35; i++) {
		temp[i] = i;
	}
	SmallVector test(temp, 10);  // Creating SmallVector with 10 elements
	printSmallVector("CREATED A TEST VECTOR WITH 10 ELEMENT ", test);
	SmallVector test2(temp, 35);  // Creating SmallVector with 35 elements
	printSmallVector("CREATED A TEST2 VECTOR WITH 35 ELEMENT ", test2);
	// print test in reverse order
	printSmallVector("PRINT TEST VECTOR IN REVERSE ", test.reverse());
	SmallVector test3; // Empty SmallVector
	printSmallVector("CREATED A TEST3 VECTOR WITHOUT ELEMENT ", test3);
	test3 = test2 + test; // Concatenate two SmallVectors
	printSmallVector("TEST2+TEST3 RESULT ", test3);
	SmallVector test4(test); // Copy SmallVector
	printSmallVector("COPY TEST INTO TEST4: ", test4);
	SmallVector test5(temp, 2);
	printSmallVector("CREATED A TEST5 VECTOR WITH 2 ELEMENT ", test5);
	test5 = test5 * 5; // Replicate elements
	printSmallVector("REPLICATED TEST5 5 TIMES ", test5);
	test5.push_back(12); // Add 12 at the end
	printSmallVector("AFTER PUSH 12 OP TEST5 ", test5);
	int last_element=test5.pop_back();
	cout << "AFTER POP OP ELEMENT: " << last_element<<" REMOVED."<<endl;
	printSmallVector("AFTER REMOVE TEST5  ", test5);
	std::cout << "TEST5 IN REVERSE ORDER ";
	for (int i = 1; i < test5.getSize() + 1; i++)
	{
		// Testing negative numbers as indices
		std::cout << test5[-i] << " ";
	}
	cout << endl;
	system("PAUSE");
	return 0;
}
