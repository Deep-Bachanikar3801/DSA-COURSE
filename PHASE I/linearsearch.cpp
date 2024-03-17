#include<iostream>
using namespace std;
bool search(int arr[], int n,int key){


    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return 1;
        }
        
    }
    return 0;
}

int main(){
    int size=5;
    int arr[5]={1 , 12, 23 , 44 ,50 };
    int key;
    cin>>key;

    bool found=search(arr,size,key);
    if (found)
    {
        cout<<"key is found"<<endl;
    }
    else{
        cout<<"key is absent"<<endl;
    }
}