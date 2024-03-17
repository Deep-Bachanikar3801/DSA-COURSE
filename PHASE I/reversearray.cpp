#include<iostream>
using namespace std;

void reverse(int arr[], int size){
    int start=0;
    int end= size-1;
   
        while (start<=end)
        {
          swap(arr[start],arr[end]);
          start++;
          end--;  
        }
    
    
}
void print(int arr[],int size ){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
    }
    
}
int main(){
    int size;
    cin>>size;
    int array [100];
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    
   
    reverse(array,size);
     print (array,size);
}