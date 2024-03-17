#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//1st half sorted in increasing order / second half in decreasing order formin a mountain.
int peakelement(int arr[],int size){
      int s=0;
      int e= size-1;
      int  m=s+(e-s)/2;
      while (s<e)
      {
        if(arr[m]<arr[m+1]){
             s=m+1;
        }
        else{
            e=m;
        }
         m=s+(e-s)/2;
      }
      
    return s;

}
int main(){
    int arr[]={0,1,2,3,3,2 ,1};
    int size=7;
    int ans=peakelement(arr,size);
    cout<<arr[ans];
}