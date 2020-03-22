#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,ll>
#define pi pair<string,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 10
#define ex 1e-7


struct node
{
    int v;
    ll w;
    node(int vv,ll ww){
        v=vv;
        w=ww;
    }
    bool operator<(const node &p)const{
        return w>p.w;
    }
};


ll d[100005];
vector<pii>G[100005];


void dijkstra(int s,int n)
{
    for(int i=1;i<=n+1;i++){
        d[i]=1e18;
    }
    priority_queue<node>pq;
    d[s]=0;
    pq.push(node(s,d[s]));
    while(!pq.empty()){
        node tp=pq.top();
        pq.pop();
        for(pii V:G[tp.v]){
            if(d[V.F]>d[tp.v]+V.S){
                d[V.F]=d[tp.v]+V.S;
                pq.push(node(V.F,d[V.F]));
            }
        }
    }
    return ;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,m,s,u,k,v,id=0;
    ll x,w;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %lld %d %d",&n,&k,&x,&m,&s);
        for(int i=1;i<=k;i++){
            G[n+1].pb({i,x});
            G[i].pb({n+1,x});
        }
        for(int i=1;i<=m;i++){
            scanf("%d %d %lld",&u,&v,&w);
            G[u].pb({v,2ll*w});
            G[v].pb({u,2ll*w});
        }
        dijkstra(s,n);
        printf("%lld",d[1]/2);
        for(int i=2;i<=n;i++){
            printf(" %lld",d[i]/2ll);
        }
        for(int i=1;i<=n+1;i++){
            G[i].clear();
        }
        printf("\n");
    }
    return 0;
}


