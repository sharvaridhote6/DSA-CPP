#include <iostream>
using namespace std;

int main()
{

    // pre and post increment and decrement
    int i = 7;
    cout << (++i) << endl; // ++ added, hence 8, now i is 8
    cout << (i++) << endl; // new i=8, ++ will give 9
    cout << (i--) << endl; // new i=9, -- will make it 8
    cout << (--i) << endl; // -- will make 8 to 7

    /*int a= 4;
    int b=6;
    cout<<"a&b "<<(a&b)<< endl ;
    cout<<"a|b "<< (a|b) << endl;
    cout<<"~a "<<(~a)<< endl;
    cout<<"a^b "<<(a^b)<< endl;


   //left and right shifting
    cout<<(17>>1)<<endl;// right shift
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl; //left shift
    cout<<(19<<2)<<endl;
    */
}