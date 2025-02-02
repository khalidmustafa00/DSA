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
void print(node* &head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
node* solve(node* &head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
    node* zerohead=new node(-1);
    node* zerotail=zerohead;
    node* onehead=new node(-1);
    node* onetail=onehead;
    node* twohead=new node(-1);
    node* twotail=twohead;
    node* curr=head;
    while(curr!=NULL){
        if(curr->data==0){
            node* temp=curr;
            curr=curr->next;
            temp->next=NULL;
            zerotail->next=temp;
            zerotail=temp;


        }
        else if(curr->data==1){
            node* temp=curr;
            curr=curr->next;
            temp->next=NULL;
            onetail->next=temp;
            onetail=temp;

        }
        else if(curr->data==2){
            node* temp=curr;
            curr=curr->next;
            temp->next=NULL;
            twotail->next=temp;
            twotail=temp;

        }
        
    }
    //modify one wali list
    node* temp=onehead;
    onehead=onehead->next;
    temp->next=NULL;
    delete temp;
    //modify two wali list
    temp=twohead;
    twohead=twohead->next;
    temp->next=NULL;
    delete temp;
    //join list
    if(onehead!=NULL){
        zerotail->next=onehead;
        if(twohead!=NULL){
            onetail->next=twohead;
        }
    }
    else{
        //one wali list empty hai
        if(twohead!=NULL){
            zerotail->next=twohead;
        }
    }
    //remove zero dummy node
    temp=zerohead;
    zerohead=zerohead->next;
    temp->next=NULL;
    delete temp;
    return zerohead;

}
int main(){
    node* head=new node(1);
    node* second=new node(2);
    node* third=new node(2);
    node* fourth=new node(0);
    node* fifth=new node(0);
    node* sixth=new node(0);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=NULL;
    cout<<"Input LL"<<endl;
    print(head);
    head=solve(head);
    cout<<"output LL"<<endl;
    print(head);




}