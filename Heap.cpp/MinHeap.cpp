#include<iostream>
#include<queue>
using namespace std;
int main(){
    //min heap
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(6);
    pq.push(9);
    pq.push(4);
    pq.push(8);
    cout<<"top element: "<<pq.top()<<endl;
    pq.pop();
    cout<<"Size: "<<pq.size()<<endl;
    if(pq.empty()){
        cout<<"MIN HEAP is empty"<<endl;
    
    }
    else{
        cout<<"MIN HEAp is not empty "<<endl;
    }
    return 0;
}