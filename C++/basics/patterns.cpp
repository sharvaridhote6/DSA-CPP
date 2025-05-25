#include <iostream>
using namespace std;
int main()
{
    // pattern 1- square
    cout << "Enter the value of n: " << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // pattern2- right angle triangle
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // pattern3- cloumn values in right angle triangle
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // pattern4- row values in right angle triangle
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    // pattern5- inverted right angle triangle
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // pattern6-  col values in inverted right angle triangle
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++) // here +1 is added due to int starting from 1, hence to cancel it out
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // pattern7-

    
}