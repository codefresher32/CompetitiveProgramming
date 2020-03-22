#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[205];
int c[205];
bool vis[205];
bool f;
queue<int>q;
int on,zr;


void bfs(int s)
{
    memset(c,-1,sizeof(c));
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,u,v,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        for(int i=1;i<=m;i++){
            scanf("%d%d",&u,&v);
            G[u].push_back(v);
            G[v].push_back(u);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                bfs(i);
                ans+=min(on,zr);
                if(on==1&&zr==0){
                    ans++;
                }
                on=zr=0;
            }
        }
        if(!f){
            printf("%d\n",ans);
        }
        else{
            printf("-1\n");
        }
        clr(n);
    }

    return 0;
}

