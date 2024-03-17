#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sortalgo(int array[],int size){
    // 01001010
    int i=0;
    int j=size-1;
    while (i<=j)
    {
        if(array[i]==0){
            i++;
        }
        if(array[j]==1){
            j--;
        }
        else{
        swap(array[i],array[j]);
        i++;
        j--;
        }
    }  
    //   for (int i = 0; i < size; i++)
    // {6
    //     cout<<array[i];
    // }
     
}
void printalgo(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
    }
    
}
int main(){
    int arr[100];
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
       cin>>arr[i];
    }
    
    sortalgo(arr,size);
    printalgo(arr,size);
}