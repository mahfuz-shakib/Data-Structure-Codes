#include<bits/stdc++.h>
using namespace std;
class myqueue
{
    public:
    list<int>l;
    void push(int v)
    {
        l.push_back(v);
    }
    int size()
    {
        return l.size();
    }
    int front()
    {
        return l.front();
    }
    void pop()
    {
        l.pop_front();
    }
    bool empty()
    {
        if(l.size()==0) return true;
        else return false;
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
    cout<<q.size()<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}