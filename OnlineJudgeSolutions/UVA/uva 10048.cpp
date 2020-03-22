#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

struct node
{
    int x,y,z;
    node(int a,int b,int c)
    {
        x=a,y=b,z=c;
    }
    bool operator<(const node &p)const
    {
        return z>p.z;
    }
};
priority_queue<node>pq;
int parrent[105];
vector<int>G[105];
int mst[105][105],dp[105][105];
bool fr,vis[105];
int u,v,mn;

int FindParrent(int n)
{
    if(parrent[n]==n){
        return n;
    }
    return parrent[n]=FindParrent(parrent[n]);
}

void Union(int u,int v)
{
    int x,y;
    x=FindParrent(u);
    y=FindParrent(v);
    if(x!=y){
        parrent[y]=x;
    }
    return ;
}

void dfs(int s,int mx)
{
    if(s==v&&!fr){
        mn=mx;
        fr=1;
    }
    vis[s]=1;
    for(int vv:G[s]){
        if(!vis[vv]){
            dfs(vv,max(mx,mst[s][vv]));
        }
    }
}



int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,m,ww,t,id=0,w,k,q;
    bool f=0;
    while(scanf("%d%d%d",&n,&m,&q)!=EOF&&n&&m&&q){

        for(int i=1;i<=m;i++){
            scanf("%d%d%d",&u,&v,&w);
            if(u>v){
                swap(u,v);
            }
            pq.push(node(u,v,w));
        }
        for(int i=1;i<=n;i++){
            parrent[i]=i;
        }
        memset(mst,-1,sizeof(mst));
        memset(dp,-1,sizeof(dp));
        while(!pq.empty()){
            node tp=pq.top();
            pq.pop();
            if(FindParrent(tp.x)!=FindParrent(tp.y)){
                mst[tp.x][tp.y]=tp.z;
                mst[tp.y][tp.x]=tp.z;
                G[tp.x].pb(tp.y);
                G[tp.y].pb(tp.x);
                Union(tp.x,tp.y);
            }
        }
        if(f){
            printf("\n");
        }
        f=1;
        printf("Case #%d\n",++id);
        while(q--){
            scanf("%d%d",&u,&v);
            if(u>v){
                swap(u,v);
            }
            if(FindParrent(u)!=FindParrent(v)){
                printf("no path\n");
            }
            else{
                if(dp[u][v]==-1){
                    dfs(u,0);
                    dp[u][v]=mn;
                    fr=0;
                    memset(vis,0,sizeof(vis));
                }
                printf("%d\n",dp[u][v]);
            }
        }
        for(int i=1;i<=n;i++){
            G[i].clear();
        }
    }

    return 0;
}



