// ~ Bismillahir Rahmanir Rahim ~

#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int marks;
        Student(string name, int roll, int marks)
        {
            this->name=name;
            this->roll=roll;
            this->marks=marks;
        }
};
class cmp
{
    public:
    bool operator()(Student a,Student b)
    {
        if(a.marks<b.marks) return true;
        else if(a.marks>b.marks) return false;
        else
        {
            if(a.roll<b.roll)return false;
            else return true;
        }
    }
};
int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    
    int n;  cin>>n;
    priority_queue<Student, vector<Student>,cmp>pq;
    for(int i=0;i<n;i++)
    {
        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
        Student obj(name,roll,marks);
        pq.push(obj);
    }
    int q;  cin>>q;
    while(q--)
    {
        int c;  cin>>c;
        if(c==0)
        {
            string name;
            int roll,marks;
            cin>>name>>roll>>marks;
            Student obj(name,roll,marks);
            pq.push(obj);
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }
        else if(c==1)
        {
            if(pq.empty()) cout<<"Empty"<<endl;
            else cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }
        else if(c==2)
        {
            if(pq.empty()) cout<<"Empty"<<endl;
            else
            {
                pq.pop();
                if(pq.empty()) cout<<"Empty"<<endl;
                else cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }
        }
    }
    return 0;
}