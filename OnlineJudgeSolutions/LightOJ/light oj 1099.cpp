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
    int v,w;
    node(int a,int b){
        v=a;
        w=b;
    }
    bool operator<(const node &E)const{
        return E.w<w;
    }
};

vector<pii>G[5005];
int d[3][5005];
vector<int>vc;


void dijkstra(int s,int ds)
{
    priority_queue<node>pq;
    for(int i=1;i<=ds;i++){
        d[0][i]=d[1][i]=1e9;
    }
    d[0][s]=0;
    pq.push(node(s,d[0][s]));
    while(!pq.empty()){
        node tp=pq.top();
        pq.pop();
        for(pii v:G[tp.v]){
            if(d[0][v.F]>d[0][tp.v]+v.S){
                d[1][v.F]=d[0][v.F];
                d[0][v.F]=d[0][tp.v]+v.S;
                pq.push(node(v.F,d[0][v.F]));

            }
            if(d[1][v.F]>d[1][tp.v]+v.S){
                d[1][v.F]=d[1][tp.v]+v.S;
                pq.push(node(v.F,d[1][v.F]));
            }
            if(d[0][v.F]<d[0][tp.v]+v.S&&d[1][v.F]>d[0][tp.v]+v.S){
                d[1][v.F]=d[0][tp.v]+v.S;
                pq.push(node(v.F,d[1][v.F]));
            }
        }
    }
    return ;
}



int main()
{
    int T,n,m,u,v,w,id=0;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&n,&m);
        for(int i=1;i<=m;i++){
            scanf("%d %d %d",&u,&v,&w);
            G[u].pb({v,w});
            G[v].pb({u,w});
        }
        dijkstra(1,n);
        printf("Case %d: %d\n",++id,d[1][n]);
        for(int i=1;i<=n;i++){
            G[i].clear();
        }
    }
    return 0;
}

