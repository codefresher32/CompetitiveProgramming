#include<bits/stdc++.h>
using namespace std;

bool c(const pair<int,int>&a,const pair<int,int>&b)
{
    return a.second>b.second;
}

int main()
{
    int n,p=0,a,b;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            v.push_back(make_pair(a,b));
        }
        sort(v.begin(),v.end(),c);
        int cnt=0,ans=0;
        for(int i=0;i<n;i++)
        {
            cnt+=v[i].first;
            ans=max(ans,cnt+v[i].second);
        }
        printf("Case %d: %d\n",++p,ans);
    }
}
