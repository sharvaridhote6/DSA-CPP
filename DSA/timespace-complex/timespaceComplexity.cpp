#include <iostream>
using namespace std;

// additional notes-
//  When loops are nested, we multiply the time complexity, when there are more than one, we add them

int main()
{
    // assume rand() takes O(1) time and space
    //  int a=0, b=0, N,M;
    //  for (int i=0; i< N;i++){
    //      a= a+ rand();
    //  }
    //  for (int i=0; i< M;i++){
    //      b= b+ rand();
    //  }
    // ans- O(N+M)

    // for(o-n){
    //     for(o-n){
    //         xyz
    //     }
    // }
    // for(o-n){}
    // ans- O(N^2)+ O(N) = O(N^2)
}