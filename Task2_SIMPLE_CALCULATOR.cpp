#include <iostream>
using namespace std;

int main() {
    char operation;
    float num1, num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch(operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;

        case '/':
            if(num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero." << endl;
            break;

        default:
            cout << "Error! Operator is not correct" << endl;
            break;
    }

    return 0;
}


// Include the I/O Library: We include the <iostream> library to handle input and output operations.

// Declare Variables: We declare operation to store the user's choice of arithmetic operation and num1, num2 for the numbers to be operated on.

// Get User Input:

// The user is prompted to enter an arithmetic operator.

// The user is then prompted to enter two numbers.

// Switch Statement:

// The switch statement is used to perform different operations based on the user's input.

// For each case (+, -, *, /), the corresponding arithmetic operation is performed and the result is displayed.

// If the user chooses division, an additional check ensures that division by zero does not occur.

// Error Handling:

// If the user inputs an invalid operator, an error message is displayed.

// This basic calculator covers the fundamental arithmetic operations and handles basic error checking.