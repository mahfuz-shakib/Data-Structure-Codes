#include<bits/stdc++.h>
using namespace std;
class myqueue
{
    public:
    list<int>l;
        void push(int val)
        {
            l.push_back(val);
        }
        void pop()
        {
            l.pop_front();
        }
        int size()
        {
            return l.size();
        }
        int front()
        {
            return l.front();
        }
        bool empty()
        {
            if(l.size()==0) return true;
            else return false;
        }
};
int main()
{
    myqueue q1,q2;
    while(true)
    {
        int v; cin>>v;
        if(v==-1) break;
        q1.push(v);
    }
    while(true)
    {
        int v; cin>>v;
        if(v==-1) break;
        q2.push(v);
    }
    if(q1.size()!=q2.size()) cout<<"NO";
    else{
        int test=0;
    while(!q1.empty())
    {
            if(q1.front()!=q2.front())
            {
                test=1;
                break;
            }
            q1.pop();
            q2.pop();
    }
    if(test==0) cout<<"YES";
    else cout<<"NO";
    }
    return 0;
}