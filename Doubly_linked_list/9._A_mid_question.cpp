#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>li;
    while(true)
    {
        int v;cin>>v;
        if(v==-1) break;
        li.push_back(v);
    }
    li.sort();
    for(int i=1; i<li.size(); )
    {
        
        if( *next(li.begin(),i-1) == *next(li.begin(),i) )
        {
            li.erase(next(li.begin(),i));
            continue;
        }
        i++;
    }
    for(auto it:li)cout<<it<<" ";
    return 0;
}