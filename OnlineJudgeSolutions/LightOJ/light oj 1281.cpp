#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7

struct Gnode
{
    int v,isn;
    ll w;
    Gnode(int vv,ll ww,int isnn){
        v=vv,w=ww,isn=isnn;
    }
};

struct node
{
    int v,us;
    ll w;
    node(int vv,ll ww,int uss){
        v=vv,w=ww,us=uss;
    }
    bool operator<(const node &p)const{
        return w>p.w;
    }
};

vector<Gnode>G[10005];
ll d[15][100005];

void in(int n)
{
    for(int i=0;i<11;i++){
        for(int j=0;j<=n;j++){
            d[i][j]=INT_MAX;
        }
    }
    return ;
}


ll dijkstra(int k,int n)
{
    priority_queue<node>pq;
    in(n);
    d[0][0]=0;
    pq.push(node(0,0,0));
    while(!pq.empty()){
        node tp=pq.top();
        pq.pop();
        if(tp.v==n){
            return tp.w;
        }
        for(Gnode V:G[tp.v]){
            if(tp.us+V.isn<=k&&d[tp.us+V.isn][V.v]>d[tp.us][tp.v]+V.w){
                d[tp.us+V.isn][V.v]=d[tp.us][tp.v]+V.w;
                pq.push(node(V.v,d[tp.us+V.isn][V.v],tp.us+V.isn));
            }
        }
    }
    return -1;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,m,u,li,k,v,id=0;
    ll w;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d",&n,&m,&k,&li);
        for(int i=1;i<=m;i++){
            scanf("%d %d %lld",&u,&v,&w);
            G[u].pb(Gnode(v,w,0));
        }
        for(int i=1;i<=k;i++){
            scanf("%d %d %lld",&u,&v,&w);
            G[u].pb(Gnode(v,w,1));
        }
        ll ans=dijkstra(li,n-1);
        printf("Case %d: ",++id);
        if(ans==-1){
            printf("Impossible\n");
        }
        else{
            printf("%lld\n",ans);
        }
        for(int i=0;i<=n;i++){
            G[i].clear();
        }
    }
    return 0;
}


