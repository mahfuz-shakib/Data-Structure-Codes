#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    vector<int>v;
        void push(int val)
        {
            v.push_back(val);
        }
        void pop()
        {
            v.pop_back();
        }
        int size()
        {
            return v.size();
        }
        int top()
        {
            return v.back();
        }
        bool empty()
        {
            if(v.size()==0) return true;
            else return false;
        }
};
int main()
{
    myStack s1,s2;
    while(true)
    {
        int v; cin>>v;
        if(v==-1) break;
        s1.push(v);
    }
    while(true)
    {
        int v; cin>>v;
        if(v==-1) break;
        s2.push(v);
    }
    if(s1.size()!=s2.size()) cout<<"NO";
    else{
        int test=0;
    while(!s1.empty())
    {
            if(s1.top()!=s2.top())
            {
                test=1;
                break;
            }
            s1.pop();
            s2.pop();
    }
    if(test==0) cout<<"YES";
    else cout<<"NO";
    }
    return 0;
}