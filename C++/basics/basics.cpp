#include <iostream>
using namespace std;

int main()
{

    cout << "Hello World!" << endl;

    int n;
    cin >> n;
    cout << "answer is " << n << endl;

    int a = 4;
    int f = 3;
    bool first = (a <= f);
    cout << first << endl;

    int b = 5;
    cout << a << endl;
    char c = 'v';
    cout << c << endl;
    int size = sizeof(n);
    cout << size << endl;

    // take a number and print days acc to that number
    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "wednesday" << endl;
        break;
    case 4:
        cout << "thursday" << endl;
        break;
    case 5:
        cout << "friday" << endl;
        break;
    case 6:
        cout << "saturday" << endl;
        break;
    case 7:
        cout << "sunday" << endl;
        break;
    default:
        cout << "Invalid" << endl;
    }
}