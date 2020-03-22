#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<pair<int,int>>G[100005];
ll d[100005];
int p[100005];
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
int n;

void dijkstra(int s)
{
    int u,v,w;
    for(int i=1;i<=n;i++){
        d[i]=1e18;
    }
    d[s]=0;
    pq.push(node(s,d[s]));
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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,k,u,v,w;
    cin>>n>>m>>k;
    for(int i=1;i<=m;i++){
        cin>>u>>v>>w;
        G[u].push_back(make_pair(v,w));
        G[v].push_back(make_pair(u,w));
    }
    int cnt=0;
    dijkstra(1);
    for(int i=1;i<=k;i++){
        cin>>v>>w;
        if(d[v]!=w){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}


