#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool is_sorted(int arr[],int n){
    if(n==0||n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans=is_sorted(arr+1,n-1);
        return ans;
    }
}
int main(){
    int arr[5]={9,2,3,6,5};
    int size=5;
    bool ans=is_sorted(arr,size);
    if(ans){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    }
}