#include <iostream>

using namespace std;

int main() {
    float num1, num2;
    int choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >>  num2;

    cout << "1. Addition." << endl;
    cout << "2. Subtraction." << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Sum is: " << num1 + num2;
    }
    else if (choice == 2) {
        cout << "Differance is: " << num1 - num2;
    }

    return 0;
}