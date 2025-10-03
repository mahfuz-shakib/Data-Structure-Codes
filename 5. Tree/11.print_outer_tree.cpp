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
Node* input()
{
    int v;cin>>v;
    Node *root;
    if(v==-1) root=NULL; 
    root=new Node(v);
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        
        Node* p=q.front();
        q.pop();
        int l,r;cin>>l>>r;
        
        Node *lc, *rc;
        if(l==-1) lc=NULL;
        else lc=new Node(l);
        if(r==-1) rc=NULL;
        else rc=new Node(r);
        
        p->left=lc;
        p->right=rc; 
        
        if(p->left)q.push(p->left);
        if(p->right)q.push(p->right);
    }
    return root;
}
void outerLeft(Node* root)
{
if(root==NULL)return;
if(root->left) outerLeft(root->left);
else if(root->right) outerLeft(root->right); 
cout<<root->val<<" ";
}
void outerRight(Node* root)
{
if(root==NULL)return;
cout<<root->val<<" ";
if(root->right)  outerRight(root->right);    
else if(root->left)  outerRight(root->left);
}
int main()
{
    Node* root = input();
    outerLeft(root->left);
    cout<<root->val<<" ";
    outerRight(root->right);
    return 0;
}