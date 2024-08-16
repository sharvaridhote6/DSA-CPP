#include<iostream>
#include<math.h>
using namespace std;
int main(){
    /*
    //conversion of decimal to binary
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<"ans is"<<ans<<endl;

//conversion of negative number to binary 
int n;
cin>>n;
n*=(-1);
int i=0;
int ans=0;
while(n!=0){
    int bit= n&1;
    ans=ans+(bit*pow(10,i));
    n=n>>1;
    i++;
}
int newAns=~ans;
cout<<newAns;
*/

//conversion of binary to decimal
int n;
cin>>n;
int i=0, ans=0;
while(n!=0){
    int digit= n%10;
    if (digit==1){
        ans=ans+pow(2,i);
    }
    n=n/10;
    i++;
}
 cout<<ans<<endl;
}


