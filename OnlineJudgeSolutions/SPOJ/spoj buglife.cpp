#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[20005];
int c[20005];
queue<int>q;
bool f;

void bfs(int s)
{
    c[s]=1;
    int u;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int v:G[u]){
            if(c[v]==-1){
               c[v]=c[u]==1?0:1;
               q.push(v);
            }
            else{
                if(c[u]==c[v]){
                    f=1;
                }
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
    memset(c,-1,sizeof(c));
    f=0;
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,l,x,y,t,m,u,v,tc=0;
    cin>>t;
    while(t--){
        cin>>n>>m;
        clr(n);
        for(int i=1;i<=m;i++){
            cin>>u>>v;
            G[u].push_back(v);
            G[v].push_back(u);
        }
        printf("Scenario #%d:\n",++tc);
        for(int i=1;i<=n;i++){
            if(c[i]==-1){
                bfs(i);
            }
        }
        if(!f){
            printf("No suspicious bugs found!\n");
        }
        else{
            printf("Suspicious bugs found!\n");
        }
    }
    return 0;
}

