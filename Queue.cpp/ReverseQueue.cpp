#include<iostream>
#include<bits/stdc++.h>
#include<queue>
#include<stack>
using namespace std;
void reversequeue(queue<int>&q){
    stack<int>s;
    //put all elements of queue in stack;
    while(!q.empty()){
        int element=q.front();
        q.pop();
        s.push(element);
    }
    //put all element from stack into queue;
    while(!s.empty()){
        int element=s.top();
        s.pop();
        q.push(element);
    }

}
void reversequeuerecursion(queue<int>&q){
    if(q.empty()){
        return;
    }
    int temp=q.front();
    q.pop();
    reversequeuerecursion(q);
    q.push(temp);

}
void reverseK(queue<int>&q,int k){
    stack<int>s;
    int count = 0;
    int n=q.size();
    if(k<=0||k>n){
        return;
    }

    while(!q.empty()){
        int temp=q.front();
        q.pop();
        s.push(temp);
        count++;
        if(count==k){
            break;  
        }
    }
    while(!s.empty()){
        int temp=s.top();
        s.pop();
        q.push(temp);

    }
    count=0;
    while(!q.empty() && n-k!=0){
        int temp=q.front();
        q.pop();
        q.push(temp);
        count++;
        if(count==n-k){
            break;
        }
    }
    
}
void interleavequeue(queue<int>&q){
    int n=q.size();
    int k=n/2;
    int count=0;
    queue<int>q2;
    while(!q.empty()){

        int temp=q.front();
        q.pop();
        q2.push(temp);
        count++;
        if(count==k){
            break;
        }

    }
    //interleaving start
    while(!q.empty() && !q2.empty()){
        int first=q2.front();
        q2.pop();
        q.push(first);
        int second=q.front();
        q.pop();
        q.push(second);

    }
    if(n&1){
        int element=q.front();
        q.pop();
        q.push(element);

    }
}
int main(){
    queue<int>q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);
   
    // reversequeue(q);
    // reversequeuerecursion(q);
    // reverseK(q,5);
    interleavequeue(q);
    cout<<"printing reverse queue"<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }



    return 0;
}