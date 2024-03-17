#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void pairsum(int arr[],int size,int sum){
    sort(arr,arr+size);
    int ans[100];
    for (int  i = 0; i < size; i++)
    {

       for (int j = i+1; j < size; j++)
       {
         if(arr[i]+arr[j]==sum){
            cout<<arr[i]<<" "<<arr[j]<<endl;

         }
       }
       
       
        
    }
    
}
int main(){
   int arr[200];
   int a;
   int b;
   cin>>a>>b;
   for (int i = 0; i < a; i++)
   {
      cin>>arr[i];
   }
   pairsum(arr,a,b);
   
}
