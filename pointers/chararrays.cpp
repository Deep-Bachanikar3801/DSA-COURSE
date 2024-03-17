#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //character arrays
    // int arr[5]={1,2,3,4,5};
    // char ch[6]="abcde";
    // cout<<arr<<endl;
    // cout<<ch<<endl;
    //cout is differently implimented  arr --> address of first element  ch---> entire char array
    // char *c =&ch[0];
    // cout<<c<<endl;
    //cout implimentation is different for int arrays and char arrays 
    char temp='z';
    char *p=&temp;
    cout<<p;//stops after null char '\0'
}