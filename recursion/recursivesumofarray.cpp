#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int n){
    if(n==0){
        return 0;
    }
    int ans=0;
    ans=arr[0]+sum(arr+1,n-1);
    return ans;
}
int main(){
    int arr[1]={5};
    int n=1;
    cout<<sum(arr,n);
}