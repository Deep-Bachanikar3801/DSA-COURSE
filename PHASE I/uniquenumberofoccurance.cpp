#include<iostream>
using namespace std;
bool uniqueoccurance(int arr[],int size){
int count=1;
 int k=0;
int ans[k];

for (int i = 0; i < size; i++)
{    
   
    for (int j = i+1; j < size; j++)
    {    
        
        if (arr[i]==arr[j])
        {
        count++;
        k++;
        ans[i]= count;
        }    
        
        else{
           ans[i]= 1;
           k++;
        }
} 
    }    
   


for (int i = 0; i < k; i++)
{
 for (int j= i+1; i < k; i++)
 {
    if (ans[i]==ans[j])
    {
        return 0;
    }
    
 }
 
}

 return 1;
}
int main(){
    int size;
    cin>>size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
bool unique = uniqueoccurance(arr,size);

// if(unique){
//     cout<<"true";
// } 
// else{
//     cout<<"false";
// }
}