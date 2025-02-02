#include<iostream>
#include<bits/stdc++.h>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_front(5);
    dq.push_front(10);
    dq.push_back(20);
    dq.push_back(30);
    cout<<"size "<<dq.size()<<endl;
    dq.pop_front();
    cout<<"size "<<dq.size()<<endl;
    dq.pop_back();
    cout<<"front: "<<dq.front()<<endl;
    cout<<"back: "<<dq.back()<<endl;
    if(dq.empty()){
        cout<<"dq is empty "<<endl;
    }
    else{
        cout<<"dq is empty "<<endl;
    }
    return 0;
}