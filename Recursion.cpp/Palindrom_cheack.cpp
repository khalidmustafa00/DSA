#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool solve(string &s,int i,int n){
    if(i==n){
        return true;
    }
    if(s[i]!=s[n]){
        return false;
    }
    solve(s,i+1,n-1);
    
}
int main(){
    string s;
    cin>>s;
    cout<<solve(s,0,s.size()-1);

}