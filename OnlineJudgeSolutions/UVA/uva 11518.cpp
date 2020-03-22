#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[10005];
bool vis[10005];
int cnt;

void dfs(int s)
{
    vis[s]=1;
    cnt++;
    for(int v:G[s]){
        if(!vis[v]){
            dfs(v);
        }
    }
    return ;
}

void clr(int n)
{
    for(int i=1;i<=n;i++){
        G[i].clear();
    }
    cnt=0;
    memset(vis,0,sizeof(vis));
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,m,l,u,v;
    cin>>t;
    while(t--){
        cin>>n>>m>>l;
        for(int i=1;i<=m;i++){
            cin>>u>>v;
            G[u].push_back(v);
        }
        while(l--){
            cin>>u;
            if(!vis[u]){
                dfs(u);
            }
        }
        cout<<cnt<<endl;
        clr(n);
    }
    return 0;
}

