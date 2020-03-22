#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<pair<int,int>>G[10005];
ll d[10005];
struct node
{
    int v;
    ll w;
    node(int x,ll y)
    {
        v=x;
        w=y;
    }
    bool operator<(const node &p)const
    {
        return w>p.w;
    }
};
priority_queue<node>pq;

void dijkstra(int s,int n)
{
    int v,w;
    for(int i=1;i<=n;i++){
        d[i]=1e18;
    }
    d[s]=0;
    pq.push(node(s,0));
    while(!pq.empty()){
        node tp=pq.top();
        pq.pop();
        for(int i=0;i<G[tp.v].size();i++){
            v=G[tp.v][i].first;
            w=G[tp.v][i].second;
            if(d[tp.v]+w<d[v]){
                d[v]=d[tp.v]+w;
                pq.push(node(v,d[v]));
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
    return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,u,v,w,t,s,des;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        for(int i=1;i<=m;i++){
            scanf("%d%d%d",&u,&v,&w);
            G[u].push_back(make_pair(v,w));
        }
        scanf("%d%d",&s,&des);
        dijkstra(s,n);
        if(d[des]==1e18){
            printf("NO\n");
        }
        else{
            printf("%d\n",d[des]);
        }
        clr(n);
    }
    return 0;
}

