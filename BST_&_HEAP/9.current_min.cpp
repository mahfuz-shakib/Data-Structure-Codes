// ~ Bismillahir Rahmanir Rahim ~

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    
    int n;  cin>>n;
    priority_queue<int, vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++)
    {
        int x;  cin>>x;
        pq.push(x);
    }
    int q;  cin>>q;
    while(q--)
    {
        int c;  cin>>c;
        if(c==0)
        {
            int x;  cin>>x;
            pq.push(x);
            cout<<pq.top()<<endl;
        }
        else if(c==1)
        {
            if(pq.empty()) cout<<"Empty"<<endl;
            else cout<<pq.top()<<endl;
        }
        else if(c==2)
        {
            if(pq.empty()) cout<<"Empty"<<endl;
            else
            {
                pq.pop();
                if(pq.empty()) cout<<"Empty"<<endl;
                else cout<<pq.top()<<endl;
            }
        }
    }
    return 0;
}