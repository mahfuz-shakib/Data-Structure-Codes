#include<bits/stdc++.h>
using namespace std;
#define long long int
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
    Node *newnode= new Node(v);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next =head;
    head->prev=newnode;
    head=newnode;
}
void insert_at_tail(Node *&head, Node *&tail, int v)
{
    Node *newnode= new Node(v);
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
void delete_position(Node *&head, Node *&tail, int v)
{
    Node *tmp=head;
    if(head==NULL) return;
    if(v==0)
    {
        Node *deletenode=head;
        head=head->next;
        if(head==NULL) tail=NULL;
        else head->prev=NULL;
        delete deletenode;
        return;
    }    
    if(head->next==NULL) return;
    else
    {
        for(int i=1;i<v;i++)
        {
            tmp=tmp->next;
            if(tmp->next==NULL) return;
        }
    } 
    Node *deletenode=tmp->next;
    tmp->next=tmp->next->next;
    if(tmp->next==NULL) tail=tmp; //tail delete hole
    else tmp->next->prev=tmp; //vth index delete hole
    delete deletenode;
}
void print_normally(Node* head)
{
    Node* tmp=head;
   cout<<"L -> ";
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_reversly(Node* tail)
{
    Node* tmp=tail;
   cout<<"R -> ";
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    int q; cin>>q;
    while(q--)
    {
        int x,v;    cin >> x >> v;

        if(x==0)      insert_at_head(head,tail,v);
        else if(x==1) insert_at_tail(head,tail,v);
        else if(x==2) delete_position(head,tail,v);

        print_normally(head);
        print_reversly(tail);
    }
    return 0;
}