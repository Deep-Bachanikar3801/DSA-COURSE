#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getsum(int *arr,int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
 //int n;
//     cin>>n;
//     int arr[n];  --> bad practise //the memry is alloted from stack memory
// Here size of array is being decided at the run time 
// we should know the size at the compile time 
//program start --->  brings  memory --> stack memory samller --> heap memory ---> large 
//so at the compile time the programme should know how much stack memory should it bring ,so it is neccesary to have constant array size


//stack memory --> int i; int arr[]; char ch; //static allocation        //heap memory--> dynamic memory allocation variable size array uses heap memory -->new keyword   new char; address returns cant name  we can utilise memory by using pointers //dynamic memory has been alloted to the char
//char *ch= new char;//char uses heap memory //dynamic memory allocation//uses 9 byte memory ie 8 bytes of pointer and 1 byte of character
// char ch ='q';
// cout<<sizeof(ch)<<endl;
// char *c= &ch;
// cout<<sizeof(c)<<endl;

//new int[5]; gives address of starting block
//int *arr=new int [5]; this is how dynamic memory can be aloocated to an array
//total memory =28--> 20 dynamic alloactaion --> 8 static allocation
int n;
cin>>n;

//variable size array
int *arr=new int [n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

cout<<getsum(arr,n);
delete []arr;
}