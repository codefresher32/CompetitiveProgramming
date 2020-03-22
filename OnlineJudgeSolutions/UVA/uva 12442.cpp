#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[50005];
int c[50005];
bool vis[50005];

int dfs(int s)
{
    int tl=0;
    vis[s]=1;
    for(int v:G[s]){
        if(!vis[v]){
            tl+=1+dfs(v);
        }
    }
    vis[s]=0;
    return c[s]=tl;
}


void clr(int n)
{
    for(int i=1;i<=n;i++){
        G[i].clear();
    }
    memset(vis,0,sizeof(vis));
    return ;
}

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t,n,u,v,m;
    scanf("%d",&t);
    for(int k=1;k<=t;k++){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d%d",&u,&v);
            G[u].push_back(v);
        }
        memset(c,-1,sizeof(c));
        int mx=0,ans=0;
        for(int i=1;i<=n;i++){
            if(c[i]==-1){
                dfs(i);
            }
            if(mx<c[i]){
                mx=c[i];
                ans=i;
            }
        }
        printf("Case %d: %d\n",k,ans);
        clr(n);
    }
    return 0;
}

