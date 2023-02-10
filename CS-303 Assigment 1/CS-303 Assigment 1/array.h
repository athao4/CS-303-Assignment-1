#include <iostream>
#include <array>
using namespace std;

const int SIZE = 100; // Size of the array

class Array {
private:
	// Declares an array of integers with size N
	array<int, SIZE> arr;

public:
	Array(); // Constructor for the array class
	// The following functions will explain more on
	// the cpp file.
	int searchArray(int num);
	pair<int, int> modifyArray(int index, int new_value);
	void addArray(int new_value);
	int removeArray(int index);
	void showArray();
};