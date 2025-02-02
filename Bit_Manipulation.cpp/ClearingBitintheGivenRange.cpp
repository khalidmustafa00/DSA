#include<iostream>
using namespace std;
void solve(int n,int i,int j){
    int a=(-1<<(i+1));
    int b=(1<<j)-1;
    int mask=a|b;
    n=n&mask;
    cout<<n<<endl;

}
int main(){
    solve(15,2,1);
    return 0;
}