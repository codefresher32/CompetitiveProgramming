#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,ll>
#define F first
#define S second
#define pb push_back
#define pp pop_back

vector<pii>G[505];
bool vis[505];
ll d[505];


struct node
{
    int v;
    ll w;
    node(int x,ll y){
        v=x,w=y;
    }
    bool operator<(const node &p)const{
        return w>p.w;
    }
};




ll dijkstra(int s,int n)
{
    priority_queue<node>q;
    for(int i=1;i<=n;i++){
        if(vis[i]||s==i){
            d[i]=0;
            q.push(node(i,d[i]));
        }
        else{
           d[i]=1e18;
        }
    }
    ll mx=0;
    while(!q.empty()){
        node tp=q.top();
        q.pop();
        for(pii x:G[tp.v]){
            if(d[tp.v]+x.S<d[x.F]){
                d[x.F]=d[tp.v]+x.S;
                q.push(node(x.F,d[x.F]));
            }
        }
    }
    for(int i=1;i<=n;i++){
        mx=max(mx,d[i]);
    }
    return mx;
}


void clr(int n)
{
    memset(vis,0,sizeof(vis));
    for(int i=1;i<=n;i++){
        G[i].clear();
    }
    return ;
}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,m,n,u,v;
    ll mn,w;
    char s[50];
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&m,&n);
        while(m--){
            scanf("%d",&u);
            vis[u]=1;
        }
        getchar();
        while(gets(s)){
            if(!strlen(s)){
                break;
            }
            sscanf(s,"%d %d %lld",&u,&v,&w);
            G[u].pb({v,w});
            G[v].pb({u,w});
        }
        int ans=1;
        ll mn=INT_MAX,mx;
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                mx=dijkstra(i,n);
                if(mx<mn){
                    mn=mx;
                    ans=i;
                }
            }
        }
        printf("%d\n",ans);
        if(t){
            printf("\n");
        }
        clr(n);

    }
    return 0;
}


