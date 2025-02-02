#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a1{1,2,3,4};
    vector<int>a2{2,4,7,8};
    vector<int>a3;
    for(int i=0;i<a1.size();i++){
        a3.push_back(a1[i]);
    }
    for(int i=0;i<a2.size();i++){
        a3.push_back(a2[i]);
    }
    for(int i=0;i<a3.size();i++){
        cout<<a3[i]<<" ";
    }


    return 0;
}