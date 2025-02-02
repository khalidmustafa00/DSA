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
node* solve(node* &head1,node* head2){
    //step1 reverse both LL
    head1=reverse(head1);
    head2=reverse(head2);

    //step2 add both LL
    node* anshead=NULL;
    node* anstail=NULL;
    int carry=0;
    while(head1!=NULL && head2!=NULL){
        int sum=carry+head1->data+head2->data;
        int digit=sum%10;
        carry=sum/10;
        node* newnode=new node(digit);
        if(anshead==NULL){
            anshead=newnode;
            anstail=newnode;
        }
        else{
            anstail->next=newnode;
            anstail=newnode;
        }
        head1=head1->next;
        head2=head2->next;
    }
    while(head1!=NULL){
        int sum=carry+head1->data;
        int digit=sum%10;
        carry=sum/10;
        node* newnode=new node(digit);
        anstail->next=newnode;
        anstail=newnode;
        head1=head1->next;

    }
     while(head2!=NULL){
        int sum=carry+head2->data;
        int digit=sum%10;
        carry=sum/10;
        node* newnode=new node(digit);
        anstail->next=newnode;
        anstail=newnode;
        head2=head2->next;

    }
    //handling carry
    while(carry!=0){
        int sum=carry;
        int digit=sum%10;
        carry=sum/10;
        node* newnode=new node(digit);
        anstail->next=newnode;
        anstail=newnode;

    }


    //step 3 reverse the ans LL
    anshead=reverse(anshead);
    return anshead;
}
int main(){
    node* head1=new node(2);
    node* second1=new node(4);
    head1->next=second1;

    node* head2=new node(2);
    node* second2=new node(3);
    node* third2=new node(4);
    head2->next=second2;
    second2->next=third2;
    cout<<"first LL input"<<endl;
    print(head1);
    cout<<endl;
    cout<<"second LL input"<<endl;
    print(head2);
    cout<<endl;
    node* ans=solve(head1,head2);
    cout<<"sum of both LL"<<endl;
    print(ans);

    return 0;
}