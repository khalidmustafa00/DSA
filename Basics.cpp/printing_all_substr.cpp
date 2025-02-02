#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=n-i;j>=1;j--){
            cout<<s.substr(i,j)<<endl;
            count++;
        }
    }
    cout<<count<<endl;
    
    return 0;
}