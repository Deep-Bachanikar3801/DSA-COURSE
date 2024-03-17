#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void tripletsum(int arr[],int size,int sum){
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            for (int k = j+1; k < size; k++)
            {
              if(arr[i]+arr[j]+arr[k]==sum){
                cout<<arr[i]<<endl;
                cout<<arr[j]<<endl;
                cout<<arr[k]<<endl;
              }
            }
            
        }
        
    }
    
}
int  main(){
    int arr[1000];
    int a;
    int b;
    cin>>a;
    cin>>b;
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
   
    tripletsum(arr,a,b);
}