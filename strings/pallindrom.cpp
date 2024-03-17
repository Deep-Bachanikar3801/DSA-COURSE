#include <bits/stdc++.h> 
using namespace std;
char convert(char ch){
if(ch>='a' && ch<='z'){
    return ch;
} else {
    char temp = ch - 'A' + 'a';
    return temp;
}
}
bool isvalid(char ch){

    if ((ch>=48 && ch<=57) || (ch>=65 && ch<=90) || (ch>=97 && ch<=122)){

        return true;

    }

    else{

        return false;

    }

}
bool checkPalindrome(string s)
{
    int i=0;
    int j=s.size()-1;
    while (i<=j){
      if(isvalid(s[i]) && isvalid(s[j])){
        if (convert(s[i]) != convert(s[j])) {
          return false;
        } 
        else {
          i++;
          j--;
        }
      }
      if(isvalid(s[i])==false){
          i++;
      }
      if(isvalid(s[j])==false){
          j--;
      }
    }
    return true;
}
int main(){
    string s ;
    cin>>s;
    if (checkPalindrome(s))
    {
        cout<<"this is a pallindrome"<<endl;
    }
    else{
        cout<<"not pallindrome"<<endl;
    }
    
}