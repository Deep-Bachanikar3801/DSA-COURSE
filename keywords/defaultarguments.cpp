#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print  (int arr[],int n, int start=0/*default argument if someone doesent pass the third value it will take 0 as default argument automatically*/){
    for (int i = start; i < n; i++)
    {
       cout<<arr[i]<<endl;
    }
    
}
int main(){
    int arr[5]={1,4,7,8,9};
    print(arr,5);//start is default argument
    print(arr,5,2);//condition starts with right most parameter right to left

    //constant variable
}