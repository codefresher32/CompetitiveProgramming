#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back

vector<int>G[30];
bool vis[30][30];
int mx;

void dfs(int s,int sum)
{
    for(int v:G[s]){
        if(!vis[s][v]){
            vis[v][s]=vis[s][v]=1;
            dfs(v,sum+1);
            vis[s][v]=vis[v][s]=0;
        }
    }
    mx=max(mx,sum);
    return ;
}



int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,m,u,v;
    while(scanf("%d%d",&n,&m)!=EOF&&n){
        for(int i=1;i<=m;i++){
            scanf("%d%d",&u,&v);
            G[u].pb(v);
            G[v].pb(u);
        }
        for(int i=0;i<n;i++){
            dfs(i,0);
            memset(vis,0,sizeof(vis));
        }
        printf("%d\n",mx);
        mx=0;
        for(int i=0;i<n;i++){
            G[i].clear();
        }
    }
    return 0;
}

