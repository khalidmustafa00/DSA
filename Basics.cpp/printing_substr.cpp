#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            cout<<s.substr(i,j)<<endl;
            //s.substr is a function which gives us sds if
            //we pass i=starting index and j=length of substring;
            //s.substr(start,length);
        }
    }
    
    return 0;
}