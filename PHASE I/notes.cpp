#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int hundread,fifty ,twenty,ten ,one ,remainder=0;
    switch (1)
    {
    case 1 :hundread=n/100;
          remainder=n%100;
          cout<<"rs 100="<<hundread<<endl;
      case 2 :fifty=remainder/50;
          remainder=remainder%50;
          cout<<"rs 50="<<fifty<<endl;    
      case 3:twenty=remainder/20;
          remainder=remainder%20;
          cout<<"rs 20="<<twenty<<endl;    
      case4: ten=remainder/10;
          remainder=remainder%10;
          cout<<"rs 10="<<ten<<endl;
        case 5:one=remainder/1;
          remainder=remainder%1;
          cout<<"rs 1="<<one<<endl;
        break;
    default:
        cout<<"enter amount !!!";
    }
}