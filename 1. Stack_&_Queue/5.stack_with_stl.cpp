#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    while(true)
    {
        int v; cin>>v;
        if(v==-1) break;
        s.push(v);
    }
    cout<<s.size()<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}