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
void insert_at_tail(Node* &head, Node* &tail, int v)
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
void print(Node* head)
{
    Node* tmp=head;
   
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    while(true)
    {
        int v; cin>>v;
        if(v==-1) break;
        insert_at_tail(head,tail,v);
    }
    Node* i=head;
    Node* j=tail;
    while(i!=j)
    {
        swap(i->val,j->val);
        i=i->next;
        j=j->prev;
        if(i->prev->val==j->val) break;
    }

    print(head);
    return 0;
}