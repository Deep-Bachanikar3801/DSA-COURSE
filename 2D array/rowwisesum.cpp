#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rowwisesum(int arr[][3],int m,int n){
     int sum =0;
     for (int i = 0; i < m; i++)
     {
        int sum =0;
        for (int j = 0; j < n; j++)
        {
           sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
     }
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
    rowwisesum(arr,3,3);
    
}