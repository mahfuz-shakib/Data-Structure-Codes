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
    Node a(15),b(25),c(35),d(45);
    a.next=&b;
    b.next=&c;
    c.next=&d;
    cout<<a.val<<endl;
    cout<<b.val<<endl;
   cout<<(*b.next).val<<endl;
    cout<<c.next->val<<endl;
    return 0;
}