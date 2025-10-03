#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    queue<int>q1;
    while(n)
    {
        int v;cin>>v;
        q1.push(v);
        n--;
    }
    int m;cin>>m;
    queue<int>q2;
    while(m)
    {
        int v;cin>>v;
        q2.push(v);
        m--;
    }
    queue<int>mq;
    while(!q2.empty())
    {
        while(!q1.empty())
        {
            mq.push(q1.front());
            q1.pop();
        }
        mq.push(q2.front());
        q2.pop();
    }
    while(!mq.empty())
        {
            cout<<mq.front()<<" ";
            mq.pop();
        }
    return 0;                        
}