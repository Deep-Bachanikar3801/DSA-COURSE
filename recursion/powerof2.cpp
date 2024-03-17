# include<iostream>
#include<bits/stdc++.h>
using namespace std;
int powof2(int n){
//base condition/case
if(n==0){
    return 1;
}
//recursive relation
int ans = 2* powof2(n-1);

}
int main(){
    int n;     
    cin>>n;
    cout << "2 raise to "<<n<<" = "<<powof2(n);
}