#include<iostream>
using namespace std;
int max(int x,int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int i=max(a,b);
    int j=max(c,d);
    int greatest=max(i,j);
    cout<<greatest<<endl;
    return 0;
}