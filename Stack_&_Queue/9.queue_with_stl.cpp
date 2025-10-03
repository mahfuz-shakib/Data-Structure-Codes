#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
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