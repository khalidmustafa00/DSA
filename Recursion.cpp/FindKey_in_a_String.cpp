#include<iostream>
using namespace std;
bool solve(string &str,int i,int n,char key){
    if(i==n){
        return false;
    }
    if(str[i]==key){
        return true;
    }
    return solve(str,i+1,n,key);
}
int main(){
    string str="khalid";
    int n=6;
    char key='a';
    int i=0;
    bool ans=solve(str,i,n,key);
    cout<<ans<<endl;
}