#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
        int val;
        Node* next;
        Node(int val)
        {
            this->val=val;
            this->next=NULL;
        }
};
int sizee(Node* head)
{
    Node*tmp=head;
    int c=0;
    while(tmp!=NULL)
    {
        c++;
        tmp=tmp->next;
    }
    //cout<<"SIZE: "<<c<<endl;
    return c;
}
void insert_at_head(Node *&head,Node*&tail, int v)
{
    Node *newnode=new Node(v);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
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
    tail=newnode;
    
}
void insert_at_position(Node* &head,Node *&tail,int v,int p)
{
    Node *newnode=new Node(v);
    Node* tmp=head;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    else if(p==0)
    {
        head->next=newnode;
        head=newnode;
        return;
    }
    for(int i=1;i<p;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
}
void delete_head(Node *&head)
{
    if(head==NULL)
    {
        return;
    }
    Node *deletenode=head;
    head=head->next;
    delete deletenode;
}
void delete_tail(Node *&head, Node *&tail)
{
    if(head==NULL)
    {
        return;
    }
    Node *deletenode=tail;
    if(head->next==NULL)
    {
        head=NULL;
        tail=NULL;
        delete deletenode; 
        return;
    }
    Node* tmp=head;
    while(tmp->next->next!=NULL) {tmp=tmp->next;}
    tmp->next=NULL;
    tail=tmp;
    delete deletenode;    
}
void delete_position(Node* &head,Node *&tail,int p)
{
    Node* tmp=head;
    if(head==NULL)
    {
        return;
    }
    else if(p==0)
    {
        Node *deletenode=head;
        head=head->next;
        delete deletenode;
        return;
    }
    for(int i=1;i<p;i++)
    {
        tmp=tmp->next;
    }
    Node* deletenode;
    deletenode=tmp->next;
    tmp->next=tmp->next->next;
}
void print(Node *head)
{
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    while(true)
    {
        int v; cin>>v;
        int op; cin>>op;
        if(v==-1) break;
        if(op==1)  insert_at_head(head,tail,v);
        else if(op==2) insert_at_tail(head,tail,v);
        else if(op==3)
        {
            int p; cin>>p;
            if(p<=sizee(head)) insert_at_position(head,tail,v,p);
            else cout<<"Invalid position"<<endl;
        }
        else if(op==4)  delete_head(head);
        else if(op==5)  delete_tail(head,tail);
        else if(op==6)
        {
            int p; cin>>p;
            if(p<sizee(head)) delete_position(head,tail,p);
            else cout<<"Invalid position"<<endl;
        }
        print(head);
    }
    return 0;
}