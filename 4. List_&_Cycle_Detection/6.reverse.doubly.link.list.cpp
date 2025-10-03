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
//1 2 3 4 5
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
//2 4 3 6 5
//2 4 3 6 5 7
void print_reversly(Node *head, Node *tail)
{
    Node *i=head;
    Node *j=tail;
    while(i->val!=j->val)
    {
        swap(i->val,j->val);
        i=i->next;
        j=j->prev;
        if(i->prev->val==j->val) break;
    }
}
int main()
{ 
    Node *head=NULL;
    Node *tail=NULL;
    while(true)
    {
        int v; cin>>v;
        if(v==-1) break;
        insert_at_tail(head,tail,v);
    }
    print_normally(head);
    print_reversly(head,tail);
    print_normally(head);
    return 0;
}