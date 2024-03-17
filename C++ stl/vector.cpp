#include<iostream>
//vector = dynamic array 
//creates new vector of double size copy older vector and dumps it
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    cout<<"size"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"size"<<v.capacity()<<endl;
     v.push_back(2);
    cout<<"size"<<v.capacity()<<endl;
     v.push_back(3);
    cout<<"capacity"<<v.capacity()<<endl;
     cout<<"size"<<v.size()<<endl;

     cout<<"element at 2nd index is "<<v.at(2)<<endl;
     cout<<"front"<<v.front();
     v.pop_back();
     v.clear();
}