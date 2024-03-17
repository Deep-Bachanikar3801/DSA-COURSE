#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int value =5;
    int *p=&value;
    //type of data 
    //how much bytes to consider
    int **q= &p;
    //initialising a double pointer
    cout<<"all good"<<endl;
    cout<<"printing p "<<p<<endl;
    cout<<"address of p  "<<&p<<endl;
    cout<<q<<endl;
    cout<<*q<<endl;


    cout<<value<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;

    cout<<&value<<endl;
    cout<<p<<endl;
    cout<<*q<<endl;

    cout<<&p<<endl;
    cout<<q<<endl;


}