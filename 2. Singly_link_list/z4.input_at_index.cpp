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
void print_linked_list(Node *head)
{
    Node *tmp=head;
    cout<<"Linked list: ";
    while(tmp!=NULL) 
    {
        cout<<tmp->val<<" ";
         tmp=tmp->next;
    }
    cout<<endl;
}
void insert_at_tail(Node *&head, int v)
{
    Node *newnode = new Node(v);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    Node* tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
}
void insert_at_position(Node *&head, int p, int v)
{
    Node* newnode = new Node(v);
    Node *tmp=head;
    if(p==0)
    {
        newnode->next=head;
        head=newnode;
        print_linked_list(head);
        return;
    }
    for(int i=1;i<p;i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<"Invalid"<<endl;
            return;
        }
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    print_linked_list(head);
}
int main()
{
    Node *head=NULL;
    while(true)
    {
        int v; cin>>v;
        if(v==-1) break;
        insert_at_tail(head,v);
    }
    int q; cin>>q;
    while(q--)
    {
        int p, v;
        cin>>p>>v;
        insert_at_position(head, p,v);
    }
    return 0;
}