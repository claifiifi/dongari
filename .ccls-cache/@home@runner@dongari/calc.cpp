#include <iostream>

using namespace std;

int main() {
    char operation;
    double operand1, operand2, result;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two operands: ";
    cin >> operand1 >> operand2;

    switch (operation) {
        case '+':
            result = operand1 + operand2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = operand1 - operand2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = operand1 * operand2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operation." << endl;
            break;
    }

    return 0;
}
