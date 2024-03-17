#include<iostream>
using namespace std ;
void input(int arr[],int n){
    for (int i = 0; i < n; i++)
 {
    cin>>arr[i];
 }
}

void print(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
           cout<<arr[i]<<" ";
    }
    
}
int getmax(int arr[],int n){
    int maxi = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi=max(arr[i],maxi);
        
    }
    return maxi;
    
}
int getmin(int arr[],int n){
    int mini = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        mini=min(arr[i],mini);
        
    }
    return mini;
    
}
int main(){
    int size;
    cin>>size;
    int array [100];
    input(array,size);
    cout<<getmax(array,size)<<endl;
    cout<<getmin(array,size)<<endl;

}
// array passes the adress of the first block to the function that is why it changes the thesame array if it gets updated in the function unlikely to create copy like variable that we saw in pass by value