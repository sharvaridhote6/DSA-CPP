#include <iostream>
using namespace std;
int main()
{
    // print numbers 1 to n
    /*int n;
    cin>>n;
    int i=1;
    while(i<=n){
        cout<<i;
        i=i+1;
    }
explanation: n is initialised, we take input from the user for that, another var i is initialised and given the starting value as 1, now while i
less than or equal to the given value by the user, until then it will keep printing the numbers using cout<<i, and then i is kept increasing
until it matches n, once it does, the loop will break and the program will end.



    //sum of numbers 1 to n
    int n;
    cin>>n;
    int i=1;
    int sum=0;
    sum=0;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<<"value of sum is "<<sum<<endl;

EXP: we will take a certain value of n from the user, and initialise i with 1, so that it goes on adding numbers starting from 1 till nth value,
and will initialise "sum" starting w 0 as well so that numbers in i, 1,2,3,4,5 etc keep going w while loop and "sum=sum+i" can give us the sum of
1,2,3,4,5 etc, i.e, 0,1,3,6,10 etc. and we keep incremeting i till n.



*/
    // sum of all even nos
    /* int n;
     cin>>n;
     int i=0;
     int sum=0;
     while (i%n==0){
      sum=sum+i;
      i=i+1;
     }
            OR-
    int n;
    cin>>n;
    int sum=0;
    int i=0;
    while(i<=n){
    sum=sum+i;
    i= i+2;
    }
    cout<<sum<<endl;


  //number is prime or not
  /*int n;
  cin>>n;
  int i=2; taking 2 since 1 divides everyone
  while(i<n){
      if (n%i==0){ //if it divides, then its not prime
          cout<<"Not Prime for"<<i<<endl;
      }
      else{
          cout<<"Prime for"<< i <<endl;
      }
      i=i+1;
  }*/

    // pattern 1 =3 stars row+column wise
    /*int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=i; //j=1 would also do
        while(j<=n){
            cout<<"*";
            j=j+1;
        }
        cout <<endl;
         i=i+1;
    }
    */

    // pattern 2= rows- 1,2,3 numbers
    /**int n;
    cin>>n;
    int i=1;
    while(i<=n){
       int j=1;
       while(j<=n){
           cout<<i;
           j=j+1;
       }
       cout<<endl;
       i=i+1;
   }
*/

    // pattern 3=columns 1,2,3,4
    /*  1 2 3 4
        1 2 3 4
        1 2 3 4
        1 2 3 4

    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
                j=j+1;
            }
            cout<<endl;
            i=i+1;
        }
     */

    // pattern 4= reverse above one
    /*  3 2 1
        3 2 1
        3 2 1

    int n;
    cin>>n;
    int i=6; // any number can be taken according to which column we want to start
    while(i>=n){
        int j=6;
        while(j>=n){
            cout<<j;
            j=j-1;
        }
        cout<<endl;
        i=i-1;
      }
    */

    // pattern 5= 123,456,789- rows
    /*1 2 3
      4 5 6
      7 8 9

int n;
cin>>n;
int i= 1;
int count= 1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<count<<" ";
        count =count +1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
    }



   //pattern 6= *triangle
    /*   *
         **
         ***
         ****

    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){ //j is not greater than n here it is i, i.e, col greater than row w every single print of row
            cout<<"*";
            j=j+1;
        }
       cout<<endl;
        i=i+1;
    }



   //pattern 7=
    1
    12
    123
    1234

   int n;
   cin>>n;
   int row=1;
   while(row<=n){
    int col=1;
    while(col<=row){
        cout<<col;
        col=col+1;
    }
    cout<<endl;
    row=row+1;
   }


//pattern 8
 1
 2 2
 3 3 3
 4 4 4 4


  int n;
  cin>>n;
  int row = 1;
  while(row<=n){
    int col=1;
    while(col<=row){
        cout<<row;
        col=col+1;
    }
    cout<<endl;
    row=row+1;
  }



 //pattern 9
  1
  2 3
  4 5 6
  7 8 9 10

 //pattern 10
   1
   2 3
   3 4 5
   4 5 6 7

  int n;
  cin>>n;
  int row=1;
  while(row<=n){
    int col=1;
    int value = row;
    while(col<=row){
        cout<<value;
        value=value+1;
        col=col+1;
    }
    cout<<endl;
    row=row+1;
  }

   //pattern 11
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<row-col+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
          */

    // pattern 11
    /* 1
       23
       345
       4567
       56789
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<row-col+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }


// pattern 12
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            char ch = 'A' + row -1; typecasting, converting A into int hence added char ch to it.
            cout<< ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
*/

    // pattern
    /*1
      2 3
      4 5 6
      7 8 9 10
      11 12 13 14 15
      int n;
      cin>>n;
      int row=1;
      int start=1;
      while(row<=n){
        int col=1;
        while(col<=row){
            cout<<start<<" ";
            start =start+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
      }
      */

    // pattern 13- abc def ghi
    // pattern 14
    /*A B C
      B C D
      C D E

      int n;
      cin>>n;
      int row= 1;
      while(row<=n){
          int col=1;
          while(col<=n){
              char ch= 'A' +row +col -2;
              cout<< ch;
              col=col+1;
          }
          cout<<endl;
          row= row+1;
      }
      */

    // pattern 15
    /*A
      B B
      C C C
     int n;
     cin>>n;
     int row=1;
     while(row<=n){
         int col=1;           // if in this same pattern the char ch line was to be put below initialising row, then the output would've been triangular A's
         while(col<=row){
             char ch= ('A' +row -1);
             cout<<ch;
             col=col+1;
         }
         cout<<endl;
         row=row+1;
     }
     */

    // pattern 16
    /*  A
        B C
        D E F
        G H I J
        int n;
        cin>>n;
        int row=1;
        char ch= 'A';
        while(row<=n){
            int col=1;
            while(col<=row){
                cout<<ch;
                ch=ch+1;
                col=col+1;
            }
            cout<<endl;
            row=row+1;
        }
        */

    // pattern 17
    /*A
      B C
      C D E
      D E F G
      int n;
      cin>>n;
      int row=1;
      while(row<=n){
          int col=1;
          while(col<=row){
              char ch=('A' + row+ col-2);
              cout<<ch;
              col= col+1;
          }
          cout<<endl;
          row=row+1;
      }
      */

    // pattern 18
    /* D
       B C D
       A B C D
     int n;
     cin>>n;
     int row=1;
     while(row<=n){
         int col=1;
         char chf=('A' +n -row);
         while(col<=row){
             cout<<chf;
         chf= chf + 1;
         col=col+1;
     }
     cout<<endl;
     row=row+1;
     }


    //pattern space stars
                *
             *  *
          *  *  *

    int n;
    cin>>n;
    int row= 1;
    while(row<=n){
         //print spaces
         int space= n-row;
         while(space){
             cout<<" ";
             space=space -1;
         }
         //print stars
         int col=1;
         while(col<=row){
             cout<<"*";
             col=col+1;
         }
         cout<<endl;
         row=row+1;
    }*/

    // pattern 20
    /*  *****
        ****
        ***
        **
        *

      int n;
      cin>>n;
      int row=1;
      while(row<=n){
        int col=1;
        int star= n-row+1;
        while(col<=star){
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
      }*/

    // pattern 21
    /*  * * * *
          * * *      fix this code
            * *
              *

        int n;
        cin>>n;
        int row=1;
        while(row<=n){
            int space=row -1;
            while(space){
                cout<<" ";
                space= space +1;     //fix it - stars=n-row+1, space= row-1.
            }
            int col=1;
            while(col<=row){
                cout<<"*";
                col=col+1;
            }
            cout<<endl;
            row=row+1;
        }

    /*
            //pattern 22,23,24,25,26 - in book
            1 1 1 1
              2 2 2
                3 3
                  4

    */
    // pattern 27
    /*
                1
              1 2 1
            1 2 3 2 1
          1 2 3 4 3 2 1
    */
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {

        // print space
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        // print 1st triangle
        int col = 1;
        while (col <= row)
        {
            cout << col;
            col = col + 1;
        }

        // print 2nd triangle
        int start = row - 1;
        while (start)
        {
            cout << start;
            start = start - 1;
        }
        cout << endl;
        row = row + 1;
    }
}
