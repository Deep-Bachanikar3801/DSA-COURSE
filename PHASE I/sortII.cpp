#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sortalgo(int arr[],int size){
    // 021012012
//     int l=0;
//     int i=0;
//     int r= size-1;
//     while (l<=r && i<size)
//     {
//         if(arr[i]==0){
//             swap(arr[l],arr[i]);
//             l++;
//             i++;

//         }
//         if(arr[i]==1){
//             swap(arr[i],arr[r]);
//             r--;
//         }
//         else{
//             i++;
//         }
//     }
    
// }
int l=0;
    int r=size-1;
     
    for(int i=0;i<size && i<=r;){
        // current element is 0
        if(arr[i]==0){
            swap(arr[l],arr[i]);
            l++;
            i++;
        }
        // current element is 2
        else if(arr[i]==2){
            swap(arr[i],arr[r]);
            r--;
        }
        // current element is 1
        else{
            i++;
        }
    }
}
void printArray(int arr[], int arr_size)
{
    // Iterate and print every element
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
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
    printArray(arr,size);
}