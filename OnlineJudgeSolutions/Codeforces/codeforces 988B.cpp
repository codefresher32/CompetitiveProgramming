#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct compare {
    bool operator()(const string& first, const string& second) {
        return first.size() < second.size();
    }
};

int main()
{
    int n;
    string s,s1,s2;
    compare c;
    vector<string>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(), v.end(), c);
    int l=0,t,x;
    for(int i=0;i<n-1;i++)
    {
        l=v[i].size();
        s2="";
        s2=v[i];
        t=0;
        x=v[i+1].size();
        for(int j=0;j<x;j++)
        {
            s1="";
            s1=v[i+1].substr(j,l);
            if(s1==s2)
            {
                t=1;
                break;
            }
        }
        if(!t)
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    for(int i=0;i<n;i++)
        cout<<v[i]<<endl;
    return 0;
}

