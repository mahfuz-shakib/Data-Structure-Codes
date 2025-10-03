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
int sizee(Node* head)
{
    Node *tmp=head;
    int cnt=0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
void insert_at_position(Node* &head, Node* &tail, int p, int v)
{
    Node *newnode=new Node(v);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    if(p==0) // head e insert hobe
    {
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        return;
    }
    Node* tmp=head;
    for(int i=1;i<p;i++)
    {
        tmp=tmp->next;
    }
    if(tmp->next==NULL) //tail e insert hobe
    {
        tmp->next=newnode;
        newnode->prev=tmp;
        tail=newnode;
        return;
    }
    //head o tail er majhe jekono position e insert hobe
    newnode->next=tmp->next;
    tmp->next=newnode;
    newnode->next->prev=newnode;
    newnode->prev=tmp;
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
    Node* head=NULL;
    Node* tail=NULL;
    int q; cin>>q;
    while(q--)
    {
        int p,v; cin>>p>>v;
        if(p > sizee(head)) 
            cout<<"Invalid"<<endl;
        else 
        {
            insert_at_position(head,tail,p,v);
            print_normally(head);
            print_reversly(tail);
        }
    }
    return 0;
}