#include<iostream>
using namespace std;
void alternateswap(int arr[],int size){
    for (int i = 0; i < size; i+=2)
    {   if (i+1<size){
           swap(arr[i],arr[i+1]);}
    }
    
}
void print(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
    }
    
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
    alternateswap(arr,size);
    print(arr,size);

}