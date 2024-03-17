#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//recursion-->
//book--> when a function calls itself it is called reccursion
//        solve(){  
//    solve(n);
//       }
//complex problem solution depends on  solution of small problem of same type then we will use recursion
//ex 2^n-->2*2^(n-1);
//f(n) = 2* f(n-1);  recursive relation
//2^0== base case / base ccondition
// 5!= 5*4*2*1 == 5*4! =n*(n-1)!
//f(n)= n* f(n-1)!
//0! --> base condition / base case

//mandatory
//1 base case --> return mandatory 
//2 recursive relation 
//3 processing 
//need a base case to stop the prograamme  //return for base case
//need recurive relation
// tail recursion -->  fun(){                   head recursion-->   fun(){
//                    base case;                                           base case;    
//                    processing                                           recursive relation;
//                    recursive relation                                   processing;
//                   }                                                  }
int factorial(int n){

if(n==0){ return 1;}//base case if not present it will get into infinite loop till function call stack is overflow then will return segemntation fault
//recursion tree
//n=4-->call3-->call 2--call1--call0-->basetrue retuern 1-->call 1-->return 1--> call 2 -->return 2--> call 3-->return 6 -->call 4 ---> returns "24";
int ans= n * factorial(n-1);
return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
}