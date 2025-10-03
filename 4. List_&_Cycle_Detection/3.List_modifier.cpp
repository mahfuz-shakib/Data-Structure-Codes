#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>li={10,12,13,14};
    list<int>al;
    //al=li; assign
    //vector<int>v={1,2,3,4,5};
    //v.insert(v.begin()+1,li.begin()+1,li.end()-1);
    //v.erase(v.begin()+1,v.begin()+4);
    //---INSERT AT HEAD--- 
    //li.insert(li.begin(),5,9);
    //li.insert(li.begin(),{101,102,103});
    //li.insert(li.begin(),v.begin(),v.end());
    //li.pop_front()-----head delete---

    //---INSERT AT TAIL---
    //li.insert(li.end(),5,9);
    //li.insert(li.end(),{101,102,103});
    //li.insert(li.end(),v.begin(),v.end());
    //li.pop_back()----tail delete----

    //---INSERT AND DELETE AT POSITION----
    //li.insert(next(li.begin(),2),{101,102,103});
    //li.insert(next(li.begin(),1),v.begin(),v.end());
    //li.erase( next(li.begin(),2) , next(li.begin(),4) );
    //li.erase( next(li.begin(),0) , next(li.begin(),3) );
    //replace(li.begin(),li.end(),10,999);
    for(auto it:li)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    auto it=find(li.begin(),li.end(),41);
    if(it!=li.end())  cout<<"found";
    else cout<<"not found";
    
    return 0;
}