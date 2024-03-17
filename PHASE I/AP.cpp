#include<iostream>
using namespace std;
int ap(int n){
    int ans = 3*n+7;
    return ans;
}
int main(){
    int a;
    cin>>a;
    int ans= ap(a);
    cout<<"nth term ="<<ans;
}