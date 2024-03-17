#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool linear_search(int arr[],int n, int target){
    if(n==0){
        return false;
    }
    if(arr[0]==target){
        return true;
    }
    else{
        return linear_search(arr+1,n-1,target);
    }
}
int main(){
    int arr[5]={3,5,1,2,6};
    int n=5;
    int key=5;
    bool ans=linear_search(arr,n,key);
    if(ans){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}