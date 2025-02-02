#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &a,int s,int e){
    if(e==a.size()){
        return;
    }
    for(int i=s;i<=e;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
   solve(a,s,e+1);

}
void print(vector<int>&a){
    for(int s=0;s<a.size();s++){
        int e=s;
        solve(a,s,e);

    }

}

int main(){
    vector<int>a{1,2,3,4,5};
   
    int s=0;
    int e=s;
   print(a);
    return 0;
    
}