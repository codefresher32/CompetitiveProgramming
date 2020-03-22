#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<int>G[105];
int d[105];
int cost[105][105];
priority_queue<int,vector<int>,greater<int>>pq;

void clr(int f)
{
    if(f){
        for(int i=0;i<=100;i++){
            G[i].clear();
        }
    }
    for(int i=1;i<=100;i++){
        d[i]=INT_MAX;
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
    int tc,n,m,t,u,v,w,des;
    cin>>tc;
    while(tc--){
        cin>>n>>des>>t>>m;
        for(int i=1;i<=m;i++){
            cin>>u>>v>>w;
            G[u].push_back(v);
            cost[u][v]=w;
        }
        int cnt=0;
        for(int i=1;i<=n;i++){
            clr(0);
            dijkstra(i);
            if(d[des]<=t){
                cnt++;
            }
        }
        printf("%d\n",cnt);
        if(tc){
            printf("\n");
        }
        clr(1);
    }
    return 0;
}

