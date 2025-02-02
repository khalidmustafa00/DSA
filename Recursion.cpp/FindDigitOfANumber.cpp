#include<iostream>
using namespace std;
void solve(int n){
    if(n==0){
        return;
    }
    solve(n/10);
    int digit=n%10;
    cout<<digit<<", ";
}
int main(){
    int n=987086;
    solve(n);
    return 0;
}