#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//123 +23=  146

void reverse(vector<int>&ans){
    int i=0;
    int j= ans.size()-1;
    while(i<=j){
        swap(ans[i],ans[j]);
        i++;
        j--;
    }
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	vector<int> ans;
    int i=a.size()-1;

    int j=b.size()-1;

    int carry=0;

    while(j>=0&&i>=0){
        int sum = a[i]+b[j]+carry;
        carry = sum/10;
        sum= sum%10;
        ans.push_back(sum);
          i--;
          j--;
    }

    while (i >= 0) {
         int sum = a[i] + carry;
          carry = sum / 10;
          sum = sum % 10;
          ans.push_back(sum);
          i--;
    }
    while(j>=0){
       int sum = b[j] + carry;
          carry = sum / 10;
          sum = sum % 10;
          ans.push_back(sum);
          j--;
    }
    while(carry!=0){
       int  sum = carry;
          carry = sum / 10;
          sum = sum % 10;
          ans.push_back(sum);
          j--;
    }

   reverse(ans);

return ans;

    
}