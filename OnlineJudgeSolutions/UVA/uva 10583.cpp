#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[50005];
int vis[50005];
int c[50005];
queue<int>q;

void clr(int n)
{
    memset(vis,0,sizeof(vis));
    memset(c,0,sizeof(c));
    for(int i=0;i<=n;i++){
        G[i].clear();
    }
    return ;
}

void bfs(int s)
{
    int u,v;
    vis[s]=1;
    c[s]=0;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int i=0;i<G[u].size();i++){
            v=G[u][i];
            if(!vis[v]){
                vis[v]=1;
                c[v]=c[u]+1;
                q.push(v);
            }
        }
    }
    return ;
}


int main()
{
    int n,m,u,v,tc=0;
    while(cin>>n>>m){
        if(n==0&&m==0){
            return 0;
        }
        for(int i=1;i<=m;i++){
            cin>>u>>v;
            G[u].push_back(v);
            G[v].push_back(u);
        }
        ll cnt=0;
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                bfs(i);
                cnt++;
            }
        }
        printf("Case %d: %lld\n",++tc,cnt);
        clr(n);
    }
    return 0;
}

