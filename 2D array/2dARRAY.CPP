#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool ispresent(int arr[][3],int target, int i,int j){
      for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           if(target==arr[i][j]){
            return 1;
           }
        }
    
    }
    return 0;
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin>>arr[i][j];
    //     }
        
    // }
    // //row wise printing 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //col wise printing 

    // for (int  j = 0; j < 3; j++)
    // {
    //     for (int i = 0; i < 3; i++)
    //     {
    //         cin>>arr[j][i];
    //     }
        
    // }
//      for (int  j = 0; j < 3; j++)
//     {
//         for (int i = 0; i < 3; i++)
//         {
//            cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
        
//     }
cout<<"enter the element to search"<<endl;
int target;
cin>>target;
if(ispresent(arr,target,3,3)){
    cout<<"element is present"<<endl;
}
else{
    cout<<"not present"<<endl;
}
}