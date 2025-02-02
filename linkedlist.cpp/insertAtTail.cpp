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
void insertatTail(node* &head,int data){
    node* newnode=new node(data);
   
     node* temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }

  // Append the new node to the end of the list
  temp->next = newnode;
   




}
void print(node* &head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    node *tail=new node(10);
    insertatTail(tail,20);
    insertatTail(tail,30);
    insertatTail(tail,40);
    insertatTail(tail,50);
    insertatTail(tail,60);

    
   
   
    cout<<"printing LL data"<<endl;
    print(tail);
}