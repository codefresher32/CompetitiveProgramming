#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back


struct node
{
    int v;
    ll w;
    node(int a,ll b){
        v=a;
        w=b;
    }
    bool operator<(const node &p)const{
        return w>p.w;
    }
};


vector<pii>G[105];
int n,s,t,ans;
ll d[105];


void dijkstra()
{
    priority_queue<node>pq;
    for(int i=1;i<=100;i++){
        d[i]=INT_MAX;
    }
    d[s]=0;
    pq.push(node(s,d[s]));
    while(!pq.empty()){
        node tp=pq.top();
        pq.pop();
        if(tp.w<=t){
            ans++;
        }
        for(pii u:G[tp.v]){
            if(d[tp.v]+u.S<d[u.F]){
                d[u.F]=d[tp.v]+u.S;
                pq.push(node(u.F,d[u.F]));
            }
        }
    }
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,u,v;
    ll w;
    cin>>n>>s>>t>>m;
    for(int i=1;i<=m;i++){
        cin>>u>>v>>w;
        G[v].pb({u,w});
    }
    dijkstra();
    cout<<ans<<endl;

    return 0;
}


