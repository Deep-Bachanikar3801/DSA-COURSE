#include<iostream>
using namespace std;
int unique(int arr[],int size){
    int ans =0;
    for (int i = 0; i < size; i++)
    {
        ans= ans^arr[i];
    }
    return ans;
}
void input(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
}
int main(){
    int size;
    cin>>size;
    int arr[100];
    input(arr,size);
    cout<<unique(arr,size);
}