#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
void solve(string str){
    int n=str.length();
    vector<string>ans;
    //1<<n gives us 2 to the power n;
    for(int i=0;i<(1<<n);i++){
        string temp="";
        for(int j=0;j<n;j++){
            char ch=str[j];
            if(i&(1<<j)){
                temp.push_back(ch);
            }
        }
        if(temp.length()>0){
            ans.push_back(temp);
        }

    }
    for(auto i:ans){
        cout<<i<<",";
    }
}
int main(){
    string str="abc";
    solve(str);
    return 0;
}