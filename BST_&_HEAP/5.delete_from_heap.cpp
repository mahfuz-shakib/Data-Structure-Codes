#include<bits/stdc++.h>
using namespace std;
void insertInHeap(vector<int>&v,int ci)
{
     int pi=(ci-1)/2;
     while(v[ci]>v[pi])
     {
        swap(v[ci],v[pi]);
        ci=pi;
        pi=(ci-1)/2;
     }
}
void deleteMaxHeap(vector<int>&v)
{
    int f=0;
     v[f]=v[v.size()-1];
     v.pop_back();
    while(true)
    {
        int lci=2*f+1; //left child inder=lci, current index=f
        int rci=2*f+2; //right child index=c=rci
        int l=v.size()-1;//last value index= l
        if(lci<=l && rci<=l)
        {
            if(v[lci]>=v[rci] && v[lci]>v[f])
            {
                swap(v[lci],v[f]);
                f=lci;
            }
            else if(v[rci]>=v[lci] && v[rci]>v[f])
            {
                swap(v[rci],v[f]);
                f=rci;
            }
            else break;
        }
        else if(lci<=l)
        {
            if(v[lci]>v[f])
            {
                swap(v[lci],v[f]);
                f=lci;
            }
            else break;
        }
        else if(rci<=l)
        {
            if(v[rci]>v[f])
            {
                swap(v[rci],v[f]);
                f=rci;
            }
            else break;
        }
        else
        {
            break;
        }
    }
}
int main()
{
    int n;  cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++) 
    {
        int x;  cin>>x;
        v.push_back(x);
        insertInHeap(v, v.size()-1);
    }
    deleteMaxHeap(v);
    for(auto it:v)cout<<it<<" ";
    return 0;
} 