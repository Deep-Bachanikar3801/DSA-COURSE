#include<iostream>
#include <bits/stdc++.h>

using namespace std;
void printduplicates(int arr[],int n){
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==arr[i+1]&& i+1<n)
        {
            cout<<arr[i]<<" ";
        }
        
        
    }
    
}
int main(){
int size ;
cin>>size;
int arr[1000];
for (int i = 0; i < size; i++)
{
    cin>>arr[i];
}
printduplicates(arr,size);
}