#include<iostream>
using namespace std;

//addition and product of digits of the number
int main(){
    int n;
    cin>>n;
    //n%10==gives last digits 
    //n/10==gives remaining digits 
    int prod=1;
    int sum =0;
    while (n!=0)
    {
       int digit =n%10;
       prod=prod*digit;
       sum=sum+digit;

       n=n/10;
    }
    
   int ans= prod-sum;
cout<<ans;
}