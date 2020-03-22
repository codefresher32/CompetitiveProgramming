#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<pair<int,int>>G[100005];
ll d[100005];
int p[100005];
struct node
{
    int v;
    ll w;
    node(int x,ll y)
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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,u,v,w;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>u>>v>>w;
        G[u].push_back(make_pair(v,w));
        G[v].push_back(make_pair(u,w));
    }
    for(int i=1;i<=n;i++){
        d[i]=1e18;
    }
    d[1]=0;
    memset(p,-1,sizeof(p));
    p[1]=1;
    pq.push(node(1,0));
    while(!pq.empty()){
        node tp=pq.top();
        pq.pop();
        for(int i=0;i<G[tp.v].size();i++){
            v=G[tp.v][i].first;
            w=G[tp.v][i].second;
            if(d[tp.v]+w<d[v]){
                d[v]=d[tp.v]+w;
                p[v]=tp.v;
                pq.p ush(node(v,d[v]));
            }
        }
    }
    vector<int>vs;
    int d=n,s=1;
    //for(int i=1;i<=n;i++){
        //cout<<endl<<i<<" "<<p[i]<<endl;
    //}
    while(d!=s){
        vs.push_back(d);
        if(d==-1){
            cout<<-1<<endl;
            return 0;
        }
        d=p[d];
    }
    vs.push_back(s);
    for(int i=vs.size()-1;i>=0;i--){
        cout<<vs[i]<<" ";
    }
    cout<<endl;

    return 0;
}
