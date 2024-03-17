//79123
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getpivot(int arr[],int size){
    int s=0;
    int e=size-1;
    int m=s+(e-s)/2;
    while (s<e)
    {
        if(arr[m]>=arr[0]){
            s=m+1;

        }
        else{
            e=m;
        }
        m=s+(e-s)/2;
    }
    return s;
}
int binarysearch(int arr[], int start,int end,int key){
       int s=start;
    int e=end;
    int m=s+(e-s)/2;
    int ans =-1;
    while (s<=e)
    {
        if(arr[m]==key){
            return m;
        }
        if(arr[m]<key){
            s=m+1;
        }
        else{
            e=m-1;
        }
        m=s+(e-s)/2;
    }
 return -1;   
}
int search(int arr[],int size,int key){
      int pivot = getpivot(arr,size);

      if(key>=arr[pivot]&&key<=arr[size-1]){
        return binarysearch(arr,pivot,size-1,key);
      }
      else{
        return binarysearch(arr,0,pivot-1,key);
      }

}
int main(){
    int arr[]={7,9,1,2,3};
    int size=5;
    int key=2;
    cout<<search(arr,size,key);
}