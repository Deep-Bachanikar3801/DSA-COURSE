#include<iostream>
#include<queue>
using namespace std;
//first in first out
int main(){
    queue<string>q;


    q.push("deep");
    q.push("Bachanikar");
    q.push("3801");
 cout<<"first element"<<q.front()<<endl;
 q.pop();
 cout<<"first element"<<q.front()<<endl;
 cout<<"size after pop"<<q.size()<<endl;
}