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
void print_normally(Node *head)
{
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_reversly(Node* tail)
{
    Node *tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
}
int main()
{ 
    Node *head= new Node(20);
    Node *a = new Node(30);
    Node *b = new Node(40);
    Node *tail=b;
    
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    
    print_normally(head);
    print_reversly(tail);
    return 0;
}