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
node* getmiddle(node* &head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return head;
    }
    if(head->next==NULL){
        return head;
    }
    node* slow=head;
    node* fast=head;
    while(fast!=NULL){
        
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        

    }
    return slow;
}
int main(){
    node* first=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    node* fourth=new node(40);
    node* fifth=new node(50);
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;
    cout<<"printing LL data"<<endl;
    print(first);
    cout<<endl;
    cout<<"middle of given LL"<<endl;
    cout<<getmiddle(first)->data<<endl;
    return 0;






}