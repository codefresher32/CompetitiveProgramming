#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<pair<int,int>>G[10005];
ll d[10005];

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
map<string,int>mp;
int n;

void dijkstra(int s,int des)
{
    int v,w;
    for(int i=1;i<=n;i++){
        d[i]=1e9;
    }
    d[s]=0;
    pq.push(node(s,d[s]));
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
    for(int i=1;i<=n;i++){
        G[i].clear();
    }
    mp.clear();
    return ;
}


int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t,m,k,u,v,w,id;
    string so,de;
    scanf("%d",&t);
    while(t--){
        id=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            cin>>so;
            scanf("%d",&m);
            mp[so]=++id;
            for(int j=1;j<=m;j++){
                cin>>v>>w;
                G[id].push_back(make_pair(v,w));
                //G[v].push_back(make_pair(id,w));
            }
        }
        scanf("%d",&k);
        for(int i=1;i<=k;i++){
            cin>>so>>de;
            dijkstra(mp[so],mp[de]);
            cout<<d[mp[de]]<<endl;
        }
        clr();
    }
    return 0;
}


