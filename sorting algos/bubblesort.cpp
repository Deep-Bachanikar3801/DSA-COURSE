//bubble sort--> compare with neighbour element and then sort 
//arr[]= 10 1 7 6 14;
//round 1:  1 , 10 , 7 ,6 ,14  copared first 2 elements and swapped
//          1,7,10,6,14   compared the next two elements and swapped
//          1,7,6,10,14  compared the next two elements and swapped
// 1 st largest element placed at the right palce
//till entire array is sorted rounds goes on
//total rounds (n-1);
//use case:  each ith round we can place ith largest element at right place
//time complexiety=o(n^2); n= size of array
//space complexiety=o(1);
//best case complexity: already sorted array=o(n)
//optimised solution
/*/#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
  for (int i=1; i<n;i++){
      //for roun 1 to n-1
      bool swapped=false;
      for(int j=0;j<n-i;j++){
          //processing elements till n-i th index
          if(arr[j]>arr[j+1]){
              swap(arr[j],arr[j+1]);
              swapped=true;
          }
      }
      if(swapped==false){
          break;
      }
  }
}*/
//worst case complexiety:reverse array=o(n^2)
//inplace sort ??
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{   
  for (int i=1; i<n;i++){
      //for round 1 to n-1
      for(int j=0;j<n-i;j++){
          //processing elements till n-i th index
          if(arr[j]>arr[j+1]){
              swap(arr[j],arr[j+1]);
          }
      }
  }
}
