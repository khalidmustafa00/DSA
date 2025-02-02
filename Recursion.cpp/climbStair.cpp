#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int climbStair(int n){
    if(n==0 || n==1){
        return 1;
    }
    return climbStair(n-1) +climbStair(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<climbStair(n)<<endl;
    return 0;
}