#include <iostream>
#include <queue>
#include<limits.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
class NodeData{
    public:
    int size;
    int maxVal;
    int minVal;
    bool validBst;
    NodeData(int size,int max,int min,bool valid){
        this->size=size;
        maxVal=max;
        minVal=min;
        validBst=valid;
    }
    NodeData(){

    }

};
void levelOrderTraversal(Node *&root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();

        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
NodeData* findlargestbst(Node* root,int &ans){
    if(root==NULL){
        NodeData* temp=new NodeData(0,INT_MIN,INT_MAX,true);
        return temp;
    }
    NodeData* leftAns=findlargestbst(root->left,ans);
    NodeData* rightAns=findlargestbst(root->right,ans);
    //checking start here;
    NodeData* currNodeKaAns=new NodeData();
    currNodeKaAns->size=leftAns->size+rightAns->size+1;
    currNodeKaAns->maxVal=max(root->data,rightAns->maxVal);
    currNodeKaAns->minVal=max(root->data,leftAns->minVal);
    if(leftAns->validBst && rightAns->validBst && (root->data>leftAns->maxVal &&root->data<rightAns->minVal)){
        currNodeKaAns->validBst=true;

    }
    else{
        currNodeKaAns->validBst=false;
    }
    if(currNodeKaAns->validBst){
        ans=max(ans,currNodeKaAns->size);
    }
    return currNodeKaAns;

}
int main(){
    int ans=0;
    Node* root=new Node(5);
     Node* first=new Node(2);
    Node* second=new Node(4);
    Node* third=new Node(1);
    Node* fourth=new Node(3);
   
    root->left=first;
    root->right=second;
    first->left=third;
    first->right=fourth;

    cout<<"Printing The Tree: "<<endl;
    levelOrderTraversal(root);
    cout<<"largest size : ";
    findlargestbst(root,ans);
    cout<<ans<<endl;


    return 0;
}