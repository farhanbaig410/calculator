#include <iostream>
using namespace std;

int main() {

    float num1;
    float num2;

    char op;

    cout << "Enter First Number: ";
    cin >> num1;

    cout << "Enter Operator: ";
    cin >> op;

    cout << "Enter Second Number: ";
    cin >> num2;

    if (op == '+')
        cout << "Addition = " << num1 + num2;

    else if (op == '-')
        cout << "Subtraction = " << num1 - num2;

    else if (op == '*')
        cout << "Multiplication = " << num1 * num2;

    else if (op == '/')
        cout << "Division = " << num1 / num2;

    else
        cout << "Invalid Operator";

    return 0;
}