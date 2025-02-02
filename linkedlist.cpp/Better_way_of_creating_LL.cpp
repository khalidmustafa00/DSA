#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
     node(){
            this->data = 0;
            this->next = NULL;
        }
        node(int data){
            this->data = data;
            this->next = NULL;
        }
   

};

void insertatHead(node* &head,node*tail,int data){
    if(head == NULL){
        node* newNode = new node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    node*newnode=new node(data);
    newnode->next=head;
    head=newnode;


}
void print(node*head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    

}

int main(){
    node* head=NULL;
    node* tail=NULL;
   
    insertatHead(head,tail,10);
    insertatHead(head,tail,20);
    insertatHead(head,tail,30);
    insertatHead(head,tail,40);
    insertatHead(head,tail,50);
    insertatHead(head,tail,60);
    //reversing a this linked list;
   
    
    print(head);
    
    return 0;
}