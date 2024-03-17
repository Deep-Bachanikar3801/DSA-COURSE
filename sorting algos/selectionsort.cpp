// easiest sorting algo
// different rounds / different passes 
// in every round place smallest element at right place
//arr[]=64 25 12 11;
//round 1= 64 25 12 22 11;  i=0 swap smallest vale at 0th index  
//round2= 11 25 12 22 64;   i=1 swap smallest vale at 1th index 
//round3 = 11 12 25 22 64;  i=2 swap smallest vale at 2th index
//round 4= 11 12 22 25 64;   already sorted;
// round== (n-1)
//space complexiety o(1);
//timecomplexiety  o(n^2);
//best case complexiety =o(n^2);
//worst case complexiety=o(n^2);
//use case- arr/vect   small size memory constarints 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>& arr, int n)
{   
   for(int i=0;i<n-1;i++){
       int minIndex=i;

       for(int j =i+1; j<n;j++){


           if(arr[j]<arr[minIndex])
               minIndex=j;
           
       }
       swap(arr[minIndex],arr[i]);
   }
  
}