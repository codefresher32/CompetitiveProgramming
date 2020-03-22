#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    vector<pair<int,int>>v;
    vector<int>x;
    set<int>m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(make_pair(a,i+1));
        m.insert(a);
    }
    sort(v.begin(),v.end());
    if(n==1||(n==2&&m.size()==1))
        cout<<-1<<endl;
    else
    {
        cout<<n-1<<endl;
        for(int i=0;i<n-2;i++)
            x.push_back(v[i].second);
        x.push_back(v[n-1].second);
        sort(x.begin(),x.end());
        for(int i=0;i<x.size();i++)
            cout<<x[i]<<" ";
    }
    return 0;
}
