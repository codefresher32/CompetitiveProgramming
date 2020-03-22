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

vector<pii>G[10005];
ll dis[10005];
int par[10005],dep[10005],dp[10005][25];

void bfs(int s)
{
    int u;
    queue<int>q;
    dis[s]=0,par[s]=s,dep[s]=0;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(pii v:G[u]){
            if(dep[v.F]==-1){
                dep[v.F]=dep[u]+1;
                dis[v.F]=dis[u]+v.S;
                par[v.F]=u;
                q.push(v.F);
            }
        }
    }
    return ;
}

void clr(int n)
{
    memset(dp,-1,sizeof dp);
    for(int i=1;i<=n;i++){
        dis[i]=0,dep[i]=-1;
        par[i]=i;
        G[i].clear();
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

int ff(int u,int v,int k)
{
    int a,b,l;
    l=find_lca(u,v);
    if(abs(dep[u]-dep[l]+1)<k){
        k=dep[u]+dep[v]-2*dep[l]-k+2;
        swap(u,v);
    }
    for(int i=20;i>=0;i--){
        l=lca(u,i);
        a=dep[u]-dep[l]+1;
        if(a<=k) u=l,k-=(a-1);
    }
    return u;
}



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,u,v;
    ll w;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        clr(n);
        for(int i=1;i<n;i++){
            scanf("%d %d %lld",&u,&v,&w);
            G[u].pb({v,w});
            G[v].pb({u,w});
        }
        bfs(1);
        string s;
        int l,k,p,q;
        while(cin>>s){
            if(s=="DONE") break;
            if(s=="DIST"){
                cin>>u>>v;
                l=find_lca(u,v);
                printf("%lld\n",dis[u]+dis[v]-2ll*dis[l]);
            }
            else{
                scanf("%d %d %d",&p,&q,&k);
                printf("%d\n",ff(p,q,k));
            }
        }
        printf("\n");
    }

    return 0;
}

/*
1
13
1 2 1
1 3 1
1 4 1
2 5 1
2 6 1
3 8 1
5 11 1
5 12 1
6 7 1
8 9 1
8 10 1
12 13 1
*/
