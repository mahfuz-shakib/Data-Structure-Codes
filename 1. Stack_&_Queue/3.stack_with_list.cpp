#include<bits/stdc++.h>
using namespace std;
class mystack
{
    public:
        list<int>l;
        void push(int val)
        {
            l.push_back(val);
        }
        int sizee()
        {
            return l.size();
        }
        void top()
        {
            cout<<l.back()<<endl;
        }
        void pop()
        {
           l.pop_back();
        }
        bool empty()
        {
            if(l.size()==0) return true;
            else return false;
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