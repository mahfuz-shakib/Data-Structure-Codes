#include<bits/stdc++.h>
using namespace std;
int c=0;
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
        //1.ber kore ano
        Node* p=q.front();
        q.pop();
        
        //2.jabotio ja kaj(3 ta kaj)
        //input neya,, node banano,, node connect kora
        int l,r;cin>>l>>r;
        
        Node *myleft, *myright;
        if(l==-1) myleft=NULL;
        else myleft=new Node(l);
        if(r==-1) myright=NULL;
        else myright=new Node(r);
        
        p->left=myleft;
        p->right=myright; 
        
        //3.children push kro
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
int main()
{
    Node* root = input();
    cout<<countnode(root);
    //cout<<c<<endl;
    return 0;
}