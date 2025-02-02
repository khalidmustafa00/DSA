#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    stack<char>s;
    for(int i=0;i<str.size();i++){
        s.push(str[i]);

    }
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }

}