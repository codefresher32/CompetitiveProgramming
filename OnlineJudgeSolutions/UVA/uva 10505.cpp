#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[2005];
int c[2005];
bool vis[2005];
bool f;
queue<int>q;
int on,zr;


void bfs(int s)
{
    int u;
    vis[s]=1;
    c[s]=1;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        q.pop();
        if(c[u]==1){
           on++;
        }
        else{
            zr++;
        }
        for(int v:G[u]){
            if(c[v]==-1){
                vis[v]=1;
                c[v]=(c[u]==1)?0:1;
                q.push(v);
            }
            else if(c[v]==c[u]){
                f=1;
            }
        }
    }
    return ;
}

void clr(int n)
{
    for(int i=0;i<=n;i++){
        G[i].clear();
    }
    memset(vis,0,sizeof(vis));
    on=zr=f=0;
    return ;
}


int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n,m,u,v,t,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int k=1;k<=n;k++){
            scanf("%d",&m);
            for(int i=1;i<=m;i++){
                scanf("%d",&v);
                if(v<1||v>n){
                    continue;
                }
                G[k].push_back(v);
                G[v].push_back(k);
            }
        }
        memset(c,-1,sizeof(c));
        int ans=0;
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                on=zr=f=0;
                bfs(i);
                if(!f){
                    ans+=max(on,zr);
                }
            }
        }
        printf("%d\n",ans);
        clr(n);
    }

    return 0;
}


