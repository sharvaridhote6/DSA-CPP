#include <iostream>
using namespace std;

// void/int (or whatevrr type of return type we can use)
// function definition below
int printHello()
{
    cout << "hello world!" << endl; //           1st output
    return 3;
}

int main()
{
    printHello(); // function call               2nd output
    int value = printHello();
    cout << value << endl; //                    3rd output
    return 0;
}
