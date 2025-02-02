#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int numberOfDigit(int n){
    int count=0;
    while(n>0){
        n%10;
        n/=10;
        count++;
    }
    return count;
}
int main(){
    long long n;
    cout<<"Enter any number."<<endl;
    cin>>n;
    vector<int>a(numberOfDigit(n));
    for(int i=a.size()-1;i>=0;i--){
        a[i]=n%10;
        n/=10;
    }

    for(auto value:a){
        cout<<value<<" ";
    }

    return 0;
}