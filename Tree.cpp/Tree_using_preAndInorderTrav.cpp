#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;

    }
};
void levelOrderTraversal(Node *root)
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

int findposition(int arr[],int n,int element){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
//build Tree from using inorder and preorder traversal;
Node* buildtree(int inorder[],int preorder[],int size,int &preindex,int inorderStart,int inorderEnd){
    if(inorderStart>inorderEnd || preindex>=size){
        return NULL;
    }
    int element=preorder[preindex++];
    Node* root=new Node(element);
    int pos=findposition(inorder,size,element);
    root->left=buildtree(inorder, preorder, size,preindex,inorderStart,pos-1);
    root->right=buildtree(inorder, preorder, size, preindex, pos+1, inorderEnd);
    return root;
}
Node* inorderpreorder(int inorder[],int postorder[],int &postindex,int size,int inorderStart,int inorderEnd){
    if(postindex<0|| inorderStart>inorderEnd){
        return NULL;
    }
    int element=postorder[postindex--];
    Node*root=new Node(element);
    int pos=findposition(inorder,size,element);
    root->right=inorderpreorder(inorder, postorder, postindex, size,pos+1,inorderEnd);
    root->left=inorderpreorder( inorder, postorder, postindex, size, inorderStart,pos-1);
    return root;
}
int main(){

    int inorder[]={40,20,10,50,30,60};
    int postorder[]={40,20,50,60,30,10};
    int size=6;
    int inorderStart=0;
    int inorderEnd=size-1;
    int preindex=0;
    int postindex=size-1;
    cout<<"building Tree"<<endl;
    //Node*root= buildtree(inorder,preorder,size,preindex,inorderStart,inorderEnd);
    Node*root=inorderpreorder(inorder, postorder, postindex, size, inorderStart, inorderEnd);
    cout<<endl<<"printing level order Traversal"<<endl;
    levelOrderTraversal(root);

    return 0;
}