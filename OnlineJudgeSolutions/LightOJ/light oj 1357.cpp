#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,string>
#define F first
#define S second
#define pb push_back
#define pp pop_back

vector<int>G[100005];
bool vis[100005];
ll ans,node;
int n;

void dfs(int s)
{
    vis[s]=1;
    node++;
    for(int v:G[s]){
        if(!vis[v]){
            dfs(v);
        }
    }
    ans+=(n-node);
    vis[s]=0;
    return ;
}

void clr()
{
    node=ans=0;
    for(int i=1;i<=n;i++){
        G[i].clear();
    }
    return ;
}


int main ()
{
//  ios_base::sync_with_stdio(false);
//  cin.tie(NULL);
    int T,m,u,v,id=0;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        for(int i=1;i<n;i++){
            scanf("%d %d",&u,&v);
            G[u].pb(v);
            G[v].pb(u);
        }
        dfs(1);
        printf("Case %d: %d %lld\n",++id,n-1,ans);
        clr();
    }

    return 0;
}

