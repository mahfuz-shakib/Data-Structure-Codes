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
void  insert_at_tail(Node *&head, int v)
{
    Node* newnode = new Node(v);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    Node *tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
}
void print_linked_list(Node* head)
{
    Node* tmp=head;
    int c=0;
    cout<<endl<<"print linked list: ";
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        c++;
        tmp=tmp->next;
    }
    cout<<endl<<"size"<<" "<<c<<endl;
}
int main()
{
    Node *head=NULL;
    cout<<"Enter input: ";
    while(true)
    {
        int v; cin>>v;
        if(v==-1) break;
        insert_at_tail(head,v);
    }
    print_linked_list(head);
    return 0;
}