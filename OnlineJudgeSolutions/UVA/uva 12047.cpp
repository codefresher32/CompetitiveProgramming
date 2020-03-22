#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

struct node1
{
    int u,v,w;
    node1(int a,int b,int c){
        u=a,v=b,w=c;
    }
};

struct node
{
    int v,w;
    node(int x,int y){
        v=x,w=y;
    }
    bool operator<(const node &p)const{
        return w>p.w;
    }
};

queue<node1>pq;


void dijkstra(int s,vector<pii>G[10005],int d[10005])
{
    priority_queue<node>q;
    d[s]=0;
    q.push(node(s,d[s]));
    while(!q.empty()){
        node tp=q.top();
        q.pop();
        for(pii x:G[tp.v]){
            if(d[tp.v]+x.S<d[x.F]){
                d[x.F]=d[tp.v]+x.S;
                q.push(node(x.F,d[x.F]));
            }
        }
    }
    return ;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T,n,m,w,p,s,t,u,v;
    vector<pii>G[10005];
    vector<pii>R[10005];
    int d1[10005],d2[10005];
    scanf("%d",&T);
    while(T--){
        scanf("%d %d %d %d %d",&n,&m,&s,&t,&p);
        while(m--){
            scanf("%d %d %d",&u,&v,&w);
            pq.push(node1(u,v,w));
            G[u].pb({v,w});
            R[v].pb({u,w});
        }
        for(int i=1;i<=n;i++){
            d1[i]=d2[i]=1e9;
        }
        dijkstra(s,G,d1);
        dijkstra(t,R,d2);
        int ans=-1;
        while(!pq.empty()){
            node1 tp=pq.front();
            pq.pop();
            if(d1[tp.u]+tp.w+d2[tp.v]<=p&&ans<tp.w){
                ans=tp.w;
            }
        }
        printf("%d\n",ans);
        for(int i=1;i<=n;i++){
            G[i].clear(),R[i].clear();
        }
    }
    return 0;
}

