#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<int>G[105];
int d[105];
int a[105];
bool vis[105];
queue<int>q;


void bfs(int s,int *time)
{
    int u,v;
    vis[s]=1;
    time[s]=0;
    q.push(s);
    while(!q.empty()){
       u=q.front();
       q.pop();
       for(int i=0;i<G[u].size();i++){
            v=G[u][i];
            if(!vis[v]){
                vis[v]=1;
                time[v]=time[u]+1;
                q.push(v);
            }
       }
    }
    return ;
}

void clr()
{
    memset(d,0,sizeof(d));
    memset(a,0,sizeof(a));
    memset(vis,0,sizeof(vis));
    for(int i=0;i<=100;i++){
        G[i].clear();
    }
    return ;
}


int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t,tc=0,n,u,v,w,m,sr,ds;
    scanf("%d",&t);
    while(t--){
        cin>>n>>m;
        for(int i=1;i<=m;i++){
            cin>>u>>v;
            G[u].push_back(v);
            G[v].push_back(u);
        }
        cin>>sr>>ds;
        bfs(sr,d);
        memset(vis,0,sizeof(vis));
        bfs(ds,a);
        int mx=-1;
        for(int i=0;i<n;i++){
            mx=max(mx,a[i]+d[i]);
        }
        printf("Case %d: %d\n",++tc,mx);
        clr();
    }
    return 0;
}

