#include<iostream>
using namespace std;
int main(){
    int a,b=1;
    a=10;
    if(++a){
        cout<<b<<endl;
    }
    else{
        cout<<++b<<endl;
    }



    int x=1;
    int y=2;
    if(x-->0 && ++y>2){
        cout<<"stage1-inside if";
    }
    else{
        cout<<"stage2- inside else";
    }
    cout<<x<<" "<<y<<endl;



    int r=1;
    int s=2;
    if(r-->0 || ++s>2){
        cout<<"stage1-inside if";
    }
    else{
        cout<<"stage2- inside else";
    }
    cout<<r<<" "<<s<<endl;



    int number=3;
    cout<<(25*(++number))<<endl;


    int q=1;
    int p=q++;
    int f= ++q;
    cout<<p<<" "<<f<<endl;

}