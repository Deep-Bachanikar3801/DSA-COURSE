#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int main(){
    //int *p;//--> Bad practise //
    //pointer to int is created poited to random address 
    // cout<<*p;

//     // //good practise 
//      int *p=0;//meomory  doesnt exist null pointer
//     //  cout<<*p<<endl;
//     int i=5;
//     p=&i;//updating null pointer
//    cout<<p<<endl;
//    cout<<*p<<endl;
   int num=5;

   int *p=&num;
cout<<num<<endl;
(*p)++;
cout<<num<<endl;
//pointer to pointer copy
int *q=p;
cout<<p<<endl;
cout<<q<<endl;
cout<<*p<<endl;
cout<<*q<<endl;

//important concept
int i=3;
int *t=&i;
*t=*t+1;//value at adress at adress strored in t +1
//t=t+1 = adress +1=100+1==104
cout<<*t<<endl;
cout<<t<<endl;
t=t+1;
cout<<t<<endl;
}