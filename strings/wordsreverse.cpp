#include <iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;


int main(){
    string s ={'f','u','c','k',' ','o','f','f'};

    string temp ="";
        int k=0;
    while (k<s.length())
    {
        temp[k]=s[k];
        if(s[k]==' ' ){
            
           int i=0;
           int j = temp.length()-1;
           while (i<=j)
           {
              swap(temp[i],temp[j]);
              i++;
              j--;
           }
          temp[k]=s[k];
            
        }
        if(s[k]=='\0'){
            int i=0;
            int j=temp.length()-1;
            while (i<=j)
           {
              swap(temp[i],temp[j]);
              i++;
              j--;
           }
        }
        k++;
    
    }
    
    cout<<temp;

}