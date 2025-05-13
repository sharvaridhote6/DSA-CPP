#include <iostream>
#include <climits> // for INT_MAX and INT_MIN
using namespace std;

// void printArray(int arr[], int size)
// {
//     cout << "printing arr-" << endl;
//     for (int x = 0; x < size; x++)
//     {
//         cout << arr[x] << " ";
//     }
//     cout << "printed" << endl;
// }

// int main()
// {
//     // declaring and initializing an array
//     int arr[3] = {5, 7, 12};

//     // accessing
//     cout << arr[0, 1, 2] << endl; // only prints 12 i.e. the 2nd element, equivalent to arr[2]
//     cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

//     // print through loop
//     int n = 3;
//     cout << "printing the array-" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // 2nd problem- initializing with 0, meaning the start value/element is 0
//     int first[15] = {3, 10}; // first 2 elements are initialized to 3 and 10, rest are 0
//     // int s = 10;              // size of the array printed for 10 vals
//     // for (int x = 0; x < s; x++)
//     // {
//     //     cout << first[x] << " ";
//     // }
//     // cout << endl;
//     printArray(first, 15);

//     // 3rd problem
//     int second[15] = {3, 10};
//     // int a = 10;
//     // for (int x = 0; x < a; x++)
//     // {
//     //     cout << second[x] << " ";
//     // }
//     // cout << endl;
//     printArray(second, 15);
// }

// max min problem
// int getMin(int num[], int n)
// {
//     int min = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if (num[i] < min)
//         {
//             min = num[i];
//         }
//     }
//     return min;
// }

// int getMax(int num[], int n)
// {
//     int maxi = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         maxi = max(maxi, num[i]); // same as below
//         // if (num[i] > max)
//         // {
//         //     max = num[i];
//         // }
//     }
//     return maxi;
// }

// int main()
// {
//     int size;
//     cout << "Enter the size of the array: ";
//     cin >> size;
//     int num[100]; // max size of array is 100
//     for (int i = 0; i < size; i++)
//     {
//         cin >> num[i];
//     }
//     cout << "max is " << getMax(num, size) << endl;
//     cout << "min is " << getMin(num, size) << endl;
//     return 0;
// }

// print sum of array
// int arraySum(int num[], int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + num[i];
//     }
//     return sum;
// }
// int main()
// {
//     int size;
//     cin >> size;
//     int num[100];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> num[i];
//     }
//     cout << "sum is " << arraySum(num, size) << endl;
// }

// linear search
// bool search(int arr[], int size, int key)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             return 1 || true;
//         }
//     }
//     return 0 || false;
// }
// int main()
// {
//     int size;
//     cout << "Enter the size of the array: ";
//     cin >> size;
//     cout << "Enter the elements of the array: ";
//     int arr[100];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "Enter the key: ";
//     int key;
//     cin >> key;

//     bool found = search(arr, 10, key);
//     if (found)
//     {
//         cout << "Key found";
//     }
//     else
//     {
//         cout << "Key not found";
//     }
// }

// reverse an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[6];
    int brr[5];
    cout << " ENter the elemenyts for arr";
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    cout << " ENter the elemenyts for brr";
    for (int i = 0; i < 5; i++)
    {
        cin >> brr[i];
    }

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}