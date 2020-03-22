#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003

map<pii,int>mp;
bool vis[100005];
vector<int>G[100005];

void bfs(int s,int d[100005])
{
    queue<int>q;
    int u;
    q.push(s);
    d[s]=0;
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int v:G[u]){
            if(d[v]==-1){
                d[v]=d[u]+1;
                q.push(v);
            }
        }
    }
    return ;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,m,u,v,c;
    int st[100005],rv[100005];
    while(scanf("%d %d",&n,&m)!=EOF){
        for(int i=1;i<=n;i++){
            vis[i]=0;
            st[i]=rv[i]=-1;
            G[i].clear();
        }
        mp.clear();
        for(int i=1;i<=m;i++){
            scanf("%d %d %d",&u,&v,&c);
            if(u==v) continue;
            if(!mp[{u,v}]){
                G[u].pb(v);
                G[v].pb(u);
                mp[{u,v}]=mp[{v,u}]=c;
            }
            else mp[{u,v}]=mp[{v,u}]=min(mp[{u,v}],c);
        }
        bfs(1,st);
        bfs(n,rv);
        int ans=st[n];
        for(int i=1;i<=n;i++){
            if(st[i]+rv[i]!=ans) G[i].clear();
        }
        int mn,sz;
        vector<int>vc,an,next;
        vc.pb(1);
        vis[1]=1;
        while(1){
            mn=INT_MAX;
            for(int U:vc){
                for(int V:G[U]){
                    if(rv[U]==rv[V]+1){
                        mn=min(mn,mp[{U,V}]);
                    }
                }
            }
            an.pb(mn);
            next.clear();
            for(int U:vc){
                for(int V:G[U]){
                    if(mn==mp[{U,V}]&&!vis[V]&&rv[U]==rv[V]+1){
                        next.pb(V);
                        vis[V]=1;
                    }
                }
            }
            vc=next;
            if(an.size()==ans) break;
        }
        printf("%d\n",ans);
        printf("%d",an[0]);
        for(int i=1;i<an.size();i++){
            printf(" %d",an[i]);
        }
        printf("\n");
    }

    return 0;
}


