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
//#define mx 1000000000
//#define n 1429435

struct point{
    int idx,mx,mn;
};

vector<pi>G[100005];
point dp[100005][25];
int par[100005],dep[100005],dis[100005];

void dfs(int s,int c,int fr){
    par[s]=fr,dep[s]=c;
    for(pi V:G[s]){
        if(V.F!=fr){
            dis[V.F]=V.S;
            dfs(V.F,c+1,s);
        }
    }
    return ;
}

point lca(int idx,int p){
    if(p==0){
        point x;
        x.idx=par[idx];
        x.mn=(idx==1)?INT_MAX:dis[idx];
        x.mx=(idx==1)?0:dis[idx];
        return x;
    }
    point &ret=dp[idx][p];
    if(ret.idx!=-1) return ret;
    point x1,x2;
    x1=lca(idx,p-1);
    x2=lca(x1.idx,p-1);
    ret.idx=x2.idx;
    ret.mx=max(x1.mx,x2.mx);
    ret.mn=min(x1.mn,x2.mn);
    return ret;
}

pi find_lca(int u,int v){
    if(dep[v]>dep[u]) swap(u,v);
    pi ans;
    ans.F=0,ans.S=INT_MAX;
    point a,b;
    for(int i=20;i>=0;i--){
        a=lca(u,i);
        if(dep[a.idx]>=dep[v]){
            ans.F=max(ans.F,a.mx);
            ans.S=min(ans.S,a.mn);
            u=a.idx;
        }
    }
    if(u==v) return ans;
    for(int i=20;i>=0;i--){
        a=lca(u,i),b=lca(v,i);
        if(a.idx!=b.idx){
            ans.F=max(ans.F,max(a.mx,b.mx));
            ans.S=min(ans.S,min(a.mn,b.mn));
            u=a.idx,v=b.idx;
        }
    }
    ans.F=max(ans.F,max(dis[u],dis[v]));
    ans.S=min(ans.S,min(dis[u],dis[v]));
    return ans;
}

void clr(int n){
    memset(dp,-1,sizeof dp);
    for(int i=1;i<=n;i++) G[i].clear();
    return ;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,n,w,q,u,v,m,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        clr(n);
        for(int i=1;i<n;i++){
            scanf("%d %d %d",&u,&v,&w);
            G[u].pb({v,w});
            G[v].pb({u,w});
        }
        dis[1]=0;
        dfs(1,0,1);
        scanf("%d",&q);
        printf("Case %d:\n",++id);
        while(q--){
            scanf("%d %d",&u,&v);
            pi ans=find_lca(u,v);
            printf("%d %d\n",ans.S,ans.F);
        }
    }
    return 0;
}

/*
1
26
14 13 38
13 16 93
16 24 77
13 19 1
13 9 96
13 17 6
19 1 75
14 8 38
16 15 12
8 3 93
24 4 51
13 25 66
3 18 98
4 20 1
16 11 39
11 22 14
20 10 26
9 23 13
3 6 10
10 12 51
23 7 7
17 21 45
20 5 95
9 2 50
22 26 98
2
23 4
7 6
*/

