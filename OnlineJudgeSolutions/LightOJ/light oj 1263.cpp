#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7

int sum,cnt,a[1005];
vector<int>G[1005];
bool vis[1005];


void dfs(int s)
{
    if(!vis[s]) cnt++,sum+=a[s];
    vis[s]=1;
    for(int v:G[s]){
        if(!vis[v]){
            dfs(v);
        }
    }
}


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,m,w,u,v,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        for(int i=1;i<=m;i++){
            scanf("%d %d",&u,&v);
            G[u].pb(v);
            G[v].pb(u);
        }
        set<int>st;
        bool f=0;
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                cnt=sum=0;
                dfs(i);
                if(sum%cnt!=0){
                    f=1;
                    break;
                }
                st.insert(sum/cnt);
            }
        }
        printf("Case %d: ",++id);
        if(f||st.size()>1){
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }
        for(int i=1;i<=n;i++){
            G[i].clear();
            vis[i]=0;
        }
    }
    return 0;
}


