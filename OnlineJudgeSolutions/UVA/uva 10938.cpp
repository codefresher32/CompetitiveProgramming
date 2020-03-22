#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>pb_ds;

#define pii pair<int,ll>
#define pi pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 1000000007
#define pai acos(-1)
#define mx 1000000000
#define N 105

vector<int>G[5005];
int dep[5005],par[5005];
int dp[5005][25];

void dfs(int s,int c,int fr)
{
    dep[s]=c,par[s]=fr;
    for(int v:G[s]){
        if(v!=fr) dfs(v,c+1,s);
    }
    return ;
}

int lca(int idx,int p)
{
    if(p==0) return par[idx];
    int &ret=dp[idx][p];
    if(ret!=-1) return ret;
    int x1,x2;
    x1=lca(idx,p-1);
    x2=lca(x1,p-1);
    return ret=x2;
}

int find_lca(int u,int v)
{
    if(dep[u]<dep[v]) swap(u,v);
    int l;
    for(int i=20;i>=0;i--){
        l=lca(u,i);
        if(dep[l]>=dep[v]) u=l;
    }
    if(u==v) return u;
    int a,b;
    for(int i=20;i>=0;i--){
        a=lca(u,i),b=lca(v,i);
        if(a!=b) u=a,v=b;
    }
    return par[u];
}

int ff(int u,int v,int k)
{
    int l=find_lca(u,v);
    if(abs(dep[u]-dep[l]+1)<k){
        k=dep[u]+dep[v]-2*dep[l]-k+2;
        swap(u,v);
    }
    int a;
    for(int i=20;i>=0;i--){
        l=lca(u,i);
        a=abs(dep[u]-dep[l]+1);
        if(a<=k) u=l,k-=(a-1);
    }
    return u;
}


void clr(int n)
{
    memset(dp,-1,sizeof dp);
    for(int i=1;i<=n;i++) G[i].clear();
    return ;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,u,v,q;
    while(scanf("%d",&n),n){
        clr(n);
        for(int i=1;i<n;i++){
            scanf("%d %d",&u,&v);
            G[u].pb(v);
            G[v].pb(u);
        }
        dfs(1,0,1);
        scanf("%d",&q);
        int l,d,a,b;
        while(q--){
            scanf("%d %d",&u,&v);
            l=find_lca(u,v);
            d=dep[u]+dep[v]-2*dep[l]+1;
            if(d&1){
                a=ff(u,v,(d-1)/2+1);
                printf("The fleas meet at %d.\n",a);
            }
            else{
                a=ff(u,v,d/2),b=ff(u,v,d/2+1);
                if(a>b) swap(a,b);
                printf("The fleas jump forever between %d and %d.\n",a,b);
            }
        }
    }
    return 0;
}


