#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//index value represents number of students m number of students 
//each students gets atleast one book
//each book should be allocated
//allocation be in contageous manners
//m students such that maximum number of pages assigned tonstudent is minimum
//10 20 30 40
//search space for answer min -->0    max-->100 
// concept --> search sapce minimize
bool possiblesol(int arr[],int n,int m,int mid){
   int student = 1;
   int pagesum=0;
   for (size_t i = 0; i < n; i++)
{
    if(arr[i]+pagesum<=mid){
        pagesum=pagesum+arr[i];
    }
    else{
        student++;
        if(student>m || arr[i]>mid){
            return false;
        }
        pagesum=arr[i];
    }
}
return true;
}
int allocatebooks(int arr[],int n, int m){
    int s=0;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum= sum+arr[i];
    }
   int  e=sum;
   int mid=s+(e-s)/2;
   int ans=-1;
   while (s<=e)
   {
          if (possiblesol(arr,n,m,mid)){
            ans = mid;
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
    int arr[]={10,20,30,40};
    int n=4;
    int m=2;
    int ans =allocatebooks(arr,n,m);
    cout<<ans<<endl;
    
}