#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//i/p =array = 38 27 43 3 9 82 10
//devide array into two parts as binary search  mid
// 38 27 43 3      9 82 10
//38 27     43 3        //9 82    //10
//38   //27    //43    //3    //9   //82   //10  single blocks are acheived
//27 38      //3 43      //9 82  //10 started merging contageous blocks in sorted manner
//3 27 38 43       //9 10 82
//3 9 10 27 38 43 82
//space complexiety o(n);
//inversioncount
//time complexiety o(nlogn)
void merge(int arr[],int s,int e){
    int mid= s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first = new int[len1];
    int *second = new int[len2];
    int mainarrayindex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainarrayindex++];
    }
     mainarrayindex=mid+1;
    for(int i=0;i<len1;i++){
        second[i]=arr[mainarrayindex++];
    }

    //merge
    int index1=0;
    int index2=0;
     mainarrayindex=s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainarrayindex++]=first[index1++];
        }
        else{
            arr[mainarrayindex++]=second[index2++];
        }
    }
    while (index1<len1)
    {
        arr[mainarrayindex++]=first[index1++];
    }
    while (index2<len2)
    {
        arr[mainarrayindex++]=second[index2++];
    }
    delete [] first;
    delete [] second;
    
    }
void mergesort(int arr[],int s,int e){
    if(s>=e){
        return ;
    }
    int mid= s+(e-s)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);

    merge (arr,s,e);
}
int main(){
     int arr[5]={2,5,1,6,9};
     int n=5;
     mergesort(arr,0,n-1);
    for (int  i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}