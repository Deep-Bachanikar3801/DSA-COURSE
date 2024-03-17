// painters partition problem
//arr--> 0-n      k=painters   1 unit board = 1unit time
// painter -- contageious section 
// minimum time required to piant an array
//need to partition array such that time is minimum.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool possiblesol(vector<int> &boards,int k,int mid){
    int painter=1;
    int time=0;
    for(int i=0;i<boards.size();i++){
        if(time+boards[i]<=mid){
            time=time+boards[i];
        }
        else{
            painter++;
            if(painter>k || boards[i]>mid){
                return false;
            }
            time=boards[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
   int s=0;
   int sum=0;
   for(int i=0;i<boards.size();i++){
       sum=sum+boards[i];
   }
   int e=sum;
   int mid=s+(e-s)/2;
   int ans=0;
   while(s<=e){
       if(possiblesol(boards,k,mid)){
            ans=mid;
            e=mid-1;
       }
       else{
           s=mid+1;
       }
       mid=s+(e-s)/2;

   }
   return ans;
}
int main(){
    vector<int> boards ={5,5,5,5};
    // int n=4;
    int k=2;
    int ans = findLargestMinDistance(boards,k);
    cout<<ans<<endl;
}