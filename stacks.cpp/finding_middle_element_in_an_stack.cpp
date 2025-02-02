#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>&s,int &totalsize){
    if(s.size()==0){
        cout<<"stack is empty "<<endl;
        return;
    }
    if(s.size()==(totalsize/2)+1){
        cout<<"middle element is: "<<s.top()<<endl;
        return;

    }
    int temp=s.top();
    s.pop();
    solve(s,totalsize);
    s.push(temp);

}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    int totalsize=s.size();
    solve(s,totalsize);
   
    
    return 0;
}