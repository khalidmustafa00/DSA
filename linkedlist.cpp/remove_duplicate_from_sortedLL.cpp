#include<iostream>
#include<bits/stdc++.h>
using namespace std;
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
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void removeDuplicate(node* head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return;
    }
    if(head->next==NULL){
        return;
    }
    node* curr=head;
    while(curr!=NULL){
        if(((curr->next!=NULL) && curr->data==curr->next->data) ){
            node* temp=curr->next;
            curr->next=curr->next->next;
            temp->next=NULL;
            delete temp;

        }
        else{
            curr=curr->next;
        }
    }

}
int main(){
    node* head=new node(1);
    node* second=new node(2);
    node* third=new node(2);
    node* fourth=new node(3);
    node* fifth=new node(4);
    node* sixth=new node(4);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=NULL;
    cout<<"Input LL"<<endl;
    print(head);
    cout<<endl;
    removeDuplicate(head);
    cout<<"output LL"<<endl;
    print(head);
}