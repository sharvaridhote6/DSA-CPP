#include <iostream>
using namespace std;

// // void/int (or whatevrr type of return type we can use)
// // function definition below
// int printHello()
// {
//     cout << "hello world!" << endl; //           1st output
//     return 3;
// }
// int main()
// {
//     printHello(); // function call               2nd output
//     int value = printHello();
//     cout << value << endl; //                    3rd output
//     return 0;
// }

// // sum of 2 nos
// int sum(int a, int b)
// {
//     int s = a + b;
//     return s;
// }
// int main()
// {
//     cout << sum(2, 3) << endl; // 5
// }

// // power of a and b
// int power(int a, int b)
// {
//     int ans = 1;
//     for (int i = 1; i <= b; i++)
//     {
//         ans = ans * a;
//     }
//     return ans;
// }
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     int answer = power(a, b);
//     cout << answer << endl;
//     return 0;
// }

// prime no program
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << n << " is prime no" << endl;
    }
    else
    {
        cout << n << " is not prime no" << endl;
    }
}

// pass by value- it will not change the value of the variable
// pass by reference- it will change the value of the variable