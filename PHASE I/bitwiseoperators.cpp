//bitwise operators   And &     or |   not ~   xor ^
//operates on bit level

#include<iostream>
using namespace std;

int main(){
    int a= 4;
    int b= 6;

    cout<<"a&b "<<(a&b)<<endl;      // 4=100 & 6=110  =100 =4
    cout<<"a|b "<<(a|b)<<endl;       // 4=100 & 6=110 = 110=6
    cout<<"~a "<<(~a)<<endl;         // 4 =100  ~4='1'11----011  taking 1's complem ent    00---100 2's cpmplement = 1's complement +1=101   most significant bit denotes that the number is negative 101=5 = -5 
    cout<<"a^b  "<<(a^b)<<endl;      // 4=100 ^ 6=110 =010=2

    // << left shift operator
    // 5<<1   left shift 5 once
    // 000000---101<<1
    // 000000--1010 =10


    //>> right shift operator 
    // 5>>2 right shif 5 twice 
    // 0000---101
    // 0000---001=1

    // << />> paddig with zero for positve numbers 
    //        for negative numbers it is compiler dependent


    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;
   
// increment /decremwnt operator 
//   i++   post incremental
//   ++i    pre incremental
//   i--    post decremental
//   --i     pre decrementalt 

int i=7;

cout<<(i++)<<endl;//7
cout<<(++i)<<endl;//9
cout<<(--i)<<endl;//8
cout<<(i--)<<endl; //8
}