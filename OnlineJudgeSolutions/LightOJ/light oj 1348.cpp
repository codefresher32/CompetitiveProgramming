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

vector<int>G[30005];
int dp[30005][25];
ll ar[30005],tree[100005];
int n,tim,par[30005],dep[30005],start[30005],finish[30005];

void dfs(int s,int c,int fr){
    par[s]=fr,dep[s]=c;
    start[s]=++tim;
    for(int v:G[s]){
        if(v!=fr) dfs(v,c+1,s);
    }
    finish[s]=++tim;
}

int lca(int idx,int p){
    if(p==0) return par[idx];
    int &ret=dp[idx][p];
    if(ret!=-1) return ret;
    int x1,x2;
    x1=lca(idx,p-1);
    x2=lca(x1,p-1);
    return ret=x2;
}

int find_lca(int u,int v){
    if(dep[u]<dep[v]) swap(u,v);
    int a,b;
    for(int i=20;i>=0;i--){
        a=lca(u,i);
        if(dep[a]>=dep[v]) u=a;
    }
    if(u==v) return u;
    for(int i=20;i>=0;i--){
        a=lca(u,i),b=lca(v,i);
        if(a!=b) u=a,v=b;
    }
    return par[u];
}

void update(int idx,ll val){
    for(int i=idx;i<=2*n;i+=(i&-i)) tree[i]+=val;
    return ;
}

ll query(int idx){
    ll ret=0;
    for(int i=idx;i>=1;i-=(i&-i)) ret+=tree[i];
    return ret;
}


void clr(int n){
    memset(dp,-1,sizeof dp);
    memset(tree,0,sizeof tree);
    for(int i=0;i<=n;i++) G[i].clear();
    return ;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,q,u,v,m,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++) scanf("%lld",&ar[i]);
        clr(n);
        for(int i=1;i<n;i++){
            scanf("%d %d",&u,&v);
            u++,v++;
            G[u].pb(v);
            G[v].pb(u);
        }
        tim=0;
        dfs(1,0,1);
        for(int i=1;i<=n;i++){
            update(start[i],ar[i]);
            update(finish[i],-ar[i]);
        }
        int a,ty;
        scanf("%d",&q);
        printf("Case %d:\n",++id);
        while(q--){
            scanf("%d",&ty);
            if(ty==0){
                scanf("%d %d",&u,&v);
                u++,v++;
                a=find_lca(u,v);
                ll ans=query(start[u])+query(start[v])-2ll*query(start[a])+ar[a];
                printf("%d\n",ans);
            }
            else{
                ll val;
                scanf("%d %lld",&u,&val);
                u++;
                update(start[u],val-ar[u]);
                update(finish[u],ar[u]-val);
                ar[u]=val;
            }
        }
    }
    return 0;
}
