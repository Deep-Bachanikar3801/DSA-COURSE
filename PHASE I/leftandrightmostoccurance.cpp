#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//01122222333
int leftmost(int arr[],int size,int key){
    int s=0;
    int  e= size-1;
    int mid = s + (e-s)/2;
    int ans=-1;
    while (s<e)
    {
        if (arr[mid]<key)
        {
           s=mid+1;
        }
        
        if (arr[mid]==key)
        {    
            ans=mid;
            e=mid-1;
        }
        else{
           e=mid-1;
        }
         int mid = s + (e-s)/2;
    }
    return ans;
}
int righttmost(int arr[],int size,int key){
    int s=0;
    int  e= size-1;
    int mid = s + (e-s)/2;
    int ans=-1;
    while (s<e)
    {
        if (arr[mid]<key)
        {
           s=mid+1;
        }
        
        if (arr[mid]==key)
        {    
            ans=mid;
            s=mid+1;
        }
        else{
           e=mid-1;
        }
         int mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
       int size=9;
    int arr[size]={1,1,1,2,2,2,2,2,2};
 
    int key =2;
    int ans1=leftmost(arr,size,key);
    int ans2=righttmost(arr,size,key);
    cout<<ans1<<endl;
    cout<<ans2<<endl;
   
}