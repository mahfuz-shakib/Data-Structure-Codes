#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>li={1,2,3};
    //cout<<li.max_size()<<endl;
    cout<<li.size()<<endl;
    //li.clear();
    //cout<<li.size()<<endl;
    li.resize(2);
    //li.resize(4);
    cout<<li.size()<<endl;
    for(auto it:li)
    {
        cout<<it<<" ";
    }
    //li.clear();
    if(li.empty()) cout<<"Empty";
    else cout<<"Not empty";
    return 0;
}