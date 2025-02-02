#include<iostream>
using namespace std;
void solve(string &s,int i,int j){
    if(i>=j){
        return ;
    }
    swap(s[i],s[j]);
    solve(s,i+1,j-1);
   
    
}
int main(){
    string s;
    cin>>s;
    int i=0;
    int j=s.length()-1;
    solve(s,i,j);
    cout<<s<<endl;
    

}