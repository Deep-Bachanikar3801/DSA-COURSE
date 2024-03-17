#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(char ch[] , int l){
    int i=0;
    int j= l-1;
    while (i<=j)
    {
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}
int length(char ch[]){
    int count=0;
    for (int i = 0; ch[i] !='\0' ; i++)
    {
        count++;
    }
    return count;
    
}
int main(){
    char ch[10];
    cin>>ch;
    cout<<length(ch)<<endl;

    reverse(ch,length(ch));

    cout<<ch;

}