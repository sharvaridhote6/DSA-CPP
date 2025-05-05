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
    cout << endl;

    
        // rupee problem
    int amount;
    cin >> amount;
    int Rs100, Rs50, Rs20, Rs1;

    switch (1)
    {
    case 1:
        Rs100 = amount / 100;
        amount = amount % 100;
        cout << "No of 100 Rupee =" << Rs100 << endl;

    case 2:
        Rs50 = amount / 50;
        amount = amount % 50;
        cout << "No of 50 Rupee =" << Rs50 << endl;

    case 3:
        Rs20 = amount / 20;
        amount = amount % 20;
        cout << "No of 20 Rupee =" << Rs20 << endl;

    case 4:
        Rs1 = amount / 1;
        amount = amount % 1;
        cout << "No of 1 Rupee =" << Rs1 << endl;
    }
}
