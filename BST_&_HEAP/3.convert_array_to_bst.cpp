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
Node* makeBST(int a[],int l, int r)
{
    if(l>r) return NULL;
    int mid=(l+r)/2;
    Node*root=new Node(a[mid]);
    root->left=makeBST(a,l,mid-1);
    root->right=makeBST(a,mid+1,r);
    return root;
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
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    Node* root=makeBST(arr,0,n-1);
    print(root);
    return 0;
}