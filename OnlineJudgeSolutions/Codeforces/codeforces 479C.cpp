#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    int cnt=-1;
    for(int i=0;i<n;i++)
    {
        if(cnt<=v[i].second)
            cnt=v[i].second;
        else
            cnt=v[i].first;
    }
    cout<<cnt<<endl;
    return 0;
}
