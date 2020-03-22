#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,string>
#define F first
#define S second
#define pb push_back
#define pp pop_back


vector<int>G[2005];
int p[2005];
bool vis[2005];

int dfs(int s)
{
    if(vis[s]){
        return 0;
    }
    vis[s]=1;
    for(int v:G[s]){
        if(p[v]==-1||dfs(p[v])){
            p[v]=s;
            return 1;
        }
    }
    return 0;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int T,n,m,id=0,ax=0,bx=100,x;
    scanf("%d",&T);
    while(T--){
        int a[105]={0},b[105]={0};
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        scanf("%d",&m);
        for(int i=1;i<=m;i++){
            scanf("%d",&b[i]);
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(!b[j]||(a[i]&&b[j]%a[i]==0)){
                    G[i].pb(j+n);
                    //G[j+n].pb(i);
                }
            }
        }
        int cnt=0;
        memset(p,-1,sizeof(p));
        for(int i=1;i<=n;i++){
            memset(vis,0,sizeof(vis));
            cnt+=dfs(i);
        }
        printf("Case %d: %d\n",++id,cnt);
        for(int i=1;i<=n;i++){
            G[i].clear();
        }
    }
    return 0;
}


