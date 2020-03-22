#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[100005];
int c[100005];
int d[100005];
bool vis[100005];
int cnt,m;

void dfs(int u,int f)
{
    int v;
    vis[u]=1;
    if(f<=m){
        if(G[u].size()==1&&vis[G[u][0]]){
            cnt++;
        }
        else{
            for(int i=0;i<G[u].size();i++){
                v=G[u][i];
                if(!vis[v]){
                    if(d[v]==1){
                        dfs(v,f+1);
                    }
                    else{
                        dfs(v,0);
                    }
                }
            }
        }
    }
    return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,u,v;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>d[i];
    }
    for(int i=1;i<n;i++){
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    dfs(1,d[1]);
    cout<<cnt<<endl;
    return 0;
}
