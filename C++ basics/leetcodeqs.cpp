#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  // leetcode problem 1- subtract product and sum of digits of a number
  /* int n;
   int prod=1;
   int sum=0;
   while(n!=0){           meaning- keep executing the loop till n doesn't equalize to 0
     int digit=n%10;
    prod= prod*digit;
    sum=sum+digit;
    n= n/10;
   }
   int answer= prod-sum;
   return answer;
 }



 //leetcode2- wirte a fucntion of an unsigned integer to calculate no. of 1 bits
 int n;
 cin>>n;
 int count =0;
 while(n!=0){
     if(n&1){
         count++;
     }
     n=n>>1;
 }
 return count;




 //reverse given integer x
 int n;
 cin>>n;
 int ans=0;
 while(n!=0){
   int digit =n%10;
   ans=(ans*10)+digit;
   n=n/10;
 }
 cout<<ans;
 */

  // complement of base 10 integer
  //  int m=n;
  //  int mask=0;
  //  //edge case
  //  if(n==0)
  //  return 1;
  //  while(m!=0){
  //    mask=(mask<<1)|1;
  //    m=m>>1;
  //  }
  //  int ans=(~n)&mask;
  //  return ans;

  // power of 2
  /*we have to check if the given integer n is in the power of 2 or not, if it is, then return true, else false
  logic- range of an integer is from (2^31 to 2^31-1), so execute a loop from 0-30 and check if n=2^x, if yes then true.*/
  // int ans=1;
  // for (int i=0;i<=30;i++){

  //   if (ans==n){
  //     return true;
  //   }
  //   if(ans< INT_MAX/2)
  //   ans=ans*2;

  //     return false;
  //   }
}
