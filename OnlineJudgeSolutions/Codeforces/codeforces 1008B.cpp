#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,w;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        cin>>w>>h;
        if(w>h)
            swap(w,h);
        v.push_back(make_pair(w,h));
    }
    h=v[0].second;
    for(int i=1;i<n;i++)
    {
        if(h>=v[i].second)
            h=v[i].second;
        else if(h>=v[i].first)
            h=v[i].first;
        else
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}
