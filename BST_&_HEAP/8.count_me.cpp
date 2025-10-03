// ~ Bismillahir Rahmanir Rahim ~

#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
int mx=0;
string maxWord="";
void print(stringstream &ss)
{
    string word;
    if(ss>>word)
    {
        mp[word]++;
        cout<<word<<" "<<mp[word]<<endl;
        if(mx<mp[word])  
        {
            mx=mp[word];
            maxWord=word;
        }
        print(ss);
    }
}
int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    
    int tt;  cin>>tt;
    cin.ignore();
    while(tt--)
    {
        string sentence;
        getline(cin, sentence);
        
        stringstream ss (sentence) ;
        print(ss);
        cout<<maxWord<<" "<<mx<<endl;
        mp.clear();
        mx=0;
        maxWord.clear();
    }
    return 0;
}