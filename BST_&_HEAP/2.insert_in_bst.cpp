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
Node* inputBST()
{
    int v;cin>>v;
    Node* root;
    if(v==-1)root=NULL;
    else root=new Node(v);   
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();

        int l,r;cin>>l>>r;
        Node *lc,*rc;
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
void insertInBst(Node* &root,int x)
{
    if(root==NULL)
    {
        root=new Node(x);
        return;
    }
    if(x<root->val) 
    {
        if(root->left==NULL)
        {
            root->left=new Node(x);
        }
        else insertInBst(root->left,x);
    }
    if(x>root->val) 
    {
        if(root->right==NULL)
        {
            root->right=new Node(x);
        }
        else insertInBst(root->right,x);
    }
}
void print (Node* root)
{
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();

        cout<<p->val<<" ";

        if(p->left)q.push(p->left);
        if(p->right)q.push(p->right);
    }
}
int main()
{
    Node* root=inputBST();
    int x; cin>>x;
    insertInBst(root,x);
    print(root);
    return 0;
}