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
void middle_value(Node* head,int n)
{
   Node* tmp=head;
   for(int i=1;i<n/2;i++)
        {
            tmp=tmp->next;
        }
    if(n%2!=0)  cout<<tmp->next->val<<endl;
    else cout<<tmp->val<<" "<<tmp->next->val<<endl;
}
int main()
{
    Node *head=NULL;
    int n=0;
    while(true)
    {
        int v; cin>>v;
        if(v==-1) break;
        n++;
        insert_at_tail(head,v);
    }
    middle_value(head,n);
    return 0;
}