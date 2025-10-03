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
void delete_position(Node *&head,Node *&tail, int p)
{
    Node *tmp=head;
    if(head==NULL) return;
    if(p==0)
    {
        Node *deletenode=head;
        head=head->next;
        head->prev=NULL;
        delete deletenode;
        return;
    }
    for(int i=1;i<p;i++)
    {
        tmp=tmp->next;
        if(tmp->next==NULL)
        {
            cout<<"invalid position";
            return;
        }
    }  
    Node *deletenode=tmp->next;
    tmp->next=tmp->next->next;
    delete deletenode;
    if(tmp->next==NULL)
    {
        tail=tmp;
        return;
    }
    tmp->next->prev=tmp;
}
void delete_head(Node *&head,Node *&tail)
{
    if(head==NULL) return;
    Node *deletenode=head;
    head=head->next;
    delete deletenode;
    if(head==NULL)
    {
        tail=NULL;
        return;
    }
    head->prev=NULL;
}
void delete_tail(Node *&head,Node *&tail)
{
    if(head==NULL) return;
    Node *deletenode=tail;
    tail=tail->prev;
    delete deletenode;
    if(tail==NULL)
    {
        head=NULL;
        return;
    }
    tail->next=NULL;
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
    int p; cin>>p;
    delete_position(head,tail,p);
        print_normally(head);
        print_reversly(tail);
    delete_head(head,tail);
        print_normally(head);
        print_reversly(tail);
    delete_tail(head,tail);
        print_normally(head);
        print_reversly(tail);


    return 0;
}