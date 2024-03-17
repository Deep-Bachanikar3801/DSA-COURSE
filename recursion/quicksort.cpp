#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//quick sort
//array 3 5 1 8 2 4 
//elemnt place at the right place    <----<e<---->
//1 5  3 8 2 4    ---> 1 2 3 8 5 4
//quick sort algo
//partition is the first step
//recursive relation
//space complexiety O(n)
//time complexiety= ac o(nlogn);bc=o(nlog n);wc=o(n^2);
int partition(int arr[],int s, int e){
   int pivot=arr[s];
   int count=0;
   for (int i = s+1; i <=e ; i++)
   {
       if(arr[i]<=pivot){
        count++;
       }
   }
   int pivotindex=s+count;
   swap(arr[pivotindex],arr[s]);
   //left right
   int i=s, j =e;
   while (i<pivotindex && j> pivotindex)
   {
      while(arr[i]<pivot){
        i++;
      }
       while(arr[j]>pivot){
        j--;
      }
      if (i<pivotindex && j> pivotindex)
      {
        swap(arr[i],arr[j]);
        i++;
        j--;
      }
      
   }
   return pivotindex;
    
}
void quicksort(int arr[],int s, int e){
    if(s>=e){
        return;
    }
  int p= partition(arr,s,e);
  quicksort(arr,s,p-1);
  quicksort(arr,p+1,e);
}
int main(){
   int arr[5]={2,4,1,6,9};
   int n=5;
   quicksort(arr,0,n-1);
   for (int i = 0; i < n; i++)
   {
    cout<<arr[i]<<" ";
   }
   
}