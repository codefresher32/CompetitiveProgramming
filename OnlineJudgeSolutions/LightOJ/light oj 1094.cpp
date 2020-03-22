#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

vector<pii>G[30005];
bool vis[30005];
int id,mn;

void dfs(int s,int mx)
{
    if(mx>mn){
        mn=mx;
        id=s;
    }
    vis[s]=1;
    for(auto v:G[s]){
        if(!vis[v.F]){
            dfs(v.F,mx+v.S);
        }
    }
    vis[s]=0;
    return ;
}

void clr(int n)
{
    for(int i=0;i<n;i++){
        G[i].clear();
    }
    mn=id=0;
    return ;
}



int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,u,v,w,n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        for(int j=1;j<n;j++){
            scanf("%d%d%d",&u,&v,&w);
            G[u].pb({v,w});
            G[v].pb({u,w});
        }
        dfs(0,0);
        dfs(id,0);
        printf("Case %d: %d\n",i,mn);
        clr(n);
    }
    return 0;
}



