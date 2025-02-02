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
node* reverse(node* &head){
    node* prev=NULL;
    node* curr=head;
    node* forward=curr->next;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;

}
bool cheakpalindrome(node* head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return true;
    }
    if(head->next==NULL){
        return true;
    }
    //finding middle of LL;
    node* slow=head;
    node* fast=head->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    node* reverseLLkahead=reverse(slow->next);
    slow->next=reverseLLkahead;
    //start comparision
    node* temp1=head;
    node* temp2=reverseLLkahead;
    while(temp2!=NULL){
        if(temp1->data!=temp2->data){
            return false;
        }
        else{
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    return true;

}
int main(){
    node* first=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    node* fourth=new node(30);
    node* fifth=new node(20);
    node* sixth=new node(10);
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=NULL;
    print(first);
    cout<<endl;
     bool ispalindrome=cheakpalindrome(first);
     if(ispalindrome){
         cout<<"LL is palindrome"<<endl;
     }
     else{
         cout<<"LL is not palindrome"<<endl;
     }
    reverse(first);
    print(first);

    return 0;
}