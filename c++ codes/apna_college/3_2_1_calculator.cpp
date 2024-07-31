#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char op;//operator character quantity
    double num1, num2, result;

    cout << "Enter operator (+, -, *, /, ^): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero" << endl;
            }
            break;
        case '^':
            result = pow(num1, num2);
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
            break;
    }

    return 0;
}
