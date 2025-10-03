#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* left;
        Node *right;
        Node(int val)
        {
            this->val=val;
            this->left=NULL;
            this->right=NULL;
        }
};
void preorder(Node* root)
{
    if(root==NULL) return;
    
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root)
{
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}
void inorder(Node* root)
{
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
int main()
{
    Node *root=new Node(5);
    Node *a=new Node(3);
    Node *b=new Node(2);
    Node *c=new Node(1);
    Node *d=new Node(6);
    Node *e=new Node(8);
    Node *f=new Node(7);
    Node *g=new Node(9);
    Node *h=new Node(10);
    root->left=a;
    root->right=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    e->left=h;
    
    cout<<"preorder: ";
    preorder(root);
    cout<<endl<<"postorder: ";
    postorder(root);
    cout<<endl<<"inorder: ";
    inorder(root);
    return 0;
}