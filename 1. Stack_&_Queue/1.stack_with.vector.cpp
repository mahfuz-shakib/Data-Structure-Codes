#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    vector<int>v;
        void push(int val)
        {
            v.push_back(val);
        }
        void pop()
        {
            if(v.size()!=0)
                v.pop_back();
        }
        void sizee()
        {
            cout<< v.size()<<endl;
        }
        void top()
        {
            if(v.size()!=0) 
                cout<< v.back()<<endl;
        }
        bool empty()
        {
            if(v.size()==0) return true;
            else return false;
        }
};
int main()
{
    myStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    //s.push(40);
    s.pop();
    s.top();
    //s.sizee();
    cout << s.empty() << endl;
    for(auto it: s.v)
    {
        cout<<it<<endl;
    }
    return 0;
}