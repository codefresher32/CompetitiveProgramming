#include<bits/stdc++.h>
using namespace std;

int cost[100005],tr[100005],w[100005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,m;
    string str,s;
    map<string,int>mp;
    map<string,int>::iterator it;
    cin>>n>>k>>m;
    for(int i=1;i<=n;i++){
        cin>>s;
        mp[s]=i;
    }
    for(int i=1;i<=n;i++){
        cin>>cost[i];
    }
    int x,y,z;
    for(int i=1;i<=k;i++){
        cin>>x;
        int mn=INT_MAX;
        for(int j=1;j<=x;j++){
            cin>>y;
            mn=min(mn,cost[y]);
            tr[y]=i;
        }
        w[i]=mn;
    }
    long long ans=0;
    for(int i=1;i<=m;i++){
        cin>>str;
        it=mp.find(str);
        ans+=w[tr[it->second]];
    }
    cout<<ans<<endl;
    return 0;
}
