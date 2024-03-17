#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool binaray_search(int arr[],int start,int end,int key){
     if(start>end){
        return false;
     }
     int mid = start+(end-start)/2;
     if(arr[mid]==key){
        return true;
     }
     else if(arr[mid]<key){
       return  binaray_search(arr,mid+1,end,key);
     }
     else
     {
        return binaray_search(arr,start,mid-1,key);
     }
     
}
int main(){
    int arr[6]={2,4,6,10,14,18};
    int size=6;
    int key=20;
    bool ans= binaray_search(arr,0,size-1,key);
    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }
}