#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


vector<int>G[2000];
int c[2000];
int vis[2000];
queue<int>q;


void clr()
{
    memset(c,0,sizeof(c));
    memset(vis,0,sizeof(vis));
    for(int i=0;i<2000;i++){
        G[i].clear();
    }
    return ;
}

void bfs(int s)
{
    int u,v;
    vis[s]=1;
    q.push(s);
    c[s]=0;
    while(!q.empty()){
        u=q.front();
        for(int i=0;i<G[u].size();i++){
            v=G[u][i];
            if(!vis[v]){
                vis[v]=1;
                c[v]=c[u]+1;
                q.push(v);
            }
        }
        q.pop();
    }
    return ;
}

int main()
{

    int n,p,u,v,t;
    scanf("%d",&t);
    bool f=0;
    while(t--){
        cin>>n>>p;
        while(p--){
            cin>>u>>v;
            G[u].push_back(v);
            G[v].push_back(u);
        }
        bfs(0);
        if(f){
            printf("\n");
        }
        f=1;
        for(int i=1;i<n;i++){
            printf("%d\n",c[i]);
        }
        clr();
    }

    return 0;
}


