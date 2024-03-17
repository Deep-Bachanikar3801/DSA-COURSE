#include<iostream>
#include<stack>
using namespace std;
// first in last out
int main(){
    stack<string>s;

    s.push("deep");
    s.push("Bachanikar");
    s.push("3801");

    cout<<"top element  "<<s.top()<<endl;
    s.pop();
     cout<<"top element  "<<s.top()<<endl;

     cout<<"size of stack"<<s.size()<<endl;
     cout<<"empty or not"<<s.empty()<<endl;

}