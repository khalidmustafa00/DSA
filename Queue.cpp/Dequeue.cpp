#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;
class Dequeue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    Dequeue(int size){
        arr=new int[size];
        front=-1;
        this->size=size;
        rear=-1;
    }
    void pushrear(int data){
       //queue full

       //single element case ->first element

       //circular nature

       //normal flow

       if(front==0 && rear==size-1){
        cout<<"Q is full cannot insert "<<endl;
        return;
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
    void pushfront(int data){
         if(front==0 && rear==size-1){
        cout<<"Q is full cannot insert "<<endl;
        return;
       }
       else if(front==-1){
        front=rear=0;
        arr[front]=data;
       }
       else if(front==0 && rear!=size-1){
        front=size-1;
        arr[front]=data;
       }
       else{
        front --;
        arr[front]=data;
       }

    }
     void popfront(){
        //cheack empty
        if(front==-1){
            cout<<"Q is empty cannot pop "<<endl;
            return;
        }
        else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
            

        }
        else if(front==size-1){
            arr[front]=-1;
            front=0;
        }
        else{
            arr[front]=-1;
            front++;
        }
        
    }
     void poprear(){
        //cheack empty
        if(front==-1){
            cout<<"Q is empty cannot pop "<<endl;
            return;
        }
        else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
            

        }
        else if(rear==0){
            arr[rear]=-1;
            rear=size-1;
        }
        else{
            arr[rear]=-1;
            rear--;
        }
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){
    Dequeue dq(10);
    dq.pushrear(10);
    dq.pushrear(20);
    dq.pushrear(30);
    dq.pushrear(40);
    dq.pushrear(50);
    dq.pushrear(60);
    dq.pushrear(70);
    dq.pushrear(80);

    dq.print();
    dq.poprear();
    dq.print();
    dq.popfront();
    dq.print();
    return 0;
}