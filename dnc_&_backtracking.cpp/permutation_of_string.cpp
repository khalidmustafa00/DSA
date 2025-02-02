#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
void printingpermutation(string &str,int i){
    //base case
    if(i>=str.length()){
        cout<<str<<" ";
        return;
    }
    for(int j=i;j<str.length();j++){
        swap(str[i],str[j]);
         printingpermutation(str,i+1);
         //to recreate original input; 
     swap(str[i],str[j]);
    }
    
}
int main(){
    string str="abc";
    int i=0;
    printingpermutation(str,i);


    return 0;
}
