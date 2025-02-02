#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;
    bool cheak=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[n-1-i])
        {
            cheak=0;
            break;
        }
    }
    if(cheak==1){
        cout<<" The word is a pelindromic.\n";
    }
    else{
        cout<<"The word is not a pelindromic.\n";
    }
    return 0;
}
