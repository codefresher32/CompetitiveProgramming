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
    node(int a,int b){
        v=a,w=b;
    }
    bool operator<(const node &p)const{
        return w>p.w;
    }
};

priority_queue<node>pq;

vector<pii>G[10005];
int d[10005];

void dijkstra(int sr,int n)
{
    int v,w;
    for(int i=1;i<=n;i++){
        d[i]=1e9;
    }
    d[sr]=0;
    pq.push(node(sr,d[sr]));
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



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,u,v,w,sr,ds;
    cin>>n>>m;
    while(m--){
        cin>>u>>v;
        G[u].pb({v,1});
        G[v].pb({u,0});
    }
    dijkstra(sr,n);
    cout<<d[ds]<<endl;
    return 0;
}



