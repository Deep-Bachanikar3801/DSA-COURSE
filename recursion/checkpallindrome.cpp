#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool is_pallindrom(string a,int s,int e){
    if(s>e){
        return true ;
    }
   if(a[s]!=a[e]){
    return false;
   }
   else{
     s++;
     e--;
    }
    return is_pallindrom(a,s,e);

}
int main(){
  string a = "ddDEEPEEDdd";
  bool ans=is_pallindrom(a,0,a.length()-1);
  if(ans){
    cout<<"is pallindrom"<<endl;

  }
  else{
    cout<<"not pallindrom"<<endl;
  }
}