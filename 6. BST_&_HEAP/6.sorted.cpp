// ~ Bismillahir Rahmanir Rahim ~

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    
    ll tt; cin>>tt;
    while(tt--)
    {
        int n; cin>>n;
        int l[n];
        set<int>s;
        for(int i=0;i<n;i++) 
        {
            cin>>l[i];
            s.insert(l[i]);
        }
        for(auto it:s) cout<<it<<" ";
        cout<<endl;
    }
    return 0;
}