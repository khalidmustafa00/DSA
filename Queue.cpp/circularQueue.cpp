#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;
class cirqueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    cirqueue(int size){
        rear=-1;
        front=-1;
        arr=new int[size];
    }
    void push(int data){
       //queue full

       //single element case ->first element

       //circular nature

       //normal flow

       if(front==0 && rear==size-1){
        cout<<"Q is full cannot insert "<<endl;
       }
       else if(front==-1){
        front=rear=0;
        arr[rear]=data;
       }
       else if(rear==size-1 && front!=0){
        rear=0;
        arr[rear]=data;
       }
       else{
        rear++;
        arr[rear]=data;
       }

    }
    void pop(){
        //cheack empty
        if(front==-1){
            cout<<"Q is empty cannot pop "<<endl;
        }
        else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
            

        }
        else if(front==size-1){
            front=0;
        }
        else{
            front++;
        }
    }

};
int main(){
    cirqueue q(10);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.pop();
    
    return 0;
}