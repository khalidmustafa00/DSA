#include <iostream>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
node *buildTree(node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data inserting in the left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data inserting in the right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}
void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        
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
void inOrderTraversal(node* root){
    if(root==NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);

}
void PreOrderTraversal(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);

}
void PostOrderTraversal(node* root){
    if(root==NULL){
        return;
    }

    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout<<root->data<<" ";

}
int height(node* root){
    if(root==NULL){
        return 0;
    }
    int leftheight=height(root->left);
    int rightheight=height(root->right);
    int ans=max(leftheight,rightheight)+1;
    return ans;
}
void Topview(node*root){
    if(root==NULL){
        return;
    }
    map<int,int>topNode;
    queue<pair<node*,int>>q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<node*,int>temp=q.front();
        q.pop();
        node*frontnode=temp.first;
        int hd=temp.second;
        //jo bhi horizontal distance aya hai cheack if answer for that hd is already exist or not//
        //topnode.find() means we have gone outside of map with searching and we could not find any value 
        //related to respective horizontal distance;
        //if we remove line number 119 then the whole function becomes for Bottom view code;
        if(topNode.find(hd)==topNode.end()){
            topNode[hd]=frontnode->data;

        }
        if(frontnode->left){
            q.push(make_pair(frontnode->left,hd-1));
        }
        if(frontnode->right){
            q.push(make_pair(frontnode->right,hd+1));
        }
    }
    cout<<"printing answer :"<<endl;
    for(auto i:topNode){
        cout<<i.first<<"->"<<i.second<<endl;

    }


}
void Bottomview(node*root){
    if(root==NULL){
        return;
    }
    map<int,int>topNode;
    queue<pair<node*,int>>q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<node*,int>temp=q.front();
        q.pop();
        node*frontnode=temp.first;
        int hd=temp.second;
        
            topNode[hd]=frontnode->data;

        
        if(frontnode->left){
            q.push(make_pair(frontnode->left,hd-1));
        }
        if(frontnode->right){
            q.push(make_pair(frontnode->right,hd+1));
        }
    }
    cout<<"printing answer :"<<endl;
    for(auto i:topNode){
        cout<<i.first<<"->"<<i.second<<endl;

    }


}
void PrintleftTree(node* root,vector<int>&ans,int level){
    if(root==NULL){
        return;
    }
    if(level==ans.size()){
        ans.push_back(root->data);
    }
    PrintleftTree(root->left,ans,level+1);
    PrintleftTree(root->right,ans,level+1);
}
void PrintingRightview(node* root ,vector<int>&ans,int level){
     if(root==NULL){
        return;
    }
    if(level==ans.size()){
        ans.push_back(root->data);
    }
    PrintleftTree(root->right,ans,level+1);
    PrintleftTree(root->left,ans,level+1);
    
}
void printleftBoundary(node*root){
    if(root==NULL){
        return ;
    }
    if(root->left==NULL && root->right==NULL){
        return ;
    }
    cout<<root->data<<" ";
    if(root->left){
        printleftBoundary(root->left);

    }
    else{
        printleftBoundary(root->right);

    }
}
void printleafBoundary(node* root){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        cout<<root->data<<" ";
    }
   printleafBoundary(root->left);
   printleafBoundary(root->right);

}
void printrightBoundary(node*root){
     if(root==NULL){
        return ;
    }
    if(root->left==NULL && root->right==NULL){
        return ;
    }
    if(root->right){
         printleftBoundary(root->right);

    }
    else{
        printleftBoundary(root->left);

    }
    cout<<root->data<<" ";

}
void BoundaryTraversal(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printleftBoundary(root->left);
    printleafBoundary(root);
    printrightBoundary(root->right);
}
int main()
{
    node *root = NULL;
    root = buildTree(root);
    // levelOrderTraversal(root);
    // Topview(root);
    // Bottomview(root);
    // vector<int>ans;
    // int level=0;
    // PrintleftTree(root,ans,level);
    // cout<<"printing answer "<<endl;
    // for(auto i:ans){
    //     cout<<i<<" ";
    // }
    BoundaryTraversal(root);

    return 0;
}