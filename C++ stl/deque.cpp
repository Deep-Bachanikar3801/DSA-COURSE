#include<iostream>
#include<deque>//doubly ended que  //multiple fixed staatic arrays;
//can use deletion and insertion from both ends;
using namespace std;
int main(){
   deque<int> d;
   d.push_back(1);
   d.push_front(2);
    //   d.pop_back();
   for (int i :d )
   {
      cout<<i<<" ";
   
   }
   cout<<"print first index "<<d.at(1)<<endl;
   cout<<"print first index "<<d.front()<<endl;
   cout<<"print last index "<<d.back()<<endl;
   cout<<"empty or not "<<d.empty()<<endl;
   cout<<"size of deque "<<d.size()<<endl;
   d.erase(d.begin(),d.begin()+1);
}

