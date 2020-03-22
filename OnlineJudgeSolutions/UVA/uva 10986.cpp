#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<int>G[20005];
int cost[20005][20005];
int d[20005];
priority_queue<int,vector<int>,greater<int>>pq;

void clr(int n)
{
    for(int i=0;i<=n;i++){
        d[i]=INT_MAX;
        G[i].clear();
    }
    return ;
}

void dijkstra(int s)
{
    int u,v;
    d[s]=0;
    pq.push(s);
    while(!pq.empty()){
        u=pq.top();
        pq.pop();
        for(int i=0;i<G[u].size();i++){
            v=G[u][i];
            if(d[u]+cost[u][v]<d[v]){
                d[v]=d[u]+cost[u][v];
                pq.push(v);
            }
        }
    }
    return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc,n,m,s,t,u,v,w,x=0;
    cin>>tc;
    while(tc--){
        cin>>n>>m>>s>>t;
        clr(n);
        for(int i=1;i<=m;i++){
            cin>>u>>v>>w;
            G[u].push_back(v);
            G[v].push_back(u);
            cost[u][v]=w;
            cost[v][u]=w;
        }
        dijkstra(s);
        printf("Case #%d: ",++x);
        if(d[t]==INT_MAX){
            printf("unreachable\n");
        }
        else{
            printf("%d\n",d[t]);
        }
    }
    return 0;
}
