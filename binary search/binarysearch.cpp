#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binaraysearh(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid= start+(end-start)/2;

    while (start<=end)
    {
      if(arr[mid]==key){
        return mid;
      }
      if(arr[mid]<key){
        start=mid+1;

      }
      else{
        end=mid-1;

      }
      mid= start+(end-start)/2;
    }
    return -1;
}
int main(){
    int arrA[]={1,1,2,2,3,4,5};
    int size=7;
    int key=1;
    cout<<binaraysearh(arrA,size,key);
}