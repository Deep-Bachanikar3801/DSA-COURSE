#include<iostream>
using namespace std;
int fact(int n){
    int ans=1;
    for ( int i = 1; i <=n; i++)
    {
        ans =ans*i;
    }
    return ans;
}
int ncr(int n ,int r){
       int num = fact(n);
       int denom= fact(r)*fact(n-r);
       return num/denom;
}

int main(){
    int a, b;
    cin>>a>>b;

    int ans =ncr(a,b);
    cout<<ans;
}