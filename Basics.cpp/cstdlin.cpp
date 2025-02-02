#include<iostream>
#include<cstdlib>
using namespace std;
int add(int n1,int n2){
    int sum=n1+n2;
    return sum;
}
int sub(int n1,int n2){
    int sub=abs(n1-n2);
    return sub;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    cout<<sub(a,b)<<endl;
    return 0;
}
