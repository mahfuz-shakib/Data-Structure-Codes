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
    bool flag=true;
    Node* i=head;
    Node* j=tail;
    while(i!=j)
    {
        if(i->val!=j->val)
        {
            flag=false;
            break;
        }
        i=i->next;
        j=j->prev;
       if(i->prev==j) break;
    }
    if(flag==true) cout<<"YES";
    else cout<<"NO";
    return 0;
}