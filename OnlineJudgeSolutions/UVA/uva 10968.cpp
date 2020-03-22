#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define pfb push_front
#define pfp pop_front
#define eps 10E-10
#define mod 10000019


bool vis[1005];
int s,t,dg[1005];
vector<int>G[1005];

int bfs()
{
    queue<pii>q;
    int x;
    vis[s]=1;
    q.push({s,0});
    while(!q.empty()){
        pii u=q.front();
        q.pop();
        x=G[u.F].size();
        if(x<=2){
            continue;
        }
        if(u.F==t){
            return u.S;
        }
        for(int v:G[u.F]){
            if(!vis[v]){
                vis[v]=1;
                q.push({v,u.S+1});
            }
        }
    }
    return -1;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,m,u,v;
    while(scanf("%d %d",&n,&m)!=EOF){
        if(!n&&!m) return 0;
        for(int i=1;i<=m;i++){
            scanf("%d %d",&u,&v);
            G[u].pb(v);
            G[v].pb(u);
            dg[u]++,dg[v]++;
        }
        int x;
        int ans=INT_MAX;
        for(int i=1;i<=n;i++){
            if(dg[i]==0){
                ans=-1;
                break;
            }
        }
        s=t=-1;
        for(int i=1;i<=n;i++){
            if(dg[i]%2){
                s=i;
                break;
            }
        }
        for(int i=n;i>=1;i--){
            if(dg[i]%2){
                t=i;
                break;
            }
        }
        if(s==t){
            ans=min(ans,0);
        }
        else{
            ans=min(ans,bfs());
        }
        if(ans==-1){
            printf("Poor Koorosh\n");
        }
        else{
            printf("%d\n",ans);
        }
        for(int i=1;i<=n;i++){
            dg[i]=vis[i]=0;
            G[i].clear();
        }
    }
    return 0;
}

