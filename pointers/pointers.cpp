//int num=5;
//address of num
//mappiing of num and adress -->symbol table
//symbol table---> where variables are mapped with address 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n =5 ;
// cin>> n;
cout<<n<<endl;
// adress of operator
//&//
cout<<"adress of num  "<<&n<<endl;  //0x61ff0c== hexadecimal format
//pointer
//pointer stores address
int *ptr=&n;
//ptr stores address of n;
// *ptr pointer declaration
//int *p= p is a pointer to a datatype int
//char *p=&ch;
//double*ptr=&d;
cout<<*ptr<<endl;
//* = derefferance operator 
//*ptr= value at address pointed by ptr
cout<<ptr<<endl;
double d=4.3;
double *p2=&d;
cout<<*p2<<endl;
cout<<p2<<endl;
cout<<"adress of num  "<<&d<<endl; 
cout<<"size of int "<<sizeof(n)<<endl;
cout<<"size of pointer "<<sizeof(ptr)<<endl;
cout<<"size of int "<<sizeof(p2)<<endl;
}
