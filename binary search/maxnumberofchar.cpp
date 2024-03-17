#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
// s.find()/s.erase()

char maxoccword(string s){
    int arr[26]={0};
    int number =0;
    for (int i = 0; i < s.length(); i++)
    {
        char ch =s[i];
        if(ch>='a'&&ch<='z'){
            number=ch-'a';
        }
         if(ch>='A'&& ch<='Z'){
            number=ch-'A';
        }
        arr[number]++;
    }
    int maxi =-1;
    int ans =0;
    for (int  i = 0; i < 26; i++)
    {
        if(maxi<arr[i]){
            ans=i;
            maxi= arr[i];
        }
    }
      char finalans= 'a'+ans;
      return finalans;        
}
int main(){
    string s;
    cin>>s;
    cout<<maxoccword(s);
}