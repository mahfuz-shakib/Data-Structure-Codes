#include<bits/stdc++.h>
using namespace std;
#define long long int
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
int search_value(Node* head, int x)
{
    Node *tmp=head;
    int i=0;
    while(tmp!=NULL)
    {
        if(x==tmp->val) break;
        i++;
        tmp=tmp->next;
    }
    if(tmp==NULL) return -1;
    else return i;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        Node *head=NULL;
        Node *tail=NULL;
        while(true)
        {
            int v; cin>>v;
            if(v==-1) break;
            insert_at_tail(head,tail,v);
        }
        int x; cin>>x;
        cout<<search_value(head,x)<<endl;
    }
    return 0;
}