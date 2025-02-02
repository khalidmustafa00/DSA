#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(55);
    cout<<"Size of Queue: "<<q.size()<<endl;
    q.pop();
     cout<<"Size of Queue: "<<q.size()<<endl;
     if(q.empty()){
        cout<<"queue is empty "<<endl;
     }
     else{
        cout<<"queue is not empty "<<endl;
     }
    cout<<"front element is "<<q.front()<<endl;
    return 0;
}
