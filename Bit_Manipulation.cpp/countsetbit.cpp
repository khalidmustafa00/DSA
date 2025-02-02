#include<iostream>
using namespace std;
int countsetbitFast(int n){
    int count=0;
    while(n!=0){
        n=(n&(n-1));
        count++;
        
    }
    return count;
}
int countsetbit(int n){
    int count=0;
    while(n!=0){
        int lastBit=n&1;
        if(lastBit){
            count++;
        }
        n=n>>1;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int ans1=countsetbitFast(n);
    cout<<"1->"<<ans1<<endl;
    int ans=countsetbit(n);
    cout<<"2->"<<ans<<endl;
}