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

int dp[100005][25];
vector<int>G[100005];
int dis[100005],par[100005],dep[100005];

void dfs(int s,int c,int fr){
    par[s]=fr,dep[s]=c;
    for(int v:G[s]){
        if(v!=fr) dfs(v,c+1,s);
    }
    return ;
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

int Find(int u,int v)
{
    int a;
    for(int i=20;i>=0;i--){
        a=lca(u,i);
        if(dis[a]>=v) u=a;
    }
    return u;
}

void clr(int n){
    memset(dp,-1,sizeof dp);
    for(int i=0;i<=n;i++){
        par[i]=i,dis[i]=0,dep[i]=0;
        G[i].clear();
    }
    return ;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int q,t,n,m,u,v,w,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&q);
        clr(n);
        for(int i=1;i<n;i++){
            scanf("%d %d",&u,&w);
            dis[i]=w;
            G[u].pb(i);
            G[i].pb(u);
        }
        dis[0]=1;
        dfs(0,0,0);
        printf("Case %d:\n",++id);
        while(q--){
            scanf("%d %d",&u,&w);
            printf("%d\n",Find(u,w));
        }

    }
    return 0;
}

