#include<iostream>
using namespace std;
int setbit(int a ){
    int count =0;
    while(a){
    if (a&1==1)
    {
        count++;
     } 
    a=(a>>1);

    }
    return count;
}
int main(){
    int a,b;
    cin>>a>>b;
    int as = setbit(a)+setbit(b);
    cout<<as;
}
    
