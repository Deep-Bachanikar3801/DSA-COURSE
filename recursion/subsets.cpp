#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> arr,vector<int>op,int index, vector<vector<int>> &ans){
    //base case
    if(index>arr.size()){
        ans.push_back(op);
        return;
    }
    //exclude 
    solve(arr,op,index+1,ans);
    //include
    int element = arr[index];
    op.push_back(element);
    solve(arr,op,index+1,ans);
}
int subsets (vector<int> &arr){
     vector<vector<int>> ans;
     vector<int>op;
     int index=0;
     solve(arr,op,index,ans);
     return ans.size()/2;
 
}
int main(){
    vector<int>arr{1,2,3}; //2^n subsets 2^3=8
    //subsets={},{1},{2},{3},{1,2},{2,3},{1,3},{1,2,3} set of all subsets 
    // for (int i :arr)
    // {
    //     cout<< i << " ";
    // }
  int ans = subsets(arr);
    cout<<ans;

    
}