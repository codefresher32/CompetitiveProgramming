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
#define mod 1000000000
#define pai acos(-1)
#define mx 1000005
#define N 200005

vector<int>G[N];
int tim,par[N],start[N],finish[N],dep[N],tree[35][2*N],dp[N][25],node_cnt[2*N];

void dfs(int s,int c,int fr){
    start[s]=++tim,par[s]=fr,dep[s]=c;
    for(int v:G[s]){
        if(v!=fr) dfs(v,c+1,s);
    }
    finish[s]=++tim;
}

void update(int id,int idx,int val){
    for(int i=idx;i<=tim;i+=(i&-i)) tree[id][i]+=val;
    return ;
}

int query(int id,int idx){
    int ret=0;
    for(int i=idx;i>0;i-=(i&-i)) ret+=tree[id][i];
    return ret;
}


int Lca(int idx,int p){
    if(p==0) return par[idx];
    int &ret=dp[idx][p];
    if(ret!=-1) return ret;
    int a,b;
    a=Lca(idx,p-1);
    b=Lca(a,p-1);
    return ret=b;
}

int find_lca(int u,int v){
    if(dep[u]<dep[v]) swap(u,v);
    int a,b;
    for(int i=20;i>=0;i--){
        a=Lca(u,i);
        if(dep[a]>=dep[v]) u=a;
    }
    if(u==v) return u;
    for(int i=20;i>=0;i--){
        a=Lca(u,i),b=Lca(v,i);
        if(a!=b) u=a,v=b;
    }
    return par[u];
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n,u,v,q,ty;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        scanf("%d %d",&u,&v);
        u++,v++;
        G[u].pb(v);
        G[v].pb(u);
    }
    dfs(1,0,1);
    for(int i=1;i<=n;i++){
        node_cnt[start[i]]=1;
        node_cnt[finish[i]]=-1;
    }
    partial_sum(node_cnt,node_cnt+(2*N),node_cnt);
    int len,lca;
    memset(dp,-1,sizeof dp);
    scanf("%d",&q);
    while(q--){
        scanf("%d %d %d",&ty,&u,&v);
        if(ty==1){
            u++;
            update(v,start[u],1);
            update(v,finish[u],-1);
        }
        else{
            u++,v++;
            if(start[u]>start[v]) swap(u,v);
            lca=find_lca(u,v);
            bool f=0;
            int g;
            for(int i=1;i<=30;i++){
                g=query(i,start[u])+query(i,start[v])-2*query(i,start[lca]);
                g+=query(i,start[lca])-query(i,start[lca]-1);
                len=node_cnt[start[u]]+node_cnt[start[v]]-2*node_cnt[start[lca]]+node_cnt[start[lca]]-node_cnt[start[lca]-1];
                if(g){
                    if(g==len) f=1;
                    break;
                }
            }
            if(f) printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}
