#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,string>
#define F first
#define S second
#define pb push_back
#define pp pop_back

vector<int>G[1005];
int p[1005];
bool vis[1005];
int d[1005][5];


int dfs(int s,int isg)
{
    vis[s]=1;
    if(d[s][isg]!=-1){
        return d[s][isg];
    }
    int sum=0;
    for(int v:G[s]){
        if(v!=p[s]){
           p[v]=s;
           if(isg==0){
                sum+=dfs(v,1);
           }
           else{
               sum+=min(dfs(v,0),dfs(v,1));
           }
        }
    }
    return d[s][isg]=sum+isg;
}

void clr(int n)
{
    memset(vis,0,sizeof(vis));
    memset(p,0,sizeof(p));
    for(int i=1;i<=n;i++){
        G[i].clear();
    }
    return ;
}



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,u,v,id=0,T,m;
    scanf("%d",&T);
    while(T--){
        set<int>st;
        scanf("%d %d",&n,&m);
        for(int i=1;i<=m;i++){
            scanf("%d %d",&u,&v);
            G[u].pb(v);
            G[v].pb(u);
            st.insert(u);
            st.insert(v);
        }
        memset(d,-1,sizeof(d));
        int cnt=0;
        for(auto x:st){
            if(!vis[x]){
                cnt+=min(dfs(x,1),dfs(x,0));
            }
        }
        printf("Case %d: %d\n",++id,n-cnt);
        clr(n);
    }

    return 0;
}



