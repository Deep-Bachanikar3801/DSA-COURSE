#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
  
  for (int i = 0; i <=31; i++)
  {
    if(n==pow(2,i)){
        cout<<true;
        break;
    }
  }
   return false;
}