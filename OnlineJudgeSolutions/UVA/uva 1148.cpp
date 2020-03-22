#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[100005];
bool vis[100005];
int c[100005],ds;

void bfs(int s)
{
    int u;
    queue<int>q;
    vis[s]=1;
    c[s]=0;
    q.push(s);
    while(!q.empty()){
       u=q.front();
       q.pop();
       for(int v:G[u]){
            if(!vis[v]){
                vis[v]=1;
                c[v]=c[u]+1;
                q.push(v);
                if(v==ds){
                    return ;
                }
            }
       }
    }
}


void clr(int n)
{
    for(int i=0;i<n;i++){
        G[i].clear();
    }
    memset(vis,0,sizeof(vis));
    memset(c,0,sizeof(c));
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,u,v,id,t,sr;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
           scanf("%d%d",&u,&m);
           while(m--){
               scanf("%d",&v);
               G[u].push_back(v);
               G[v].push_back(u);
           }
        }
        scanf("%d%d",&sr,&ds);
        bfs(sr);
        printf("%d %d %d\n",sr,ds,c[ds]-1);
        clr(n);
        if(t){
            printf("\n");
        }
    }
    return 0;
}
