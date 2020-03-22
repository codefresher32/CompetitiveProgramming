#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back


vector<int>G[60];
bool vs[60];
vector<pii>vc;
int d[60][60],dg[60];

void ck(int s)
{
    vs[s]=1;
    for(int v:G[s]){
        if(!vs[v]){
            ck(v);
        }
    }
}


void dfs(int s)
{
   for(int v=1;v<=50;v++){
        if(d[s][v]){
            d[s][v]--;
            d[v][s]--;

            //vc.pb({s,v});
            dfs(v);
             printf("%d %d\n",v,s);
        }
   }
}

void clr()
{
    memset(vs,0,sizeof(vs));
    memset(dg,0,sizeof(dg));
    memset(d,0,sizeof(d));
    //vc.clear();
    for(int i=1;i<=55;i++){
        G[i].clear();
    }
    return ;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int T,n,u,v,id=0;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d %d",&u,&v);
            G[u].pb(v);
            G[v].pb(u);
            d[u][v]++;
            d[v][u]++;
            dg[u]++,dg[v]++;
        }
        bool f=0;
        u=-1;
        printf("Case #%d\n",++id);
        for(int i=1;i<=50;i++){
            if(dg[i]%2){
                f=1;
                break;
            }
            else if(dg[i]&&u==-1){
                u=i;
            }
        }
        int cnt=0;
        for(int i=1;i<=50;i++){
            if(dg[i]&&!vs[i]){
                ck(i);
                cnt++;
            }
        }
        if(f||cnt!=1){
            printf("some beads may be lost\n");
        }
        else{
            dfs(u);
//            for(pii y:vc){
//                printf("%d %d\n",y.F,y.S);
//            }
        }
        clr();
        if(T){
            printf("\n");
        }
    }
    return 0;
}

