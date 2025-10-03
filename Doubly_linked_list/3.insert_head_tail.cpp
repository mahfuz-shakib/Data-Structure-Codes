#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node* prev;
        Node(int val)
        {
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }
};
void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *newnode=new Node(v);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;   
    head=newnode;
}
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
    newnode->prev=tail;   
    tail=newnode;
}
void print_normally(Node *head)
{
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_reversly(Node* tail)
{
    Node *tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
int main()
{
    Node *head=new Node(10);
    Node *a=new Node(20);
    Node *b=new Node(30);
    Node *c=new Node(40);
    Node *d=new Node(50);
    Node* tail=d;
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    c->next=d;
    d->prev=c;
    print_normally(head);
    print_reversly(tail);
    int v;  cin>>v;
    insert_at_head(head,tail,v);
    print_normally(head);
    print_reversly(tail);
    insert_at_tail(head, tail,v+v);
    print_normally(head);
    print_reversly(tail);

    
    return 0;
}