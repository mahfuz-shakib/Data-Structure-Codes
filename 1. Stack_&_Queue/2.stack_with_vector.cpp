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
            if(v.size()!=0)
                v.pop_back();
        }
        void sizee()
        {
            cout<< v.size()<<endl;
        }
        void top()
        {
            if(v.size()!=0) 
                cout<< v.back()<<endl;
        }
        bool empty()
        {
            if(v.size()==0) return true;
            else return false;
        }
};
int main()
{
    myStack s;
    while(true)
    {
        int v; cin>>v;
        if(v==-1) break;
        s.push(v);
    }
    cout<<s.v.size()<<endl;
   // s.sizee();
    while(!s.empty())
    {
            s.top();
            s.pop();
    }
    return 0;
}