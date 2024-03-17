#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(int *p){
    cout<<*p<<endl;
}
void update(int *p){
    *p=*p+1; //pass by value 
}
int getsum(int arr[],int n){
    // cout<<"size of arr "<<sizeof(arr);
    //passing pointer
    //benifit :
    //part of array send/pass 
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        sum =sum + arr[i];
    }
return sum;
    
}
int main(){
    int i=5;
    int *p= &i ;
    print(p);
    update(p);
    print(p);

    int arr[5]={1,2,3,4,5};
   cout<< getsum(arr+3,2);
}
