#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[10005];
int start[10005],low[10005],parrent[10005];
bool arti_vis[10005];
int root,rootcnt,ti;

void articulation_point(int s)
{
    start[s]=low[s]=++ti;
    for(int v:G[s]){
        if(!start[v]){
            if(s==root){
                rootcnt++;
            }
            parrent[v]=s;
            articulation_point(v);
            if(low[v]>=start[s]){
                arti_vis[s]=1;
            }
            low[s]=min(low[s],low[v]);
        }
        else if(v!=parrent[s]){
            low[s]=min(low[s],start[v]);
        }
    }
    return ;
}

void clr(int n)
{
    for(int i=1;i<=n;i++){
        G[i].clear();
    }
    memset(start,0,sizeof(start));
    memset(low,0,sizeof(start));
    memset(parrent,0,sizeof(start));
    memset(arti_vis,0,sizeof(arti_vis));
    return ;
}


int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int u,v,l,m,k,t,n;
    scanf("%d",&t);
    for(int k=1;k<=t;k++){
        scanf("%d%d",&n,&m);
        for(int j=1;j<=m;j++){
           scanf("%d%d",&u,&v);
           G[u].push_back(v);
           G[v].push_back(u);
        }
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(!start[i]){
                root=i;
                rootcnt=0;
                articulation_point(i);
                arti_vis[root]=(rootcnt>1);
            }
            if(arti_vis[i]){
                cnt++;
            }
        }
        printf("Case %d: %d\n",k,cnt);
        clr(n);
    }
    return 0;
}


