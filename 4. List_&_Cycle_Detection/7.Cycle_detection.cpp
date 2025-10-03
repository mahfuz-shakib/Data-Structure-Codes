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
int main()
{ 
    Node *head=new Node(2);
    Node *a=new Node(4);
    Node *b=new Node(3);
    Node *c=new Node(7);
    Node *d=new Node(9);
    Node *e=new Node(3);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=NULL;

    Node* fast=head;
    Node* slow=head;
    bool flag=false;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
            flag=true;
            break;
        }
    }
    flag==true? cout<<"Cycle Detected": cout<<"No cycle detected";
    return 0;
}