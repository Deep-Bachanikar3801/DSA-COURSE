#include<iostream>
using namespace std;
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
int main(){
    int n;
    cin>>n;
    int i =1;
    while (i<=n)
    {
       int num=n-i+1;
       int count=1;
       while (num)
       {
        cout<<count;
        count++;
        num--;
       }

       int star=i-1;
       while (star)
       {
         cout<<"*";
         star--;
       }
        int star2=i-1;
       while (star2)
       {
         cout<<"*";
         star2--;
       }
       int end =n-i+1;
       while (end)
       {
        cout<<end;
        end--;
       }
        
       
        cout<<endl;
        i++;
    }
       
    
}