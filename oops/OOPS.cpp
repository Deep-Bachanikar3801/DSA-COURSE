//oops
//Technique or paradine which revolves around object
//object---> entity having   1)state  
//                           2)behavier
//real world objects closer to programme to increase readablity managibility and extensibility
// game --->hero--->   // properties-->name -->Health --->level
                       //  behavior--> defense attack dance

// class and objects
//class: (user defined datatype)---> hero ramesh   ;   ---> hero =object(instance of class )
//int a;
//string str;
#include<iostream>
#include<bits/stdc++.h>
// #include "hero.cpp"
using namespace std;

class Hero{
    //properties
    public:
    char name[100];
    int health;
    char level;

};
int main(){
//   creation of object;
  Hero Ramesh; //instance of class 
//   cout<<sizeof(h1);
  //incase of empty class 1 byte of memory is alloted
// access datamembers---> '.' operater
Ramesh.health=70;
Ramesh.health='A';
cout<< "health is "<<Ramesh.health<<endl;
cout<< "Level is "<<Ramesh.level<<endl;
}
//class--> template 
//access modifiers --->default private 
//public--> accessed outside class
//private -->can be accesed inside the class
//protected--->  