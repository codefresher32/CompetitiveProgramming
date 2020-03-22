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


bool vis[30005];
vector<int>G[30005];
int ans;


void dfs(int s)
{
    vis[s]=1;
    ans++;
    for(int v:G[s]){
        if(!vis[v]){
            dfs(v);
        }
    }
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,q,u,v,k,m;
    while(scanf("%d %d",&n,&m)!=EOF){
        if(!(n+m)){
            break;
        }
        for(int i=0;i<m;i++){
            scanf("%d",&k);
            if(k){
                scanf("%d",&u),k--;
            }
            while(k--){
                scanf("%d",&v);
                G[u].pb(v);
                G[v].pb(u);
            }
        }
        ans=0;
        dfs(0);
        printf("%d\n",ans);
        for(int i=0;i<=n;i++){
            G[i].clear();
            vis[i]=0;
        }
    }
    return 0;
}
