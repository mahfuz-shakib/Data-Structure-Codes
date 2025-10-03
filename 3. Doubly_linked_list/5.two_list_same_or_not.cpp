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
void check_same(Node* head1, Node* head2)
{
    Node* tmp1=head1;
    Node* tmp2=head2;
    bool flag=true;
    while(tmp1!=NULL)
    {
        if(tmp1->val!=tmp2->val)
        {
            flag=false;
            break;
        }
        tmp1=tmp1->next;
        tmp2=tmp2->next;
    }
    if(flag==true) cout<<"YES";
    else cout<<"NO";
}
int main()
{
    Node* head1=NULL;
    Node* tail1=NULL;
    Node* head2=NULL;
    Node* tail2=NULL;
    int x=0,y=0;
    while(true)
    {
        int v; cin>>v;
        if(v==-1) break;
        x++;
        insert_at_tail(head1,tail1,v);
    }
    while(true)
    {
        int v; cin>>v;
        if(v==-1) break;
        y++;
        insert_at_tail(head2,tail2,v);
    }

    //print(head1);
    //print(head2);

    if(x!=y) cout<<"NO";
    else check_same(head1,head2);
    return 0;
}