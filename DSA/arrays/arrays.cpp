#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "printing arr-" << endl;
    for (int x = 0; x < size; x++)
    {
        cout << arr[x] << " ";
    }
    cout << "printed" << endl;
}

int main()
{
    // declaring and initializing an array
    int arr[3] = {5, 7, 12};

    // accessing
    cout << arr[0, 1, 2] << endl; // only prints 12 i.e. the 2nd element, equivalent to arr[2]
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

    // print through loop
    int n = 3;
    cout << "printing the array-" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 2nd problem- initializing with 0, meaning the start value/element is 0
    int first[15] = {3, 10}; // first 2 elements are initialized to 3 and 10, rest are 0
    // int s = 10;              // size of the array printed for 10 vals
    // for (int x = 0; x < s; x++)
    // {
    //     cout << first[x] << " ";
    // }
    // cout << endl;
    printArray(first, 15);

    // 3rd problem
    int second[15] = {3, 10};
    // int a = 10;
    // for (int x = 0; x < a; x++)
    // {
    //     cout << second[x] << " ";
    // }
    // cout << endl;
    printArray(second, 15);

    // max min problem
}