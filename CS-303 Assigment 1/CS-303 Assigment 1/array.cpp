#include "array.h"
#include <fstream>
#include <stdexcept>

// Constructor
Array::Array() {
    // Open the integer file
    ifstream file("integer.txt");
    if (!file.is_open()) {
        throw runtime_error("Error opening file");
    }
    // Loop through the file and put the values into the array
    for (int i = 0; i < SIZE; i++) {
        file >> arr[i];
    }

    file.close();
}

// Show the array to the user
void Array::showArray() {
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
        // Display the array in 10 lines instead of 1 long line
        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }
}

// Check if a certain integer exists in the array 
// if the number is present return the index where the number is present
int Array::searchArray(int num) {
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == num) {
            return i;
        }
    }

    return -1;
}

// Modify the value of an integer when called with the index of the integer in the array
// Return the new value and old value back to the user
pair<int, int> Array::modifyArray(int index, int new_value) {
    if (index < 0 || index >= SIZE) {
        throw out_of_range("Index out of range");
    }

    int old_value = arr[index];
    arr[index] = new_value;

    return make_pair(old_value, new_value);
}

// Adds a new integer to the end of the array
void Array::addArray(int new_value) {
    if (SIZE == 0) {
        throw runtime_error("Array is full");
    }

    arr[SIZE - 1] = new_value;
}

// Intakes an index of an array and replaces the value 
// with either 0 or removes the integer altogether
int Array::removeArray(int index) {
    if (index < 0 || index >= SIZE) {
        throw out_of_range("Index out of range");
    }

    int removed_value = arr[index];
    arr[index] = 0;

    return removed_value;
}