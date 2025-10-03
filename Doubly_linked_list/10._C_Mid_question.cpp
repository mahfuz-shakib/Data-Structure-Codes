#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        string s;
        Node* next;
        Node* prev;
        Node(string s)
        {
            this->s=s;
            this->next=NULL;
            this->prev=NULL;
        }
};
void insert_at_tail(Node* &head, Node* &tail, string ss)
{
    Node *newnode=new Node(ss);
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
void visit_address(Node* &head, Node* &cur, string adrs)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        if(tmp->s==adrs)
        {
            cur=tmp;
            cout<<cur->s<<endl;
            return;
        }
        tmp=tmp->next;
    }
    cout<<"Not Available"<<endl;
}
void previous(Node* &cur)
{
    if(cur->prev==NULL)
    {
        cout<<"Not Available"<<endl;
        return;
    }
    cur=cur->prev;
    cout<<cur->s<<endl;
}
void nexttt(Node* &cur)
{
    if(cur->next==NULL)
    {
        cout<<"Not Available"<<endl;
        return;
    }
    cur=cur->next;
    cout<<cur->s<<endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    Node* cur=head;
    while(true)
    {
        string s; cin>>s;
        if(s=="end") break;
        insert_at_tail(head,tail,s);
    }
    int q; cin>>q;
    cin.ignore();
    while(q--)
    {
        string cmnd; cin>>cmnd;
        if(cmnd=="visit")
        {
            string addrs; cin>>addrs;
            visit_address(head,cur,addrs);
        }
        else if(cmnd=="prev")
        {
            previous(cur);
        }
        else if(cmnd=="next")
        {
            nexttt(cur);
        }
    }
    return 0;
}