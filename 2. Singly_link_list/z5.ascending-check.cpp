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
    Node *newnode = new Node(v);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
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
/*void ascending_check(Node *&head)
{
    Node *tmp=head;
    bool flag=true;
    while(tmp->next!=NULL)
    {
        if(tmp->val>tmp->next->val)
        {
            flag=false;
            break;
        }
        tmp=tmp->next;
    }
    flag==true?cout<<"YES":cout<<"NO";
}*/
/*void recursion(Node *tmp)
{
    if(tmp==NULL) return;
    cout<<tmp->val<<" ";
    recursion(tmp->next);
}
void reverse(Node *tmp)
{
    if(tmp==NULL) return;
    reverse(tmp->next);
    cout<<tmp->val<<" ";
}*/
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
    print_linked_list(head);
    //ascending_check(head);
    //recursion(head);  recursion diye linked list soja print
    //reverse(head);  recursion diye ulta print
    /*linked list sorting
    for(Node *i=head;i->next!=NULL;i=i->next)
    {
        for(Node *j=i->next;j!=NULL;j=j->next)
        {
            if(i->val<j->val) swap(i->val,j->val);
        }
    }
    print_linked_list(head);
    */
    return 0;
}