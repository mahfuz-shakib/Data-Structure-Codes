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
Node* insert_at_tail(Node *head, int v)
{
    Node *newnode=new Node(v);
    if(head==NULL)
    {
        head=newnode;
        return head;
    }
    Node *tmp=head;
    while(tmp->next!=NULL)  
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
    cout<<"value inserted at tail"<<endl;
    return head;
}
void insert_at_position(Node *&head, int p, int v)
{
    
    Node* newnode = new Node(v);
    if(p==0) 
    { 
        newnode->next=head;
        head=newnode;//here updating head & used upper
        return;
    }
    Node* tmp=head;
    for(int i=1;i<p;i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<"Invalid position "<<endl;
            return;
        }
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    cout<<"value inserted at given position"<<endl;
}
void insert_at_head(Node *&head, int v)// & for updating head
{
    Node *newnode=new Node(v);
    newnode->next=head;
    head=newnode;//here updating head
    cout<<"value inserted at head"<<endl;
}
void delete_from_tail(Node *&head)
{
    Node* tmp=head;
    if(head==NULL) 
    {
        cout<<"Linked list already empty"<<endl;
        return;
    }
    else if(tmp->next==NULL)
    {
        head=tmp->next;
        delete tmp;
        return;
    }
    while(tmp->next->next!=NULL)
    {
        tmp=tmp->next;
    }
    Node *del=tmp->next;
    tmp->next=NULL;
    delete del;
    cout<<"Deleted from tail"<<endl;
}
void delete_position(Node* &head, int p)
{
   if(head==NULL) 
   {
        cout<<"Linked list already empty"<<endl;
        return;
   }
    Node * tmp=head;
    if(p==0) 
    { 
        head=tmp->next;//updating head
        delete tmp;
        return;
    }
    for(int i=1;i<p;i++)
    {
        tmp=tmp->next;
            if(tmp->next==NULL) 
            {
                cout<<"Invalid position"<<endl;
                return;
            }
    }
    Node* deletenode=tmp->next;
    tmp->next=tmp->next->next;
    delete deletenode;
    cout<<"Deleted at position"<<endl;
}
void delete_head(Node *&head)
{
    if(head==NULL) 
   {
        cout<<"Linked list already empty"<<endl;
        return;
   }
    Node* deletenode=head;
    head=head->next;
    delete deletenode;
    cout<<"head deleted and changed"<<endl;
}
void print_link_list(Node *head)
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
int main()
{
    Node *head=NULL;
    while(true)
    {
        cout<<endl;
        cout << "Option-1: Insert at tail" << endl;//done
        cout << "Option-2: Insert at position" << endl;//done
        cout << "Option-3: Insert at head" << endl;//done
        cout << "Option-4: Delete from tail" << endl;//done
        cout << "Option-5: Delete from position" << endl;
        cout << "Option-6: Delete head" << endl;
        cout << "Option-7: Print linked list" << endl;
        cout << "Option-8: Terminate" << endl;
        cout << "Choose option: ";
        int op; cin>>op; cout<<endl;
        if(op==1)
        {
            cout<<"Enter value: ";
            int v; cin>>v;
            head=insert_at_tail(head,v);
        }
        else if(op==2)
        {
            cout<<"Enter position and value: ";
            int p,v; cin>>p>>v;
            insert_at_position(head,p,v);
        }
        else if(op==3)
        {
            cout<<"Enter value: ";
            int v;cin>>v;
            insert_at_head(head,v);
        }
        else if(op==4)  delete_from_tail(head);
        else if(op==5)
        {
            cout<<"Enter position: ";
            int p; cin>>p;
            delete_position(head,p);
        }
        else if(op==6)  delete_head(head);
        else if(op==7)  print_link_list(head);
        else if(op==8)  break;
    }
    return 0;
}
