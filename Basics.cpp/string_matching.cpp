#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1;
    cout<<"Enter the string: "<<endl;
    cin>>str1;
    string str2;
    cout<<"Enter another string"<<endl;
    cin>>str2;
    int i=0;
    int j=1;
    int n=str2.size();
    vector<int>lps(n,0);
    while(j<n){ 
        if(str2[i]==str2[j]){
            i++;
            lps[j]=i;
            j++;
        }
        else{
            if(i==0){
                lps[j]=0;
                j++;
            }
            else{
                i=lps[i-1];
            }
        }
    }
     i=0;
     j=0;
    while(j<n &&i<str1.size()){
        if(str1[i]==str2[j]){
            i++;
            j++;
        }
        else{
            if(j==0){
                i++;
            }
            else{
                j=lps[j-1];
            }
            
        }
    }
   if(j==n){
    cout<<i-j<<endl;
   }
   else{
    cout<<-1<<endl;
   }
}