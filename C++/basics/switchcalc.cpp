#include <iostream>
using namespace std;
int main()
{
    // switch case
    char ch = 1;
    switch (ch)
    {
    case 1:
        cout << "First" << endl;
        break;
    case 2:
        cout << "second" << endl;
        break;
    default:
        cout << "It is default case " << endl;
    }
    cout << endl;

    // calculator
    int a, b;
    char op;

    cout << "Enter the value of a" << endl;
    cin >> a;

    cout << "Enter the value of b" << endl;
    cin >> b;

    cout << "Enter the operation you want to perform" << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << (a + b) << endl;
        break;

    case '-':
        cout << (a - b) << endl;
        break;

    case '*':
        cout << (a * b) << endl;
        break;

    case '/':
        cout << (a / b) << endl;
        break;

    case '%':
        cout << (a / b) << endl;
        break;

    default:
        cout << "Please enter a valid operator " << endl;
    }
}
