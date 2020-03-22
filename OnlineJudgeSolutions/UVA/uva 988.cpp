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


int cnt,d[105][105];
bool vis[105];
vector<int>G[105];



//void dfs(int s)
//{
//    if(!G[s].size()) cnt++;
//    vis[s]=1;
//    for(int v:G[s]){
//        if(!vis[v]){
//            dfs(v);
//        }
//    }
//    vis[s]=0;
//}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    bool f=0;
    int t,n,m,u,v;
    while(scanf("%d",&n)!=EOF){
        if(f) printf("\n");
        f=1;
        memset(d,0,sizeof(d));
        for(int i=1;i<=n;i++){
            scanf("%d",&m);
            while(m--){
                scanf("%d",&u);
                d[i-1][u]++;
                G[i-1].pb(u);
            }
        }
        cnt=0;
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    d[i][j]+=(d[i][k]*d[k][j]);
                }
            }
        }
        for(int i=1;i<n;i++){
            if(!G[i].size()){
                cnt+=d[0][i];
            }
        }
        if(!G[0].size()) cnt=1;
        printf("%d\n",cnt);
        for(int i=0;i<=n;i++){
            G[i].clear();
        }
    }

    return 0;
}

