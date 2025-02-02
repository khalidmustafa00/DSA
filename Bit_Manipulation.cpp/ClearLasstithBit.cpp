#include<iostream>
using namespace std;
int  solve(int &n,int i){
    int mask=(-1<<i);
    n=n&mask;
    return n;
}
int main(){
    int n;
    cin>>n;
    int ans=solve(n,2);
    cout<<ans<<endl;
    return 0;
}