#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void arrayintersection(int array1[], int m,int array2[],int n){
    int i=0;
    int j=0;

    while (i<m && j<n )
    {
        if(array1[i]<array2[j]){
            i++;
        }
        else if(array1[i]==array2[j]){
            cout<< array1[i];
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    
    
}
int main(){
 int a[1000];
 int m;
 cin>>m;
 int b[1000];
 int n;
 cin>>n;
for (int i = 0; i < m; i++)
{
    cin>>a[i];
}
for (int i = 0; i < n; i++)
{
    cin>>b[i];
}

arrayintersection(a,m,b,n);
}