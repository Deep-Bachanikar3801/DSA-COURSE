#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long merge(int arr[],int s, int e){
    long long count=0;
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int *arr1= new int[len1];
    int *arr2= new int [len2];

    int mainindex = s;
    for (int i = 0; i < len1; i++)
    {
        arr1[i]= arr[mainindex++];
    }
    mainindex =mid+1;
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[mainindex++];
    }

    //merge
    int i=0;
    int j=0;
     mainindex=s;
    while (i<len1 && j<len2)
    {
        if(arr1[i]<arr2[j]){
            arr[mainindex++]=arr1[i++];
        }
        else{
            count+= len1-i;
            arr[mainindex++]=arr2[j++];
        }
    }
    while (i<len1)
    {
        arr[mainindex++]=arr1[i++];
    }
    while (j<len2)
    {
        arr[mainindex++]=arr2[j++];
    }
    
    return count;
}
long long inversioncount(int arr[] , int s ,int e ){
    long long count=0;
    if(s>=e){
        return count;
    }
    int mid=s+(e-s)/2;
    count += inversioncount(arr,s,mid);
    count += inversioncount(arr,mid+1,e);
    count += merge(arr,s,e);
    return count;
}
int main(){
    int arr[3]={3,2,1};
    int ans = inversioncount(arr,0,2);
    cout<<ans;
}