#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


vector<int>G[105];
bool vis[105];
int st[105];
int ed[105];
queue<int>q;

void bfs(int s,int ti[105])
{
    int u;
    vis[s]=1;
    ti[s]=0;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int v:G[u]){
            if(!vis[v]){
                vis[v]=1;
                ti[v]=ti[u]+1;
                q.push(v);
            }
        }
    }
    return ;
}


void clr(int n)
{
    for(int i=0;i<n;i++){
        G[i].clear();
    }
    memset(vis,0,sizeof(vis));
    memset(st,0,sizeof(st));
    memset(ed,0,sizeof(ed));
    return ;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,u,v,t,sr,ds,id=0;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1;i<=m;i++){
            cin>>u>>v;
            G[u].push_back(v);
            G[v].push_back(u);
        }
        cin>>sr>>ds;
        bfs(sr,st);
        memset(vis,0,sizeof(vis));
        bfs(ds,ed);
        int mx=-1;
        for(int i=0;i<n;i++){
            mx=max(mx,st[i]+ed[i]);
        }
        printf("Case %d: %d\n",++id,mx);
        clr(n);
    }
    return 0;
}


