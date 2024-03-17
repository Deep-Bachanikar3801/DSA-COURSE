#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int powof(int a, int b){
   if(b==0){
    return 1;
   }
   if(b==1){
    return a;
   }
   int ans= powof(a,b/2);
   if(b&1){
       return  a* ans*ans;
   }
   else{
    return ans*ans;
   }
   
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<powof(a,b);

}