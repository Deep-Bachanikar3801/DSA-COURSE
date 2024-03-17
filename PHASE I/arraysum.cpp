#include<iostream>
using namespace std;
int sum(int arr[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
         sum=sum+arr[i];
    }
    return sum;
    
}
void input(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
}
int main(){
    int size ;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    int array[100];
    input(array,size);
    cout<<sum(array,size)<<endl;
}