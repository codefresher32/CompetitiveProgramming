#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<ll,ll>
#define F first
#define S second
#define pb push_back
#define pp pop_back


vector<int>G[305];
bool vis[305];
int parent[305],sr,ds,c[305];

void bfs(int s)
{
    int u;
    memset(vis,0,sizeof(vis));
    memset(c,0,sizeof(c));
    memset(parent,-1,sizeof(parent));
    queue<int>q;
    vis[s]=1;
    c[s]=0;
    parent[s]=s;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int v:G[u]){
            if(!vis[v]){
                vis[v]=1;
                parent[v]=u;
                c[v]=1+c[u];
                q.push(v);
            }
            else if(c[v]==c[u]+1){
                if(parent[v]>u){
                    parent[v]=u;
                }
            }
        }
    }
    return ;
}

void path(int node)
{
    if(node==parent[node]){
        printf("%d",node);
        return ;
    }
    path(parent[node]);
    printf(" %d",node);
}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    string s,s1;
    int n,m,u,l,v;
    char ch;
    while(scanf("%d",&n)!=EOF){
        getchar();
        for(int i=1;i<=n;i++){
            getline(cin,s);
            stringstream sin(s);
            sin>>u>>ch;
            while(sin>>v){
                G[u].pb(v);
                sin>>ch;
            }
        }
        scanf("%d",&m);
        printf("-----\n");
        while(m--){
            scanf("%d%d",&sr,&ds);
            bfs(sr);
            if(!vis[ds]){
                printf("connection impossible\n");
            }
            else{
                path(ds);
                printf("\n");
            }
        }
        for(int i=1;i<=n;i++){
            G[i].clear();
        }
    }

    return 0;
}
