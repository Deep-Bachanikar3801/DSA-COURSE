#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int largestrowsum(int arr[][3],int m,int n){
     int sum =0;
     int maxrow=-1;
     int maxi=INT32_MIN;
     for (int i = 0; i < m; i++)
     {
        int sum =0;
        for (int j = 0; j < n; j++)
        {
           sum = sum + arr[i][j];
        }
       if(sum>maxi){
        maxi =sum;
        maxrow=i;
       } 
     }
     cout<<maxrow<<endl;
     return maxi;
}

int main(){
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }
  cout<<largestrowsum(arr,3,3);
    
}