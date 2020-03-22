#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int ar[105],lv,mx;
bool vis[105];
vector<pair<int,int>>G[105];
bool f;

void dfs(int s,int sum)
{
    vis[s]=1;
    for(auto v:G[s]){
        if(!vis[v.first]){
            dfs(v.first,sum+v.second);
        }
    }
    if(mx<sum&&!f){
        mx=sum;
        lv=s;
        f=1;
    }
    return ;
}

bool com(const pair<int,int>&A,const pair<int,int>&B)
{
    return A.second>B.second;
}

void clr(int n)
{
    for(int i=0;i<n;i++){
        G[i].clear();
    }
    mx=lv=f=0;
    memset(vis,0,sizeof(vis));
    memset(ar,0,sizeof(vis));
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,m,u,v;
    scanf("%d",&t);
    for(int k=1;k<=t;k++){
        scanf("%d%d",&n,&m);
        for(int i=0;i<=n-1;i++){
            scanf("%d",&ar[i]);
        }
        for(int i=1;i<=m;i++){
            scanf("%d%d",&u,&v);
            G[u].push_back(make_pair(v,ar[v]));
        }
        for(int i=0;i<=n-1;i++){
            sort(G[i].begin(),G[i].end(),com);
        }

        dfs(0,0);
        printf("Case %d: %d %d\n",k,mx,lv);
        clr(n);
    }
    return 0;
}



