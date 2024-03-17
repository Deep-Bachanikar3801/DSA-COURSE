#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//ip 25 -->0to25 search space
long long int sqroot(int num){
    int s=0;
    int e=num;
    long long mid = s+(e-s)/2;
    long long int ans =-1;
    while (s<=e)
    {
        long long int square=mid*mid;
            if(square==num){
                return mid;
                
            }
            if(square<num){
                 ans=mid;
                 s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid = s+(e-s)/2;
    }
    return ans;
}
int main(){
    int num;
    cin>>num;
    cout<<sqroot(num);
}