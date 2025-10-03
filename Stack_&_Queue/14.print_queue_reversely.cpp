#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    int n;cin>>n;
    while(n--)
    {
        int v;cin>>v;
        q.push(v);
    }
    stack<int>st;
    while(!q.empty())
    {
        st.push(q.front());
        q.pop(); 
    }
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}