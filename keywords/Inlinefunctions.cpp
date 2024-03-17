#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// void function(int a ,int b){
//     a++;
//     b++;
//     cout<<a<<" "<<b;
// }
inline int getmax(int &a,int &b){
    //inline function --> if function body is of 1 line then compiler accepts as inline 
    //--> if it is 2 or 3 lines  then compiler decides\
    //--> if it is more than 3 lines  compiler doesn't accepts as inline function
    //function call will replce with function body at compile time --> improves perfomance as no extra memory usues no function call overhead
    return (a>b)? a:b;
}
int main(){
    //inline functions -->are used to reduce the function calls overhead
     int a =1;
     int b=2;
  //   function(a,b); //here we called the function so in stack there would be fun over main fun creatimg meomries for copy of a,b causing  performance hit.there is also time usage in calling the function.
int ans;
// if(a>b){
//     ans=a;
// }
// else{
//     ans=b;
// }
//tertiary operator
//ans=(a>b)? a:b;
ans =getmax(a,b);  
cout<<ans<<endl;
a=a+3;
b=b+1;
//ans=(a>b)? a:b;
ans =getmax(a,b);  
cout<<ans;
}