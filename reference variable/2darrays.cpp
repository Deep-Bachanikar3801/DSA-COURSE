#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //dynamic 2d array
    int row,col;
    cin>>row>>col;
    int **arr = new int*[row];
   for (int i = 0; i < row; i++)
   {
    arr[i]=new int[col];
   }
   
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
        
    }
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //deleting memory
    for (int i = 0; i < row; i++)
    {
       delete []arr[i];
    }
    delete[]arr;
    //hw==jaggered array
    
}