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
    int v; cin>>v;
    Node* root;
    if(v==-1) root=NULL;
    else root=new Node(v);
    queue<Node*>q;
    if(root)q.push(root);
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
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
int sum_without_leaf(Node* root)
{
    if(root==NULL)return 0;
    if(root->left==NULL && root->right==NULL) return 0;
    int l=sum_without_leaf(root->left);
    int r=sum_without_leaf(root->right);
    return root->val+l+r;
}
int main()
{
    Node*root= input();
    cout<<sum_without_leaf(root);
    return 0;
}
