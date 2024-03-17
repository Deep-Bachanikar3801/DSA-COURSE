#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int size ,int key ){
    int start =0;
    int end= size-1;
    int mid= start+ (end-start)/2;
 while (start<=end)
 {
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        start = mid+1;

    }
    else{
        end=mid-1;
    }
 int mid= start+ (end-start)/2;
 }
 
return -1;
}
int main(){
    int arr[100];
    int a;
    cin>>a;
    int b;
    cin>>b;
    for (int  i = 0; i < a; i++)
    {
       cin>>arr[i]; /* code */
    }
    
    int ans=binarysearch(arr,a,b);
    cout<<ans;
    return 0;
}