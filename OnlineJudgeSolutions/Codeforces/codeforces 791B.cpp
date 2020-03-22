#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[150005];
bool vis[150004];
int ver,edge;

void dfs(int u)
{
    vis[u]=1;
    ver++;
    edge+=G[u].size();
    for(int v:G[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,u,v,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    bool f=1;
    for(int i=1;i<=n;i++){
        v=G[i].size();
        if(v==0){
            vis[i]=1;
            continue;
        }
        if(!vis[i]){
            dfs(i);
            //cout<<edge<<ver<<endl;
            if(edge!=(ll)ver*(ver-1)){
                cout<<"NO"<<endl;
                return 0;
            }
            edge=ver=0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}


