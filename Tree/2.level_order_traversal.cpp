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
void levelorder(Node *root)
{
    if(root==NULL) return;
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node*p=q.front();
        q.pop();

        cout<<p->val<<" ";

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
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
    levelorder(root);
    return 0;
}