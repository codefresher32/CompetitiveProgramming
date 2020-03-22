#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

vector<pii>G[30005];
int id,mn;

void bfs(int s,int c[300005])
{
    queue<int>q;
    int u;
    c[s]=0;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(auto v:G[u]){
            if(c[v.F]==-1){
                c[v.F]=c[u]+v.S;
                q.push(v.F);
                if(c[v.F]>mn){
                    id=v.F;
                    mn=c[v.F];
                }
            }
        }
    }

    return ;
}

void clr(int n)
{
    for(int i=0;i<n;i++){
        G[i].clear();
    }
    mn=id=0;
    return ;
}



int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,u,v,w,n;
    int c1[30005],c2[30005];
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        for(int j=1;j<n;j++){
            scanf("%d%d%d",&u,&v,&w);
            G[u].pb({v,w});
            G[v].pb({u,w});
        }
        memset(c1,-1,sizeof(c1));
        bfs(0,c1);
        mn=0;
        memset(c1,-1,sizeof(c1));
        bfs(id,c1);
        mn=0;
        memset(c2,-1,sizeof(c2));
        bfs(id,c2);
        printf("Case %d:\n",i);
        for(int i=0;i<n;i++){
            //cout<<c1[i]<<" "<<c2[i]<<endl;
            printf("%d\n",max(c1[i],c2[i]));
        }
        clr(n);
    }
    return 0;
}

