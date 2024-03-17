#include<bits/stdc++.h>
#include<iostream>
using namespace std;
string reverse(string a,int s, int e){
if(s>e){
    return a;
}
swap(a[s],a[e]);
s++;
e--;
return reverse(a,s,e);
}
int main(){
   string a="abcdefgh";
  string ans= reverse(a,0,a.length()-1);
   cout<<ans<<endl;
}