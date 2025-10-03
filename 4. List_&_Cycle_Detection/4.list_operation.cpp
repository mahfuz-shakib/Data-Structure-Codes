#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>li={10,12,10,11,13,10,14};
    //li.remove(10);
    //li.sort();
    //li.sort(greater<int>());
    li.reverse();
    for(auto it:li)
    {
        cout<<it<<" ";
    }
    return 0;
}