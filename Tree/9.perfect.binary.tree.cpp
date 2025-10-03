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
int countnode(Node* root)
{
    if(root==NULL) return 0;
    int l = countnode(root->left);
    int r = countnode(root->right);
    return l+r+1;
}
int maxDepth(Node *root)
{
    if(root==NULL) return 0;

    int l=maxDepth(root->left);
    int r=maxDepth(root->right);
    return 1+max(l,r);
} 
int main()
{
    Node* root = input();
    int node=countnode(root);
    int depth=maxDepth(root);
    if(pow(2,depth)-1==node) cout<<"YES";
    else cout<<"NO";
    return 0;
}