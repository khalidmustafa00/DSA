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
void solve(node* &head){
    int one=0;
    int zero=0;
    int two=0;
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            zero++;
        }
        else if(temp->data==1){
            one++;
        }
        else{
            two++;
        }
        temp=temp->next;
    }
    temp=head;
        while(zero--){
            temp->data=0;
            temp=temp->next;
        }
        while(one--){
            temp->data=1;
            temp=temp->next;
        }
        while(two--){
            temp->data=2;
            temp=temp->next;
        }
    

}
int main(){
    node* head=new node(2);
    node* second=new node(1);
    node* third=new node(1);
    node* fourth=new node(0);
    node* fifth=new node(0);
    node* sixth=new node(2);
    node* seventh=new node(1);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=NULL;
    cout<<"printing ll data"<<endl;
    print(head);
    cout<<endl;
    solve(head);
    cout<<"output LL"<<endl;
    print(head);




}