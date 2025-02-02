#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//if one athlete A runs 1m and at the same time another athlete B runs 2m then at
//the end of marathan A have runned half of B;
//this algorithm based of this logic;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(node* &head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int getlength(node *head){
    int len=1;
    node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;

}
node* reversinginkgroup(node* &head,int k){
    if(head==NULL){
        cout<<"LL isempty"<<endl;
        return NULL;
    }
    int len=getlength(head);
    if(k>len){
        //cout<<"Enter valid k"<<endl;
        return head;
    }
    node* prev=NULL;
    node* curr=head;
    node* forward=curr->next;
    int count=0;
    while(count<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }
    if(forward!=NULL){
        head->next=reversinginkgroup(forward, k);

    }
    return prev;
}
int main(){
    node* first=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    node* fourth=new node(40);
    node* fifth=new node(50);
    node* sixth=new node(60);
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=NULL;
    cout<<"printing LL data"<<endl;
    print(first);
    cout<<endl;
    cout<<getlength(first)<<endl;
    first=reversinginkgroup(first,2);
    print(first);
    return 0;






}