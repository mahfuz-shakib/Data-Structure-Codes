// ~ Bismillahir Rahmanir Rahim ~

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    ll n;cin>>n;
    map<string, vector<ll>>mp;
    string s; int j;
    for(int i=0;i<n;i++)
    {
        cin>>s>>j;
        mp[s].push_back(j);
    }
    for(auto it:mp)
    {
        
        sort(it.second.begin(),it.second.end(),greater<int>());
        for(auto i:it.second) 
        {
            cout<<it.first<<" "<<i<<endl;
        }
    }
    return 0;
}