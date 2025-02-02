#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){  
    vector<int>a{
        1,2,3,4,5
    };
    vector<int>a1{
        2,4,5,7,
    };
    
    vector<int>ans;
    int carry=0;
    int i=a.size()-1;
    int j=a1.size()-1;
    while(i>=0 && j>=0){
        int x=a[i]+a1[j]+carry;
        int digit=x%10;
        ans.push_back(digit);
        carry=x/10;
        i--;j--;
    }
     while(i>=0){
        int x=a[i]+0+carry;
        int digit=x%10;
        ans.push_back(digit);
        carry=x/10;
        i--;
    }
     while(j>=0){
        int x=a1[j]+0 + carry;
        int digit=x%10;
        ans.push_back(digit);
        carry=x/10;
        j--;
    }
    if(carry){
        ans.push_back(carry);
    }
    for(auto v:ans){
        cout<<v<<" ";
    }
    cout<<endl;
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
   
    return 0;
}