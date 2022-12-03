#include <iostream>

using namespace std;

int main() {
	float num1, num2;
	string choice;
	
	while (true) {
		// Get input from user.
    	cout << "Enter first number: ";  
	    cin >> num1;
	    cout << "Enter second number: ";
	    cin >> num2;

		// Print the menu.
	    cout << " --- [Calculator] --- " << endl; 
	    cout << "1. Addition." << endl;
	    cout << "2. Subtraction." << endl;
	    cout << "3. Multiplication." << endl;
	    cout << "4. Division." << endl;
	    cout << "5. Exit." << endl;

		// Get user's choice.
	    cout << "Please enter your choice: ";
	    cin >> choice;

		// Perform operations based on choice.
	    if (choice == "1") {
	    	cout << "Sum of " << num1 << " and " << num2 << " is: " << num1 + num2 << endl;
	    }
		else if (choice == "2") {
	    	cout << "Difference of " << num1 << " and " << num2 << " is: " << num1 - num2 << endl;
		}
		else if (choice == "3") {
			cout << "Product of " << num1 << " and " << num2 << " is: " << num1 * num2 << endl;
		}
		else if (choice == "4" ) {
			cout << "Division of " << num1 << " and " << num2 << " is: " << num1 / num2 << endl;
		}
		else if (choice == "5") {
			break;
		}
		else {
			cout << "Invalid choice." << endl;
		}

		cout << endl;
	}
}
