#include <iostream>
using namespace std;

int main() {
    float num1;
    float num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the operation (*, -, /, +): ";
    cin >> operation;

    if (cin.fail()) {
        cout << "Invalid input" << endl;
    } else {
        if (operation == '+') {
            cout << "The sum of the numbers is " << num1 + num2 << endl;
        } else if (operation == '-') {
            cout << "The difference of the numbers is " << num1 - num2 << endl;
        } else if (operation == '*') {
            cout << "The product of the numbers is " << num1 * num2 << endl;
        } else if (operation == '/') {
            cout << "The quotient of the numbers is " << num1 / num2 << endl;
        } else {
            cout << "Invalid operation" << endl;
        }
    }
    return 0;
}