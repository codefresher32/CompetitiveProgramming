#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 10
#define ex 1e-7


int scc;
stack<int>st;
bool vis[20005];
vector<int>G[20005],R[20005];
int belong[20005],ind[20005],outd[20005];


void dfs1(int s)
{
    vis[s]=1;
    for(int v:G[s]){
        if(!vis[v]) dfs1(v);
    }
    st.push(s);
    return ;
}

void dfs2(int s)
{
    vis[s]=1;
    belong[s]=scc;
    for(int v:R[s]){
        if(!vis[v]) dfs2(v);
    }
    return ;
}

void dfs3(int s)
{
    vis[s]=1;
    for(int v:G[s]){
        if(belong[s]!=belong[v]){
            outd[belong[s]]++;
            ind[belong[v]]++;
        }
        if(!vis[v]) dfs3(v);
    }
    return ;
}


void clr(int n)
{
    scc=0;
    for(int i=1;i<=n;i++){
        G[i].clear();
        R[i].clear();
        vis[i]=belong[i]=ind[i]=outd[i]=0;
    }
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,m,u,v,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        clr(n);
        for(int i=1;i<=m;i++){
            scanf("%d %d",&u,&v);
            G[u].pb(v);
            R[v].pb(u);
        }
        for(int i=1;i<=n;i++){
            if(!vis[i]) dfs1(i);
        }
        for(int i=1;i<=n;i++){
            vis[i]=0;
        }
        while(!st.empty()){
            u=st.top(),st.pop();
            if(!vis[u]){
                scc++;
                dfs2(u);
            }
        }
        for(int i=1;i<=n;i++){
            vis[i]=0;
        }
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                dfs3(i);
            }
        }
        int x,y;
        x=y=0;
        for(int i=1;i<=scc&&scc>1;i++){
            if(!outd[i]) x++;
            if(!ind[i]) y++;
        }
        printf("Case %d: %d\n",++id,max(x,y));
    }
    return 0;
}


