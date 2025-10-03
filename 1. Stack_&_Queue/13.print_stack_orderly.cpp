#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st,cst;
    int n;cin>>n;
    while(n--)
    {
        int v;cin>>v;
        st.push(v);
    }
    while(!st.empty())
    {
        cst.push(st.top());
        st.pop();
    }
    st=cst;
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}