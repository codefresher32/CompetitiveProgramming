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


struct Edge
{
    int u,v,w;
    Edge(int a,int b,int c){
        u=a;
        v=b;
        w=c;
    }
};
vector<Edge>G;
bool f,vis[105];
int d[105];

bool dfs(int s,int n)
{
    if(s==n){
        return true;
    }
    vis[s]=1;
    for(Edge e:G){
        if(e.u==s&&!vis[e.v]&&dfs(e.v,n)){
            return true;
        }
    }
    return false;
}


void B_F(int n)
{
    d[1]=100;
    for(int i=1;i<n;i++){
        for(Edge e:G){
            if(d[e.u]<=0){
                continue;
            }
            d[e.v]=max(d[e.v],d[e.u]+e.w);
        }
    }
    for(Edge e:G){
        if(d[e.u]<=0){
            continue;
        }
        if(d[e.u]+e.w>d[e.v]&&dfs(e.u,n)){
            f=1;
        }
    }
    return ;
}


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,u,v,w;
    while(scanf("%d",&n)!=EOF){
        if(n<0){
            return 0;
        }
        for(int i=1;i<=n;i++){
            d[i]=-INT_MAX;
            scanf("%d %d",&w,&m);
            while(m--){
                scanf("%d",&v);
                G.pb(Edge(i,v,w));
            }
        }
        B_F(n);
        if(d[n]>0||f){
            printf("winnable\n");
        }
        else{
            printf("hopeless\n");
        }
        f=0;
        G.clear();
        memset(vis,0,sizeof(vis));
    }
    return 0;
}



