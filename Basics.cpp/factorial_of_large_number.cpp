#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>ans;
    ans.push_back(1);
    int c=0;
    for(int i=2;i<=n;i++){
        for(int j=0;j<ans.size();j++){
            int x=ans[j]*i+c;
            ans[j]=x%10;
            c=x/10;


        }
        while(c){
        ans.push_back(c%10);
        c/=10;
    }

    }
   
   
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i];
    }
    

    
    return 0;
}