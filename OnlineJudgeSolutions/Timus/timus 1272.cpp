#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

vector<int>G[10005];
bool vis[10005];


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
    int n,m,k,u,v;
    cin>>n>>k>>m;
    for(int i=1;i<=k;i++){
        cin>>u>>v;
        G[u].pb(v);
        G[v].pb(u);
    }
    for(int i=1;i<=m;i++){
        cin>>u>>v;
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            cnt++;
            dfs(i);
        }
    }
    cout<<cnt-1<<endl;
    return 0;
}


