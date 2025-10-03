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
class mystack
{
    public:
        Node* head=NULL;
        Node* tail=NULL;
        void push(int val)
        {
            Node *newnode=new Node(val);
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
        int sizee()
        {
            Node *tmp=head;
            int sz=0;
            while(tmp!=NULL)
            {
                sz++;
                tmp=tmp->next;
            }
            return sz;
        }
        bool empty()
        {
            if(head==NULL) return true;
            else return false;
        }
        void top()
        {
            cout<<tail->val<<endl;
        }
        void pop()
        {
            Node* deletenode=tail;
            tail=tail->prev;
            if(tail==NULL)
            {
                head=NULL;
            }
            delete deletenode;
        }
};
int main()
{
    mystack s;
    while(true)
    {
        int v; cin>>v;
        if(v==-1) break;
        s.push(v);
    }
    cout<<s.sizee()<<endl;
    while(!s.empty())
    {
        s.top();
        s.pop();
    }
    return 0;
}