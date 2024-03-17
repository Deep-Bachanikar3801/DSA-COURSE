#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long sqroot(int n){
    int s =0;
    int e=n;
long long    int mid=s+(s-e)/2;
 long long   int ans=-1;
    while (s<=e)
    {   long long int sqare=mid*mid;
        if(sqare==n){
            return mid;
        }
        if(sqare<n){
           ans=mid;
           s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(s-e)/2;
    }
    return ans;
}
double moreprecision(int n, int precision  )
{
    double factor=1;
    double ans=sqroot(n);
    for (int i = 0; i < precision; i++)
    {
        factor=factor/10;
        for (double j = ans; j*j<n ; j=j+factor)
        {
                ans=j;
        }
        
    }
    return ans;
}
int main(){
    int n,p;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"enter the precision scale "<<endl;
    cin>>p;
    cout<<moreprecision(n,p);
}