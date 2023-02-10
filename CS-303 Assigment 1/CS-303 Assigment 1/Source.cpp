// A Chao Thao
// CS-303 Assignment 1
// 02/10/2023

#include "array.h"

int main() {
    try {
        Array arr; // Create an array from the class
        int num, index, new_value;

        arr.showArray(); // Show the original array values
        cout << endl;

        cout << "Enter a number to search: ";
        cin >> num;
        // Call function to find the index of the enter value
        int result = arr.searchArray(num); 

        if (result == -1) {
            // Display if insert value not found
            cout << num << " not found in the array" << endl; 
        }
        else {
            // Display the index if insert value is found
            cout << num << " found at index " << result << endl;
        }

        cout << "\nEnter an index to modify: ";
        cin >> index;
        cout << "Enter a new value: ";
        cin >> new_value;

        // Call function to replace old value to new value
        pair<int, int> modify_result = arr.modifyArray(index, new_value);
        cout << "old value: " << modify_result.first
            << ", new value: " << modify_result.second << endl << endl;

        arr.showArray(); // Display array values after modifying value
        cout << endl;

        cout << "Enter a new value to add: ";
        cin >> new_value;
        arr.addArray(new_value); // Call function to add new integer to the array
        cout << "Add value: " << new_value << endl << endl;

        arr.showArray(); // Display array values after adding new integer
        cout << endl;

        cout << "Enter an index to remove: ";
        cin >> index;
        int remove_result = arr.removeArray(index); // Call function to remove a value 
        cout << "Removed value: " << remove_result << endl << endl;

        arr.showArray(); // Display array values ofter remove an integer and replace it with 0
        cout << endl;
    }
    catch (const exception& e) {
        // Display error message if the user input is not valid
        cerr << e.what() << endl;
        return 1;
    }

    return 0;
}
