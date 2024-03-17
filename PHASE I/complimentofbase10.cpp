//complement of base 10    i/p 5 ie 101   0/p 010ie 2 
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;           //for n=5   0000000000---101
    int mask=0;      //             0 000--------000
    int m=n;
    while (m!=0)
    {  
        mask=mask<<1;
        mask=mask|1;
        
        m=m>>1;
    }
    int ans = (mask^n);
    cout<<ans;

}


