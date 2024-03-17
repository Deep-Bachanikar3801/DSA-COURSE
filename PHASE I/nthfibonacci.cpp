#include<iostream>
using namespace std;
int fibo(int n){
    int a= 0;
    int b= 1;
    int c=0;

      
    if (n == 0)
        return a;
    for (int i = 1; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main(){
    int a;
    cin>>a;
    cout<<fibo(a);
}