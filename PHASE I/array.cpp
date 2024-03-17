#include<iostream>
using namespace std;
void input(int arr[],int n){
    for (int i = 0; i < n; i++)
 {
    cin>>arr[i];
 }
}

void print(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
           cout<<arr[i]<<" ";
    }
    
}

int main() {
//     int n;
//     cin>>n;
//  int num[n];


//  input(num,n);
 
//  cout<<"everything is fine"<<endl; 
//  num[2]=5;
//  cout<<num[2];
// 
// for (int i = 0; i < 5; i++)
//  {
//     cout<<num[i]<<" ";
//  }
// print(num,n);
char ch[5]={'a','b','c','d'};
int n =5;
for (int i = 0; i < n; i++)
 {
   cout<<ch[i]<<" ";
 }
 
}