#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a1{1,2,4,7,9,8,2,3,3};
    vector<int>a2{3,4,7,5,6,9,2,3};
    vector<int>ans;
    for(int i=0;i<a1.size();i++){
        for(int j=0;j<a2.size();j++){
            if(a1[i]==a2[j]){
                a2[j]=-1;
                ans.push_back(a1[i]);
            }

        }
    }
    //printing answer
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}