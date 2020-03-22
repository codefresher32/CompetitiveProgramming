#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
ll mod=1e9+7;

vector<int>G[100005];
bool vis[100005];
ll cnt;

void dfs(int s)
{
    vis[s]=1;
    cnt++;
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
    int q,n,m,u,v;
    cin>>q;
    while(q--){
        cin>>n>>m;
        for(int i=1;i<=m;i++){
            cin>>u>>v;
            G[u].pb(v);
            G[v].pb(u);
        }
        ll ans,c;
        ans=1,c=0;
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                dfs(i);
                c++;
                ans=(ans*(cnt%mod))%mod;
                cnt=0;
            }
        }
        cout<<c<<" "<<ans<<endl;
        for(int i=1;i<=n;i++){
            G[i].clear();
            vis[i]=0;
        }
    }
    return 0;
}


