//avoid smaller mistakes ;
#include<iostream>

#include<bits/stdc++.h>
using namespace std;
int leftmost(int arr[],int size,int key){
  int s=0;
  int e = size-1;
  int m= s+(e-s)/2;
  int ans =-1;
  while (s<=e)
  {
      if(arr[m]==key){
             ans=m;
             e=m-1;
      }
      if(arr[m]<key){
               s=m+1;
      }
      else{
        e=m-1;
      }
      m= s+(e-s)/2;
  }
  cout<<ans<<endl;
  return ans;
  
}
int rightmost(int arr[],int size,int key){
      int s=0;
  int e = size-1;
  int m= s+(e-s)/2;
  int ans =-1;
  while (s<=e)
  {
    if(arr[m]==key){
        ans=m;
        s=m+1;
    }
    if(arr[m]>key){
        e=m-1;
    }
    else{
        s=m+1;
    }
      m= s+(e-s)/2;

  }
   cout<<ans<<endl;
  return ans;
 
}



int numofoccurances(int arr[],int size,int key){

    int ans= (rightmost(arr,size,key))- (leftmost(arr,size,key))+1;
  return ans;
}
int main(){
    int arrA[]={1,1,2,2,2,2,2,2,2,2,3,4,5};
    int size=13;
    int key=3;
   cout<<endl<<numofoccurances(arrA,size,key);
}