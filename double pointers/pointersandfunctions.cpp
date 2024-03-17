#include<iostream>
#include<bits/stdc++.h>
using  namespace std;
void update(int **p){
   // p=p+1; //no change  //pass by value

    // *p=*p+1;  //changes the address stored by the pointer pointed by double pointer //updates first pointer

    **p=**p+1;//updates the main value pointed by double pointer
}
int main(){
  int i=5;
  int*p=&i;
  int**q=&p;  

  cout<<"before "<<i<<endl;
  cout<<"before "<<p<<endl;
  cout<<"before "<<q<<endl;

  update(q);
   cout<<"after "<<i<<endl;
  cout<<"after "<<p<<endl;
  cout<<"after "<<q<<endl;
  /*
MCQS answers 
1.8 9  correct
2.6    false correct answer 7 == *p=&i *q=p  both pointers are pointed to i
3.8 9  correct
4. error correct
5. 11 13 correct
6.21.5 21.5 21.5  correct
7.20 8/4 correct
8.11 21  correct
9. starting location of address of first element block  correct
10.adress of 1th index. correct
11.31  correct
12.11 14 correct
13.11  false correct answaer = error // cant upadte the values in symbol table hence arr++ /arr=arr+1 is not possible because arr points to address of starting index of array
14.b correct
15.abcde correct cout functioning different
16.error /bcde   partially correct
17.b b correct
18. 20 correct
19. 111 119  correct
20.101 101  false 102 101 correct
21.111 correct
18/21
  */
}