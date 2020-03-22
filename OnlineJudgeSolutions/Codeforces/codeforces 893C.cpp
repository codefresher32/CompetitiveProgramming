#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[100005];
int a[100005];
bool vis[100005];
int mn=INT_MAX;

void dfs(int s)
{
    vis[s]=1;
    mn=min(mn,a[s]);
    for(int v:G[s]){
        if(!vis[v]){
            dfs(v);
        }
    }
    return ;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,u,v;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=m;i++){
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    ll ans=0;
    for(int i=1;i<=n;i++){
        if(vis[i]){
            continue;
        }
        dfs(i);
        ans+=mn;
        mn=INT_MAX;
    }
    cout<<ans<<endl;
    return 0;
}
