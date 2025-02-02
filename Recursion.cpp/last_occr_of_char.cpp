#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int solve(string &s,int i,int &ans, char x){
    if(i>=s.length()){
        return 0;
    }
    if(s[i]==x){
        ans=i;
    }
    solve(s,i+1,ans,x);
    return ans;

}


int main(){
    string s;
    cin>>s;
    char x;
    cin>>x;
    int ans=-1;
    int i=0;
    
    solve(s,i,ans,x);
    cout<<ans<<endl;
}