#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[10005];
int d[10005];
bool vis[10005];
int m[10005];
int mx=-1;
int in=1;

queue<int>q;

void bfs(int s)
{
    int u,v;
    vis[s]=1;
    d[s]=0;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int i=0;i<G[u].size();i++){
            v=G[u][i];
            if(!vis[v]){
                vis[v]=1;
                d[v]=d[u]+1;
                q.push(v);
                if(mx<d[v]){
                    mx=d[v];
                    in=v;
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
    cin>>n;
    for(int i=1;i<n;i++){
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    int m1,m2;
    bfs(in);
    m1=mx;
    mx=-1;
    memset(vis,0,sizeof(vis));
    memset(d,0,sizeof(d));
    bfs(in);
    m2=mx;
    cout<<max(m1,m2)<<endl;
    return 0;
}
