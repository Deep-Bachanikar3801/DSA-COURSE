#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int findDuplicate(vector<int>& nums) {
        int i=0;
        int ans=0;
    while(i<nums.size()){
        int element =nums[i];
        for(int j=i+1;j<nums.size();j++){
            if(element==nums[j]){
                ans = nums[j];
                break;
            }
            i++;
        }
    }
    cout<<ans;
   return ans;
}   
int main(){
  vector<int>arr={1,2,3,4,5,3};
    int ans= findDuplicate(arr);
    cout<<ans;
}