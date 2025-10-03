#include<bits/stdc++.h>
using namespace std;
vector<int> insertInHeap(vector<int>v,int ci)
{
     int pi=(ci-1)/2;
     while(v[ci]>v[pi])
     {
        swap(v[ci],v[pi]);
        ci=pi;
        pi=(ci-1)/2;
     }
     return v;
}
int main()
{
    int n;  cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++) 
    {
        int x;  cin>>x;
        v.push_back(x);
    v=insertInHeap(v, v.size()-1);
    for(auto it:v)cout<<it<<" ";
    cout<<endl;
    }
    return 0;
} 