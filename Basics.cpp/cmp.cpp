#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
bool cmp(char first,char second){
   return  first>second;
    //first>second means it is true and take first element 
}
int main(){
    string s="abcd";
    sort(s.begin(),s.end(),cmp);
    cout<<s<<endl;
    return 0;
}