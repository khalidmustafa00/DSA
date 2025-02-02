#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&s,int target){
    if(s.top()>=target){
        s.push(target);
        return;
    }
    int topElement=s.top();
    s.pop();
    solve(s,target);
    s.push(topElement);
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(8);
    s.push(7);
    s.push(6);
    s.push(5);
    s.push(4);
    int target=9;
    solve(s,target);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}