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
void print_reversly(Node *&head, Node *cur)
{
    if(cur->next==NULL)
    {
        head=cur;
        return;
    }
    print_reversly(head, cur->next);
    cur->next->next=cur;
    cur->next=NULL;
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
    print_reversly(head,head);
    print_normally(head);
    return 0;
}