#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

vector<int>G[1005];
bool vis[1005];
int cnt[1005],mn,x;

void dfs(int s)
{
    vis[s]=1;
    cnt[s]++;
    if(cnt[s]==x){
        mn++;
    }
    for(int v:G[s]){
        if(!vis[v]){
            dfs(v);
        }
    }
    //vis[s]=0;
    return ;
}

void clr(int n)
{
    for(int i=1;i<=n;i++){
        G[i].clear();
    }
    mn=0;
    memset(cnt,0,sizeof(cnt));
    return ;
}


int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n,m,k,a,t,u,v,id=0;
    scanf("%d",&t);
    while(t--){
        set<int>st;
        scanf("%d%d%d",&k,&n,&m);
        for(int i=1;i<=k;i++){
            scanf("%d",&a);
            st.insert(a);
        }
        for(int i=1;i<=m;i++){
            scanf("%d%d",&u,&v);
            G[u].pb(v);
        }
        x=st.size();
        for(auto o:st){
            dfs(o);
            memset(vis,0,sizeof(vis));
        }
        printf("Case %d: %d\n",++id,mn);
        clr(n);
    }

    return 0;
}


