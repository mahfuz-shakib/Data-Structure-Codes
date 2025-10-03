#include<bits/stdc++.h>
using namespace std;
void fun(int * &p)
{
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    cout<<"kichuna"<<endl;
    p=NULL;
    cout<<&p<<endl;
}
int main()
{      
    int val=15;
    int* ptr;
    ptr=&val;
    fun(ptr); //forwarding pointer for referencing
    cout<<"1 "<<&val<<endl;
    cout<<"2 "<<ptr<<endl;//output address 0 hobe
    cout<<"3 "<<&ptr<<endl;//ptr er nijer address
    cout<<"4 "<<val<<endl;
    cout<<"5 "<<*ptr<<endl; // value nei 
    return 0;
}