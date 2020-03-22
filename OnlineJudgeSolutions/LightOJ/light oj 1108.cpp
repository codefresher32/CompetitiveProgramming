#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

struct Edge
{
    int u,v,w;
    Edge(int x,int y,int z)
    {
        u=x,v=y,w=z;
    }
};
vector<int>vs;
vector<Edge>E;
vector<int>G[1005];
int d[1005];
bool vis[1005];
int n,m;

void dfs(int s)
{
    vis[s]=1;
    vs.push_back(s);
    for(int v:G[s]){
        if(!vis[v]){
            dfs(v);
        }
    }
    return ;
}

void solve()
{
    int u,v;
    for(int i=0;i<=n;i++){
        d[i]=1e9;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            u=E[j].u;
            v=E[j].v;
            if(d[u]+E[j].w<d[v]){
                d[v]=d[u]+E[j].w;
            }
        }
    }
    for(int i=0;i<m;i++){
        u=E[i].u;
        v=E[i].v;
        if(d[u]+E[i].w<d[v]){
            d[v]=d[u]+E[i].w;
            if(!vis[u]){
                dfs(u);
            }
        }
    }
    return ;
}


void clr()
{
    E.clear();
    vs.clear();
    for(int i=0;i<=n;i++){
        G[i].clear();
    }
    memset(vis,0,sizeof(vis));
    return ;
}


int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int u,v,w,x,y,t;
    scanf("%d",&t);
        for(int j=1;j<=t;j++){
        scanf("%d%d",&n,&m);
        for(int i=1;i<=m;i++){
            scanf("%d%d%d",&u,&v,&w);
            E.push_back(Edge(v,u,w));
            G[v].push_back(u);
        }
        solve();
        printf("Case %d:",j);
        if(vs.size()==0){
            printf(" impossible\n");
        }
        else{
            sort(vs.begin(),vs.end());
            for(int x:vs){
                printf(" %d",x);
            }
            printf("\n");
        }
        clr();
    }
    return 0;
}
