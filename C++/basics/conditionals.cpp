#include <iostream>
#include <string>
using namespace std;
int main()
{
    /*int a,b;
    cin>>a>> b ;
    cout<<"value of a and b is "<<a<< " "<< b<< endl;

    int a,b;
    cout<<"enter the value of a "<<endl;
    cin>>a;
    if(a>0){
        cout<<"a is positive"<<endl;
    }
    else if(a<0){
        cout<<"a is negative"<<endl;
    }
    else{
        cout<<"a is 0"<<endl;
    }

    int a,b;
    cout<<"Enter a number a "<<endl;
    cin>>a;
    cout<<"enter a number b "<<endl;
    cin>>b;

    if(a>b){
    cout<<"a is greater than b "<<endl;
    }
    else
    cout<<"b is greater than a "<<endl;


//switch case
char ch=1;
cout<<endl;
switch(ch){
    case 1: cout<<"First"<<endl;
        break;
    case 2:cout<<"second"<<endl;
        break;
    default:cout<<"It is default case "<<endl;
}
cout<<endl;
*/

    // takes only one character input
    //  char ch;
    //  cout << "Enter a character: " << endl;
    //  cin >> ch;
    //  if (ch >= 'A' && ch <= 'Z')
    //  {
    //      cout << "Uppercase letter " << endl;
    //  }
    //  else if (ch >= 'a' && ch <= 'z')
    //  {
    //      cout << "Lowercase letter " << endl;
    //  }
    //  else if (ch >= '0' && ch <= '9')
    //  {
    //      cout << "Digit " << endl;
    //  }
    //  else
    //  {
    //      cout << "Special character " << endl;
    //  }

    // takes complete input line
    // string str;
    // cout << "enter your input:";
    // getline(cin, str);
    // if (str >= "a" && str <= "z")
    // {
    //     cout << "your input is lowercase letter" << endl;
    // }
    // else if (str >= "A" && str <= "Z")
    // {
    //     cout << "your input is uppercase letter" << endl;
    // }
    // else if (str >= "0" && str <= "9")
    // {
    //     cout << "your input is digit" << endl;
    // }
    // else
    // {
    //     cout << "your input is special character" << endl;
    // }

    string input;
    cout << "Enter a string: ";
    getline(cin, input); // Read the whole line including spaces

    for (char ch : input)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            cout << ch << " is an Uppercase letter" << endl;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            cout << ch << " is a Lowercase letter" << endl;
        }
        else if (ch >= '0' && ch <= '9')
        {
            cout << ch << " is a Digit" << endl;
        }
        else
        {
            cout << ch << " is a Special character" << endl;
        }
    }

    return 0;
}