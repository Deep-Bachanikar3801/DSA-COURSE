#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void revcount(int n){
  //base case
  if(n==0){
    return;
  }
  //recursive relation
  cout<<n<<" ";

  revcount(n-1);
}
int main(){
   int n;
   cin>>n;
   revcount(n);
}