#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
vector<pii>G[105];
int d[105];

struct node
{
    int v,w;
    node(int x,int y)
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

void dijkstra(int s)
{
    for(int i=1;i<=100;i++){
        d[i]=1e9;
    }
    int u,v,w;
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

void clr()
{
    for(int i=1;i<=100;i++){
        G[i].clear();
    }
    return ;
}


int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t,tc=0,n,u,v,w,m,sr,ds;
    ;
    while(scanf("%d",&t)!=EOF){
        tc=0;
        for(int i=1;i<=t;i++){
        scanf("%d%d",&n,&m);
        for(int i=1;i<=m;i++){
            scanf("%d%d%d",&u,&v,&w);
            G[u].push_back(pii(v,w));
            G[v].push_back(pii(u,w));
        }
        dijkstra(1);
        printf("Case %d: ",i);
        if(d[n]==1e9){
            printf("Impossible\n");
        }
        else{
            printf("%d\n",d[n]);
        }
        //if(i!=1){
            //printf("\n");
       // }
        clr();
    }
    }
    return 0;
}

