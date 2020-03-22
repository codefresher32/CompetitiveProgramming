#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>pb_ds;

#define pii pair<int,int>
#define pi pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 1000000007
#define pai acos(-1)
#define mx 1000000000
//#define n 1429435

pi dp[50005][25];
vector<pi>G[50005];
int dis[50005],par[50005],dep[50005];

struct node{
    int u,v,w;
    node(int a,int b,int c){
        u=a,v=b,w=c;
    }
    bool operator<(const node &p)const{
        return w>p.w;
    }
};

int FindParent(int idx){
    if(idx==par[idx]) return idx;
    return par[idx]=FindParent(par[idx]);
}

void dfs(int s,int c,int fr){
    par[s]=fr,dep[s]=c;
    for(pi V:G[s]){
        if(V.F!=fr) dis[V.F]=V.S,dfs(V.F,c+1,s);
    }
    return ;
}

pi lca(int idx,int p){
    if(p==0) return {par[idx],dis[idx]};
    pi &ret=dp[idx][p];
    if(ret.F!=-1) return ret;
    pi x1,x2;
    x1=lca(idx,p-1);
    x2=lca(x1.F,p-1);
    return ret={x2.F,max(x1.S,x2.S)};
}

int find_lca(int u,int v)
{
    int ret=0;
    if(dep[u]<dep[v]) swap(u,v);
    pii a,b;
    for(int i=20;i>=0;i--){
        a=lca(u,i);
        if(dep[a.F]>=dep[v]) ret=max(ret,a.S),u=a.F;
    }
    if(u==v) return ret;
    for(int i=20;i>=0;i--){
        a=lca(u,i),b=lca(v,i);
        if(a.F!=b.F){
            ret=max(ret,max(a.S,b.S));
            u=a.F,v=b.F;
        }
    }
    return ret=max(ret,max(dis[u],dis[v]));
}

void clr(int n){
    memset(dp,-1,sizeof dp);
    for(int i=1;i<=n;i++){
        par[i]=i,dis[i]=0,dep[i]=0;
        G[i].clear();
    }
    return ;
}

priority_queue<node>pq;

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int q,t,x,l,n,m,u,v,w,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        clr(n);
        for(int i=1;i<=m;i++){
            scanf("%d %d %d",&u,&v,&w);
            pq.push(node(u,v,w));
        }
        while(!pq.empty()){
            node tp=pq.top();
            pq.pop();
            u=FindParent(tp.u),v=FindParent(tp.v);
            if(u!=v){
                par[v]=u;
                G[tp.u].pb({tp.v,tp.w});
                G[tp.v].pb({tp.u,tp.w});
            }
        }
        dis[1]=0;
        dfs(1,0,1);
        scanf("%d",&q);
        printf("Case %d:\n",++id);
        while(q--){
            scanf("%d %d",&u,&v);
            printf("%d\n",find_lca(u,v));
        }

    }
    return 0;
}
