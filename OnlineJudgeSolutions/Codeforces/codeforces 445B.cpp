 #include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[55];
bool vis[55];

void dfs(int s)
{
    vis[s]=1;
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
    for(int i=1;i<=m;i++){
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    int mx=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
            mx++;
        }
    }
    ll ans=1;
    for(int i=1;i<=(n-mx);i++){
        ans*=2*1ll;
    }
    cout<<ans<<endl;
    return 0;
}



