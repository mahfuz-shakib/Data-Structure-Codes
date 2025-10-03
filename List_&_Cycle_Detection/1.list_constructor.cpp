#include<bits/stdc++.h>
using namespace std;
int main()
{
    //list<int>li(10); 10 ta garbage value
    //list<int>li(10,2); 10 ta 2 thakbe
    //list<int>li={1,2,5};
    //list<int>l(li);
    //int a[3]={7,8,9};
    //list<int>l(a,a+3);
    vector<int>v={4,5,6};
    list<int>l(v.begin(),v.end());
    for(auto it:l)
    {
        cout<<it<<endl;
    }
    
    return 0;
}