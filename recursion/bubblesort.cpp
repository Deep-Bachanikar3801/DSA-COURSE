#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bubble(int arr[],int n){
    if(n==0||n==1){
        return ;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubble(arr,n-1);
}
int main(){
int arr[7]={8,7,3,2,4,1,5};
bubble(arr,7);
for (int i = 0; i < 7; i++)
{
    cout<<arr[i]<<" ";
}

}