#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    while(n!=0){
        if (n&1){  //as 1&1 comndition holds true this statement will execute
            count++;
        }
       n= n>>1;
    }
cout<<count;
}