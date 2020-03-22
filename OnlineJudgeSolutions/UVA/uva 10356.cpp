#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,string>
#define F first
#define S second
#define pb push_back
#define pp pop_back

struct node
{
    int v,w;
    bool cnt;
    node(int a,int b,int c){
        v=a;
        w=b;
        cnt=c;
    }
    bool operator<(const node &E)const{
        return E.w<w;
    }
};


vector<pii>G[1005];
int d[1005][4];


void dijkstra(int s,int ds)
{
    priority_queue<node>pq;
    for(int i=0;i<=ds+1;i++){
        for(int j=0;j<=3;j++){
           d[i][j]=1e9;
        }
    }
    d[s][0]=0;
    pq.push(node(s,0,0));
    while(!pq.empty()){
        node tp=pq.top();
        pq.pop();
        for(pii v:G[tp.v]){
            //cout<<d[v.F][tp.cnt]<<" "<<d[tp.v][!tp.cnt]<<endl;
            if(d[v.F][!tp.cnt]>tp.w+v.S){
                d[v.F][!tp.cnt]=tp.w+v.S;
                pq.push(node(v.F,d[v.F][!tp.cnt],!tp.cnt));
            }
        }
    }
    return ;
}



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,m,u,v,w,id=0;
    while(scanf("%d %d",&n,&m)!=EOF){
        for(int i=1;i<=m;i++){
            scanf("%d %d %d",&u,&v,&w);
            G[u].pb({v,w});
            G[v].pb({u,w});
        }
        dijkstra(0,n-1);
        printf("Set #%d\n",++id);
        if(d[n-1][0]==1e9){
            printf("?\n");
        }
        else{
            printf("%d\n",d[n-1][0]);
        }
        for(int i=0;i<=n;i++){
            G[i].clear();
        }
        //printf("\n");
    }

    return 0;
}

