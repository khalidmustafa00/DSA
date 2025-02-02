#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;
    Stack(int size){
        arr=new int[size];
        this->size=size;
        top1=-1;
        top2=size;
    }
    void push1(int data){
        if(top2-top1==1){
            cout<<"stack over flow in stack 1 "<<endl;
        }
        else{
            top1++;
            arr[top1]=data; 
        }

    }
    void push2(int data){
        if(top2-top1==1){
            cout<<"stack over flow in stack 2 "<<endl;
        }
        else{
            top2--;
            arr[top2]=data;
        }

    }
    void pop1(){
        if(top1==-1){
            cout<<"underflow in stack 1"<<endl;
        }
        else{
            arr[top1]=0;
            top1--;
        }

    }
    void pop2(){
        if(top2==size){
            cout<<"underflow in stack 2"<<endl;
        }
        else{
            arr[top2]=0;
            top2++;
        }

    }
    void print(){
        cout<<endl;
        cout<<"top1: "<<top1<<endl;
        cout<<"top2: "<<top2<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Stack s1(10);
   
    s1.push1(10);
    s1.print();
    s1.push1(20);
    s1.print();
    s1.push1(30);
    s1.print();
    s1.push1(40);
    s1.print();
    s1.push1(50);
    s1.print();

    s1.push2(100);
    s1.print();
    s1.push2(110);
    s1.print();
    s1.push2(120);
    s1.print();
    


    return 0;
}