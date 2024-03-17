#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reachhome(int src,int destination){
    cout<<src<<endl;
    //base case
    if(src==destination){
        cout<<" reached "<<endl;
        return;
    }
    //processing
    src++;
    //recursive relation
    reachhome(src,destination);
}
int main(){
    int destination=10;
    int src=1;
    reachhome(src,destination);
}