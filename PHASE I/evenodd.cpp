#include<iostream>
using namespace std;
bool iseven(int n){
    if (n&1)
    {
        return 0;
    }
    return 1;
}
int main(){
    int a;
    cin>>a;
if(iseven(a)){
    cout<<"even";

}
else{cout<<"odd";}

}