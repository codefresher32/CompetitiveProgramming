#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,a,sum=0,c=0;
    cin>>n>>k;
    vector<pair<int,int>>v;
    vector<int>p;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(make_pair(a,i));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        sum+=v[i].first;
        if(sum<=k)
        {
            c++;
            p.push_back(v[i].second+1);
        }
    }
    cout<<c<<endl;
    for(int i=0;i<p.size();i++)
        cout<<p[i]<<" ";
    cout<<endl;
    return 0;
}
