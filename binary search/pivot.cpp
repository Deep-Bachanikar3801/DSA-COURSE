// {12379}--rotated array{79123}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int pivot(int arr[],int size){
    int s=0;
    int e=size-1;
    int m=s+(e-s/2);
    while (s<e)
    {
        if(arr[m]>=arr[0]){
            s=m+1;
        }
        else
        {
            e=m;
        }
         m=s+(e-s)/2;
    }
    return s;
}
int main(){
// {12379}--rotated array{79123}
    int arr[]={7,9,2,3};
    int size=4;
    int ans=pivot(arr,size);
    cout<<arr[ans];
}