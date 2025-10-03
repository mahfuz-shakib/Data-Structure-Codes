#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node (int val)
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
int size(Node* head)
{
    int x=0;
    Node *tmp=head;
    while(tmp!=NULL)
    {
        x++;
        tmp=tmp->next;
    }
    return x;
}
int main()
{
    Node *head1=NULL;
    Node *tail1=NULL;
    Node *head2=NULL;
    Node *tail2=NULL;
    while(true)
    {
        int v; cin>>v;
        if(v==-1) break;
        insert_at_tail(head1,tail1,v);
    }
    while(true)
    {
        int v; cin>>v;
        if(v==-1) break;
        insert_at_tail(head2,tail2,v);
    }
    size(head1)==size(head2)?cout<<"YES":cout<<"NO";
    return 0;
}