#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,string>
#define F first
#define S second
#define pb push_back
#define pp pop_back

vector<int>G[200005];
bool vis[200005];

void bfs(int s)
{
    int u;
   vis[s]=1;
   queue<int>q;
   q.push(s);
   //cout<<endl<<endl;
   while(!q.empty()){
        u=q.front();
        q.pop();
        for(int v:G[u]){
            if(!vis[v]){
                printf("%d %d\n",u,v);
                vis[v]=1;
                q.push(v);
            }
        }
   }
   return ;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,u,v,sr;
    cin>>n>>m;
    int mx=0;
    for(int i=1;i<=m;i++){
        cin>>u>>v;
        G[u].pb(v);
        G[v].pb(u);
        if(G[u].size()<G[v].size()){
            if(mx<G[v].size()){
                mx=G[v].size();
                sr=v;
            }
        }
        else{
            if(mx<G[u].size()){
                mx=G[u].size();
                sr=u;
            }
        }
    }
    bfs(sr);
    return 0;
}


