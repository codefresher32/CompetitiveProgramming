#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x,y;
    long long sum=0;
    vector<pair<int,int>>p;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        p.push_back(make_pair(x,y));
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        p.push_back(make_pair(x,y));
    }
    sort(p.begin(),p.end());
    for(int i=0;i<(n+m);i++)
    {
        if(p[i].first==p[i+1].first){
            sum+=max(p[i].second,p[i+1].second);
            i++;
            continue;
        }
        else
            sum+=p[i].second;
    }

    cout<<sum<<endl;
    return 0;
}
