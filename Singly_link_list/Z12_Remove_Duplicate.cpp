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
    Node *newnode= new Node(v);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void remove_duplicate(Node *head)
{
    for(Node *i=head; i->next!=NULL; i=i->next)
    {
        for(Node *j=i; j->next!=NULL; )
        {
            if(i->val==j->next->val)
            {
                Node *del=j->next;
                j->next=j->next->next;
                delete del;
                
            }
            else j=j->next;
        }
        if(i->next==NULL) break;
    }

}
void print_linked_list(Node *head)
{
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    
    while(true)
    {
        int v;    cin >> v;
        if(v==-1) break;
        insert_at_tail(head,tail,v);
    }
    remove_duplicate(head);
    print_linked_list(head);
    return 0;
}