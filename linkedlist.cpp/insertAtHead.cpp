#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(){
        this->data=0;
        this->next=NULL;
    }
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertathead(node* &head,int data){
    node *newnode=new node(data);
    newnode->next=head;
    head=newnode;

}
void print(node* &head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    //assuming that already present a node in the head;
    node* head=NULL;
    //node* head=new node(10);
    insertathead(head,70);
    insertathead(head,20);
    insertathead(head,30);
    insertathead(head,40);
    insertathead(head,50);
    insertathead(head,60);
   
    cout<<"printing LL data"<<endl;
    print(head);
}