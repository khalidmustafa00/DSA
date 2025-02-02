#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    //properties;
    int *arr;
    int top;
    int size;
    //constructor
    Stack(int size){
        arr=new int[size];
        this->size=size;
        top=-1;
    }
    //behaviour;
    void push(int data){
        if(size-top>1){
            top++;
            arr[top]=data;
        }
        else{
            cout<<"Stack overflow. "<<endl;
        }

    }
    void pop(){
        if(top==-1){
            //stack is empty
            cout<<"stack underflow can't delete element "<<endl;
        }
        else{
            //stack is not empty
            top--;

        }

    }
   
    int gettop(){
        if(top==-1){
            cout<<"there is no element in "<<endl;
        }
        else{
            return arr[top];
        }

    }
    int getsize(){
        return top+1;

    }
    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }

    }

};
int main(){
    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    while(!s.isempty()){
        cout<<s.gettop()<<" ";
        s.pop();
    }
    cout<<endl;
    cout<<s.getsize()<<endl;
    return 0;

}
