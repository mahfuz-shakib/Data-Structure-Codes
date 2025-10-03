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
void searchInBst(Node* root,int x)
{
    if(root==NULL)
    {
        cout<<"Not found";
        return;
    }
    if(root->val==x)
    {
        cout<<"Found";
        return;
    }
    if(x<root->val) searchInBst(root->left,x);
    if(x>root->val) searchInBst(root->right,x);
}
int main()
{
    Node* root=inputBST();
    int x; cin>>x;
    searchInBst(root,x);
    return 0;
}