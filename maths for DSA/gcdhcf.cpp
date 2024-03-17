#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//gcd/hcf

// gcd(a,b)= gcd(a-b,b)
// gcd(72,24)=(48,24)=(24,24)=(0,24)=GCD=24
// lcm(a,b )*gcd(a,b)=a*b
int gcd(int m , int n){
    if(m==0){
        return n;
    }
    if(n==0){
        return m;
    }

    while (m!=n)
    {
        if(m>n){
            m=m-n;
        }
        else{
            n=n-m;
        }
       
    }
     return m;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}