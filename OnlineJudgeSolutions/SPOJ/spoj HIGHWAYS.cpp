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
    bool operator<(const node &p)const{
        return w>p.w;
    }
};

vector<pii>G[100005];
int d[100005];
int ds,s;

void dijkstra()
{
    priority_queue<node>pq;
    d[s]=0;
    pq.push(node(s,d[s]));
    while(!pq.empty()){
        node tp=pq.top();
        pq.pop();
        if(tp.v==ds){
            return ;
        }
        for(pii uu:G[tp.v]){
            if(d[tp.v]+uu.S<d[uu.F]){
                d[uu.F]=d[tp.v]+uu.S;
                pq.push(node(uu.F,d[uu.F]));
            }
        }
    }
}

void clr(int n)
{
    for(int i=1;i<=n;i++){
        d[i]=INT_MAX;
        G[i].clear();
    }
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,m,u,v,w;
    cin>>t;
    while(t--){
        cin>>n>>m>>s>>ds;
        clr(n);
        for(int i=1;i<=m;i++){
            cin>>u>>v>>w;
            G[u].pb({v,w});
            G[v].pb({u,w});
        }
        dijkstra();
        if(d[ds]==INT_MAX){
            cout<<"NONE\n";
        }
        else{
            cout<<d[ds]<<endl;
        }

    }
    return 0;
}
