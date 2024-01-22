#include <iostream>
using namespace std;

int main()
{
    // cout << "Hello World";
    int num1, num2;
    char operation;

    // **************Welcome message for the calculator***************
    cout << "Welcome to the calculator and do your calculation here" << endl;

    // **************Retrieving the numbers****************
    cout << "Enter number 1: " << endl;
    cin >> num1;
    cout << "Enter number 2: " << endl;
    cin >> num2;

    //  *******************Retrieving the operator for the calculation******************
    cout << "Enter the operator of you choice: (+,-,*,/) or you can also check the remainder after divinding two numbers using '%' operator ";
    cin >> operation;

    // ********************Main Logic for the calculator*********************
    switch (operation)
    {
    case '+':
        /* code */
        cout << "The sum of the numbers is: " << num1 + num2 << endl;
        break;

    case '-':
        cout << "The difference of the numbers is: " << num1 - num2 << endl;
        break;

    case '*':
        cout << "The multiplication of the numbers is: " << num1 * num2 << endl;
        break;

    case '/':
        cout << "The division of the numbers is: " << num1 / num2 << endl;
        break;

    case '%':
        cout << "The remainder of the division of two numbers is: " << num1 % num2 << endl;
        break;

    default:
        cout << "The entered values are invalid";
        break;
    }

    return 0;
}