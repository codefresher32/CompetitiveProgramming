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


int d[100005];
vector<pii>G[100005];


void dijkstra(int s)
{
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
    int t,n,m,u,v,id=0;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++){
        scanf("%d %d",&u,&v);
        if(u==v) continue;
        G[u].pb({v,0});
        G[v].pb({u,1});
    }
    for(int i=1;i<=n;i++){
        d[i]=INT_MAX;
    }
    dijkstra(1);
    if(d[n]==INT_MAX){
        printf("-1\n");
    }
    else{
        printf("%d\n",d[n]);
    }
    return 0;
}


