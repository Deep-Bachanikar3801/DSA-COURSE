//card example
//arr[]=4 12 11 20;
//round 1 = i=1  12>4  -->ith element to right
//intial element is considered sorted
//use of shift instead of swap
//number of rounds n-1;
//comparing ith idex to i-1 to 0;
//adaptable algorithm
//stable algorythm
//partially sorted and smaller arrays
//space complexiety = o(1);
//time complexiety ==0(n^2)
//best case tc==0(n);
//worst case ==o(n^2)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
void insertionSort(int n, vector<int> &arr){
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j =i-1;
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1]=temp;
    }
}
