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
#define mod 10
#define ex 1e-7


struct node
{
    int v,w;
    node(int vv,int ww){
        v=vv;
        w=ww;
    }
    bool operator<(const node &p)const{
        return w>p.w;
    }
};

int mn;
int d[100005],a[100005];
bool vis[100005];
vector<pii>G[100005];


void dijkstra(int s,int n)
{
    int cnt=0;
    for(int i=1;i<=n;i++){
        d[i]=INT_MAX;
    }
    priority_queue<node>pq;
    d[s]=0;
    pq.push(node(s,d[s]));
    while(!pq.empty()){
        node tp=pq.top();
        if(vis[tp.v]) cnt++;
        if(d[tp.v]>mn) return ;
        if(vis[tp.v]&&cnt==2){
            mn=min(d[tp.v],mn);
            return ;
        }
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
    int t,n,m,u,k,w,v,id=0;
    scanf("%d %d %d",&n,&m,&k);
    for(int i=1;i<=k;i++){
        scanf("%d",&a[i]);
        vis[a[i]]=1;
    }
    for(int i=1;i<=m;i++){
        scanf("%d %d %d",&u,&v,&w);
        G[u].pb({v,w});
        G[v].pb({u,w});
    }
    mn=INT_MAX;
    for(int i=1;i<=k;i++){
        dijkstra(a[i],n);
    }
    printf("%d\n",mn);
    return 0;
}


