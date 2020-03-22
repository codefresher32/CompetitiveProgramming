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
        return z<p.z;
    }
};
priority_queue<node>pq;
int parrent[1005],mst[1005][1005];
vector<int>G[1005];
bool vis[1005],fr;
int u,v,ans;

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


void dfs(int s,int mn)
{
    if(s==v&&!fr){
        ans=mn;
        fr=1;
    }
    vis[s]=1;
    for(int vv:G[s]){
        if(!vis[vv]){
           dfs(vv,min(mn,mst[s][vv]));
        }
    }
     return ;
}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    bool f=0;
    int n,m,ww,t,id=0,w,k;
    while(scanf("%d%d",&n,&m)!=EOF){
        if(n==0&&m==0){
            return 0;
        }
        for(int i=1;i<=m;i++){
            scanf("%d%d%d",&u,&v,&w);
            if(u>v){
                swap(u,v);
            }
            pq.push(node(u,v,w));
        }
        scanf("%d%d%d",&u,&v,&w);
        for(int i=1;i<=n;i++){
            parrent[i]=i;
        }
        int s=INT_MAX,x;
        memset(vis,0,sizeof(vis));
        memset(mst,0,sizeof(mst));
        while(!pq.empty()){
            node tp=pq.top();
            pq.pop();
            if(FindParrent(tp.x)!=FindParrent(tp.y)){
                mst[tp.x][tp.y]=mst[tp.y][tp.x]=tp.z;
                Union(tp.x,tp.y);
                G[tp.x].pb(tp.y);
                G[tp.y].pb(tp.x);
            }
        }
        dfs(u,1e9);

        f=1;
        x=w/(ans-1);
        if(w%(ans-1)){
            x++;
        }
        printf("Scenario #%d\nMinimum Number of Trips = %d\n",++id,x);
        for(int i=1;i<=n;i++){
            G[i].clear();
        }
        fr=0;
        if(f){
            printf("\n");
        }
    }

    return 0;
}
