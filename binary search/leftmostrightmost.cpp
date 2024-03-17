#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int leftmost(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int  mid=s+(e-s)/2;
    int ans=-1;
    while (s<=e)
    {
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
    
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int rightmost(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int  mid=s+(e-s)/2;
    int ans=-1;
    while (s<=e)
    {
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arrA[]={1,1,2,2,2,2,2,2,2,2,3,4,5};
    int size=13;
    int key=1;
    int ans1=leftmost(arrA,size,key);
    int ans2=rightmost(arrA,size,key);
    cout<<ans1<<" "<<ans2;
}