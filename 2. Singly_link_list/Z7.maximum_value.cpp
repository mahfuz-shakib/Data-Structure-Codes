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
int maximum(Node* head)
{
    int max=head->val;
    Node *tmp=head->next;
    while(tmp!=NULL)
    {
        if(max<tmp->val) max=tmp->val;  
        tmp=tmp->next;
    }
    return max;
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
    cout << maximum(head);
    return 0;
}