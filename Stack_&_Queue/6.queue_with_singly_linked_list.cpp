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
        }
};
class myqueue
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
        void front()
        {
            cout<<head->val<<endl;
        }
        void pop()
        {
            Node* deletenode=head;
            head=head->next;
            if(head==NULL)
            {
                tail=NULL;
            }
            delete deletenode;
        }
};
int main()
{
    myqueue q;
    while(true)
    {
        int v; cin>>v;
        if(v==-1) break;
        q.push(v);
    }
    cout<<q.sizee()<<endl;
    while(!q.empty())
    {
        q.front();
        q.pop();
    }
    return 0;
}