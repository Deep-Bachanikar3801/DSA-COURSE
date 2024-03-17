// conditionals ==if then  Descision making box 
#include<iostream>
using namespace std;
int main(){
//     // int n ;
//     // cin>>n;  //input 
//     // if (n>0)
//     // {
//     //       cout<< "A is positive "<< endl;

//     // }
//     // else{
//     // cout<<"A is negative "<<endl;
// // // }
// // int a;
// // cout<<"enter the value of A" <<endl;
// // cin>>a;  //cin.get(); gets char and takes tabs into inputs 
// // // //cin doesent read " ", "\t", "\n"
// // // /*if (a>b)
// // // {
// // //     cout<<"A is greater "<<endl;
// // // }
// // // else
// // // {
// // //     cout<<"B is greater "<<endl;
// // // }
// // // */
// // // if (a>0)
// // // {
// // //     cout<<"A is postive "<<endl;
// // // }
// // // else
// // // {
// // //     if (a<0)
// // //     {
// // //         cout<<"A is negative"<<endl;
// // //     }
// // //     else 
// // //     {
// // //         cout<<"A is zero"<<endl;
// // //     }
    
    
// // }

// // Homework 
// // char ab;
// // cout<<"enter the character ";
// // cin>>ab;

// // if (ab>=65&&ab<=90)
// // {
// //     /* code */cout<<"this is Uppercase"<<endl;

// // }
// // else if (ab>=97&&ab<=122)
// // {
// //     cout<<"this is lowercase "<<endl;
// // }
// // else
// // {
// //     if (ab>=47&&ab<=58)
// //     {
// //         cout<<"this is numeric "<<endl;
// //     }
    
// // }


// //looping
// //while loop
// // int a ;
// // cin>>a;
// // int i=1;
// // int sum=0;
// // while (i<=a)
// // {
// //     sum=sum+i;
// //     i++;
// // }
// // cout<<sum<<endl;

// //sum of even numbers from 1 to n 
// //  int n ;
// //  cin>>n;
// //  int i =1;
// //  int sum =0;
// //  while(i<=n){
// //     if (i%2==0)
// //     {
// //        sum=sum+i;
// //     }
// //     i++;
// //     }
// //  cout<<sum<<endl;

// // prime or not 

// //  int n;
// //  cin>>n;
// //  int i=2 ;
// //  while (i<n)
// //  {
// //     if (n%i==0)
// //     {
// //       cout<<i<<"Not prime "<<endl; 

// //     }
// //     else{cout<<i<<"prime"<<endl;}
// //     i++;
// //  } 
 
// //  //patterns     ****             row = columns 
// //                 ****             
// //                 ****
// //  int n;
// //  cin>>n;

// //  int i=1;
// //  while (i<=n)
// //  {
// //     int j =1;
// //     while (j<=n)
// //     {
// //         cout<<"*";
// //         j++;
// //     }
// //     cout<<endl;
// //     i++;
    
// //  }
 
// //  //pattern 2    111              column = row number 
// //                 222                 j   =  i
// //                 333                  n   = 3
// // 

// // int n;
// // cin>>n;
// // int i=1;
// // while(i<=n)
// // {
// //     int j= 1;
// //     while (j<=n)
// //     {
// //         cout<<i<<" ";
// //         j++;
// //     }

// //     cout<<endl;
// //     i++;
// // }

// // // Pattern 3     1234        i=j
// //                  1234        n=4 
// //                  1234        i = row 
// //                  1234        j= col
// // int n;
// // cin>>n;
// // int i =1;
// // while (i<=n)
// // {
// //     int j=1;
// //     while (j<=n)
// //     {
// //         cout<<j<<" ";
// //         j++;
// //     }
// //     cout<<endl;
// //     i++;
// // }


// //pattern 3         321        rows = colums 
//                 //  321          cout in j = n-j+1  
//                 //  321 n=3

// // int n;
// // cin>>n;
// // int i=1;
// // while (i<=n)
// // {
// //     int j =1 ;
// //     while (j<=n)
// //     {
// //         cout<<(n-j+1);
// //         j++;
// //     }
// //     cout<<endl;
// //     i++;
// // }

// // //pattern 4   123   n=3      rows = columns 
// //               456               printing count
// //               789
// // int n;
// // cin>>n;
// // int i =1;
// // int count=1;
// // while(i<=n){
// //     int j=1;
// //     while(j<=n){
// //         cout<<count;
// //         j++;
// //         count++;
// //     }
// //     cout<<endl;
// //     i++;
    
// // }

// //pattern 5      *        n=3
//           //     **       row = i = n
//           //     ***     col= j= i number 

// // int n;
// // cin>>n;
// // int i=1;
// // while(i<=n)
// // {
// //     int j=1;
// //     while(j<=i){
// //         cout<<"*";
// //         j++;
// //     }
// //     cout<<endl;
// //     i++;
// // }


// // // pattern 6    1        n=3   i =3   j = <i
// //                 22
// //                 333
// // int n;
// // cin>>n;
// // int i=1;
// // while (i<=n)
// // {
// //     int j=1;
// //     while (j<=i)
// //     {
// //         cout<<i;
// //         j++;
// //     }
// // cout<<endl;
// // i++;    
// // }

// // // pattern 7    1   n=3 i=3 j<=i count               
// //                 23
// //                 456
//             // int n;
//             // cin>>n;
//             // int i=1;
//             // int count=1;
//             // while(i<=n){
//             //     int j=1;
//             //     while (j<=i){
//             //         cout<<count;
//             //         j++;
//             //         count++;
//             //     }
//             //     cout<<endl;
//             //     i++;
//             // }
//             // int n;
//             // cin>>n;
//             // int i=1;
//             // while (i<=n)
//             // {
//             //     int j=1;
//             //     int value =i;
//             //     while (j<=i)
//             //     {
//             //         cout<<value;
//             //         value++;
//             //          j++;
//             //     }
//             //     cout<<endl;
//             //     i++;
//             // }
            
    
// // int n;
// // cin>>n;
// // int i=1;
// // while (i<=n)
// // {
// //     int j=1;
// //     while (j<=i)
// //     {
// //         cout<< i+j-1;
// //         j++;

// //     }
// //     cout<<endl;
// //     i++;

    
// // }

// //pattern 8        1                n=3 i=3 j<=i
// //                 2 1                i -j +1
// //                 3 2 1

// // int n;
// // cin>>n;
// // int i =1;
// // while(i<=n){
// //     int j=1;
// //     while (j<=i)
// //     {
// //         cout<<i-j+1;
// //         j++;
// //     }
// //     cout<<endl;
// //     i++;
// // }

// //pattern 9   a a a    n= 3      i=j
// //            b b b    A+i-1
// //            c c c
// // int n;
// // cin>>n;
// // int i=1;
// // while (i<=n)
// // {
// //     int j=1;
// //     while (j<=n)
// //     {   
// //         char ch = 'a'+i-1;
// //         cout<< ch;
// //         j++;
// //     }
// //     cout<<endl;
// //     i++;
    
// // }

// //pattern 10    abc           a+j-1
// //              abc 
// //              abc 

// // int n;
// // cin>>n;
// // int i=1;
// // while (i<=n)
// // {
// //     int j=1;
// //     while (j<=n)
// //     {  char ch ='a'+j-1;
// //        cout<<ch;
// //        j++;
// //     }
// // cout<<endl;
// // i++;    
// // }

// //pattern 11       ABC
// //                 DEF
// //                 GHI

// // int n;
// // cin>>n;
// // int i=1;
// // char count = 'A';
// // while (i<=n)
// // {
// //      int j= 1;
// //      while (j<=n)
// //      {
// //         cout<<count;
// //         j++;
// //         count++;
// //      }   
// //          i++;
// //          cout<<endl;

// // }
 
//    // pattern 12     A B C       i+j-1=1  -->A
// //                   B C D       adding A-1 on both sides 
// //                   C D E       i+j-1+a-1=1+a-1 --->  i+j-2+a=a

// // int n;
// // cin>>n;
// // int i=1;
// // while (i<=n)
// // {
// //     int j=1;
// //     while (j<=n)
// //     {   char ch ='A'+i+j-2;
// //         cout<< ch;
// // //         j++;
// // //     }
// // //     cout<<endl;
// // //     i++;
// // // }
// // // pattern 13       a             n=3 
// // //                  bb             'a'+i-1
// // //                  ccc
// // int n;
// // cin>>n;
// // int i=1;
// // while (i<=n)
// // {
// //     int j=1;
// //     while (j<=i)
// //     {
// //         char ch='a'+i-1;
// //         cout<<ch;
// //         j++;
// //     }
// // cout<<endl;
// // i++;

// // }

// // Pattern 14   a
// //              bc
// //              def

// // int n;
// // cin>>n;
// // int i=1;
// // char ch ='a';
// // while (i<=n)
// // {
// //     int j=1;
// //     while (j<=i)
// //     {
// //         cout<<ch;
// //         ch++;
// //         j++;
// //     }
// //     cout<<endl;
// //     i++;
// // }

//     // //   Pattern 15         D                    n=4   i=n    j<=i
//     //                         C d                  "A"+n-i+j-1
//     //                         B C d
//     //                         A B C D

//     // int n;
//     // cin>>n;
//     // int i=1;
//     // while (i<=n)
//     // {
//     //     int j=1;
//     //     while (j<=i)
//     //     {
//     //        char ch = 'A'+n-i+j-1;
//     //        cout<<ch;
//     //        j++;
//     //     }
//     //     cout<<endl;
//     //     i++;

//     // }

// // //    Pattern 16       a
// //                        bc        starting character  char ch='A'+i+j-2;  increment it.
// //                        cde 
// //                        def

// // int n;
// // cin>>n;
// // int i =1;
 
// // while (i<=n)
// // {
// //     int j=1;
// //     char ch='A'+i+j-2;
// //     while (j<=i)
// //     {
        
// //         cout<<ch;
// //           ch++;
// //           j++;

// //     }
// //     cout<<endl;
// //     i++;

// // }


// //  pattern 17     ABC          N=i+j-2
// //                 BCD          starting element  start ++
// //                 CDE
// //                 

// // int n;
// // cin>>n;
// // int i=1;
// // while (i<=n)
// // {
// //      int j= 1;
// //      char ch = 'A'+i+j-2;
// //      while (j<=n)
// //      {   
// //         cout<<ch;
// //         ch++;
// //         j++;
// //      }
// //      cout<<endl;
// //      i++;
// // }

int n;
cin>>n;
// // int i =1;
// // while (i<=n)
// // {
// //     int space = n-i;
// //     while (space)
// //     {
// //         cout<<" ";
// //         space--;
// //     }
// //   int j=1;
// //   while (j<=i)
// //    {
// //      cout<<"*";
// //      j++;
// //    }
// // cout<<endl;
// // i++;
// // }

// // pattern 18            ****         Space = n-i+3;
// //                        ***
// //                         **
// //                          *




// int i=1;
// while (i<=n)
// {
//     int space= i-1;
//     while(space){
//             cout<<" ";
//          space--;
//     }
//     int star =n-i+1;
//     while(star){
//         cout<<"*";
//         star--;
//     }
//     cout<<endl;
//     i++;
// }
// //        1
//          12
//         123 

// int i=1;
// while (i<=n)
// {   int count =1 ;
//     int space= n-i;
//     while(space){
//         cout<<" ";
//         space--;
//     }
 
//     int j=1;
//     while (j<i)
//     {    
//         cout<<count;
//         count++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
//     i++;

//   pattern 19 //       1
                //     2 3
                //   4 5 6

// int i=1;
// int num=1;
// while (i<=n)
// {
//      int space=n-i;
//      while (space)
//      {
//         cout<<" ";
//         space--;
//      }
//      int j=1;
//      while (j<=i)
//      {
//         cout<<num;
//         num++;
//         j++;
//      }
//      cout<<endl;
//      i++;
// // }
//             111
//              22
//               3





}
