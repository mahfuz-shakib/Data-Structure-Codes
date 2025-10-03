#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node(int val)
        {
            this->val=val;
            this->next=NULL;
        }
};
void insert_at_tail(Node *&head, Node *&tail, int v)
{
    Node *newnode=new Node(v);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void same_same(Node *head1, Node *head2)
{
    Node *x=head1;
    Node *y=head2;
    bool flag=true;
    while(x!=NULL)
    {
        if(x->val!=y->val)
        {
            flag=false;
            break;
        }
        x=x->next;
        y=y->next;
    }
    if(flag==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    Node *head1=NULL;
    Node *tail1=NULL;
    Node *head2=NULL;
    Node *tail2=NULL;
    int x=0,y=0;
    while(true)
    {
        int v; cin>>v;
        if(v==-1) break;
        x++;
        insert_at_tail(head1,tail1,v);
    }
    while(true)
    {
        int v; cin>>v;
        if(v==-1) break;
        y++;
        insert_at_tail(head2,tail2,v);
    }
    if(x!=y) cout<<"NO"<<endl;
    else same_same(head1,head2);
    return 0;
}