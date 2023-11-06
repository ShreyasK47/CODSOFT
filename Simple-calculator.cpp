#include <iostream>
using namespace std;

int main() {
    int num1, num2, result;
    char op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;
    switch(op) {
        case '+': 
            result = num1 + num2;
            cout << "Sum = " << result << endl;
            break;
        case '-': 
            result = num1 - num2;
            cout << "Difference = " << result << endl;
            break;
        case '*': 
            result = num1 * num2;
            cout << "Product = " << result << endl;
            break;
        case '/': 
            if(num2 != 0) {
                result = num1 / num2;
                cout << "Quotient = " << result << endl;
            } else {
                cout << "Division by zero not possible." << endl;
            }
            break;
        default: 
            cout << "Invalid Operator. Please try again." << endl;
    }

    return 0;
}
