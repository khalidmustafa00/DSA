#include <iostream>
#include <queue>
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
Node *InsertInBst(Node *&root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if (root->data > data)
    {
        root->left = InsertInBst(root->left, data);
    }
    else
    {
        root->right = InsertInBst(root->right, data);
    }
    return root;
}
void TakeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = InsertInBst(root, data);
        cin >> data;
    }
}
vector<vector<int>> levelordertraversal2(Node* root){
    vector<vector<int>>ans;
    if(root==NULL){
        return ans;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        vector<int> level;
        for(int i=0;i<size;i++){
            Node* ele=q.front();
            q.pop();
           
            if(ele->left!=NULL){
                q.push(ele->left);
            }
            if(ele->right!=NULL){
                q.push(ele->right);
            }
            level.push_back(ele->data);
            
        }
        ans.push_back(level);
    }
    return ans;

}
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
void preorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
void inorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}
void postorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}
Node *findNodeInBst(Node *root, int target)
{
    if (root == NULL)
    {
        return root;
    }
    if (root->data == target)
    {
        return root;
    }
    if (target > root->data)
    {
        return findNodeInBst(root->right, target);
    }
    else
    {
        return findNodeInBst(root->left, target);
    }
}
int minVal(Node *root)
{
    Node *temp = root;
    if (temp == NULL)
    {
        return -1;
    }
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp->data;
}
int maxVal(Node *root)
{
    Node *temp = root;
    if (temp == NULL)
    {
        return -1;
    }
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp->data;
}
Node *DeleteNodeinBst(Node *root, int target)
{
    if (root == NULL)
    {
        return root;
    }
    if (root->data == target)
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        else if (root->left == NULL && root->right != NULL)
        {
            Node *child = root->right;
            delete root;
            return child;
        }
        else if (root->left != NULL && root->right == NULL)
        {
            Node *child = root->left;
            delete root;
            return child;
        }
        else
        {
            int inorderpre = maxVal(root->left);
            root->data = inorderpre;
            root->left = DeleteNodeinBst(root->left, inorderpre);
            return root;
        }
    }
    else if(target>root->data){
        root->right= DeleteNodeinBst(root->right,target);
    }
    else if(target<root->data){
        root->left= DeleteNodeinBst(root->left,target);
    }
    return root;

  
}
void convertBstintoDDL(Node* root,Node*&head){
    if(root==NULL){
        return;
    }
     convertBstintoDDL(root->right,head);
     root->right=head;
     if(head!=NULL){
        head->left=root;
     }
     head=root;
     convertBstintoDDL(root->left,head);

}
void printingLL(Node* head){
    Node*temp=head;
    cout<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->right;
    }
    cout<<endl;
}
Node* sortedLLtoBst(Node* &head,int n){
    if(n<=0 || head==NULL){
        return NULL;
    }
    Node* leftsumtree=sortedLLtoBst(head,n-1-n/2);
    Node* root=head;
    root->left=leftsumtree;
    head=head->right;
    root->right=sortedLLtoBst(head,n/2);
    return root;


}


int main()
{
    Node *root = NULL;
    cout << "Enter The data for Node " << endl;
    TakeInput(root);
    cout << "Printing the tree" << endl;
    levelOrderTraversal(root);
    cout << endl;
    cout << "Printing Inorder: " << endl;
    inorderTraversal(root);
    cout << endl;
    cout << "printing Preorder: " << endl;
    preorderTraversal(root);
    cout << endl;
    cout << "Printing postorder: " << endl;
    postorderTraversal(root);
    cout << endl;
    bool ans = findNodeInBst(root, 15);
    cout << "present or not " << ans << endl;
    cout << " min val: " << minVal(root) << endl;
    cout << " Max val: " << maxVal(root) << endl;
    DeleteNodeinBst(root, 60);
    cout << " given number is deleted :" << endl;
    levelOrderTraversal(root);

    return 0;
}