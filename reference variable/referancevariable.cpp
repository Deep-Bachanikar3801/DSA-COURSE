#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void update (int n){
    n++;//pass by value  //creates new mwmory //copy of n
}
void update2 (int &n ){
    n++;//pass by reference  same memory
}
// int &function (int n){
//     int num=n;
//     int &ans=num;  bad practise 
//     return ans;   
// }
int main(){
    // int i=5;//same meomory different name --> reference variable 
    // //create a referance variable
    // int &j =i;
    // //will access same meomory block of I
    // cout<<i << endl;
    // i++;
    // cout<<i <<endl;
    // j++;
    // cout<<i<<endl; 
    // cout<<j << endl;

    // //&j is a referance variable here 
    // //same meomory different name 
    // functions --> main ()--> before n=5 after update =5 //               update ()n=n+1; n=6  pass by value //copy of n

int n=5;
cout<<"before "<<n<<endl;
update2(n);
cout<<"after "<<n<<endl;
//pass by reference 
//a(n)---->b(&n)   same meomry  in both functions 

//function(n);
}