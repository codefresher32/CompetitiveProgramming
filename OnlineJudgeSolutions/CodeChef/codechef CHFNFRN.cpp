#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

vector<int>G[1005];
bool vis[1005][1005];
int d[1005];


bool bfs(int s)
{
    int u;
    queue<int>q;
    q.push(s);
    d[s]=0;
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int v:G[u]){
            if(d[v]==-1){
                d[v]=!d[u];
                q.push(v);
            }
            else if(u!=v&&d[u]==d[v]){
                return false;
            }
        }
    }
    return true;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,u,v,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1;i<=m;i++){
            cin>>u>>v;
            vis[u][v]=1;
            vis[v][u]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if(!vis[i][j]&&!vis[j][i]){
                    G[i].pb(j);
                    G[j].pb(i);
                }
                else{
                    vis[i][j]=vis[j][i]=0;
                }
            }
        }
        bool f=0;
        memset(d,-1,sizeof(d));
        for(int i=1;i<=n;i++){
            if(d[i]==-1){
                if(!bfs(i)){
                    f=1;
                    break;
                }
            }
        }
        if(f){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
        for(int i=1;i<=n;i++){
            G[i].clear();
        }
        //memset(vis,0,sizeof(vis));
    }

    return 0;
}



