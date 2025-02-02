#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int checkKey(string s,int n,int i,int key){
    if(i>=n){
        return -1;
    }
    if(s[i]==key){
        return i;
    }
    return checkKey(s,n,i+1,key);
}
int main(){
    string s="khalid";
    char key;
    cin>>key;
    int n=s.length();
    int i=0;
    int ans=checkKey(s,n,i,key);
    cout<<ans<<endl;
    return 0;
}