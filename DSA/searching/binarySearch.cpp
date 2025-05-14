#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        // first we check if mid matches the key
        if (arr[mid] == key)
        {
            return mid;
        }

        // if not, then we check if key is > || < mid value
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2; // update mid
    }
    return -1; // meaning key is not fount
}
int main()
{
    int even[6], odd[5], key;

    cout << "Enter 6 elements of even array: ";
    for (int i = 0; i < 6; i++)
    {
        cin >> even[i];
    }
    cout << "Enter 5 elements of odd array: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> odd[i];
    }

    cout << "Enter the key to search: ";
    cin >> key;

    cout << " Index of " << key << " in even array is " << binarySearch(even, 6, key) << endl;
    cout << " Index of " << key << " in odd array is " << binarySearch(odd, 5, key) << endl;

    // int evenIndex = binarySearch(even, 6, 10);
    // cout << "Index of 10 in even array is: " << evenIndex << endl;
    // int oddIndex = binarySearch(odd, 5, 10);
    // cout << "Index of 10 in odd array is: " << oddIndex << endl;

    return 0;
}