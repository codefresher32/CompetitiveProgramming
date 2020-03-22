 #include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mx=3e5+100;
const ll mod=998244353;

vector<int>G[mx];
ll pw[mx];
bool f;
int c1,c2,cr[mx];

void bfs(int s)
{
    int u;
    queue<int>q;
    cr[s]=1;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        q.pop();
        if(cr[u]==1){
            c1++;
        }
        else{
            c2++;
        }
        for(int v:G[u]){
            if(cr[v]==-1){
                cr[v]=!cr[u];
                q.push(v);
            }
            else if(cr[u]==cr[v]){
                f=1;
                return ;
            }
        }
    }
    return ;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,m,u,v;
    pw[0]=1;
    for(int i=1;i<mx;i++){
        pw[i]=(pw[i-1]*2ll)%mod;
    }
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        for(int i=1;i<=m;i++){
            scanf("%d%d",&u,&v);
            G[u].push_back(v);
            G[v].push_back(u);
        }
        for(int i=1;i<=n;i++){
            cr[i]=-1;
        }
        ll sum=1;
        for(int i=1;i<=n;i++){
            if(cr[i]==-1){
                if(G[i].size()==0){
                    cr[i]=1;
                    sum=(sum*3ll)%mod;
                    continue;
                }
                bfs(i);
                if(f){
                    break;
                }
                sum=((sum%mod)*((pw[c1]+pw[c2])%mod))%mod;
            }
            c1=c2=0;
        }
        if(f){
            printf("0\n");
        }
        else{
            printf("%lld\n",sum);
        }
        for(int i=1;i<=n;i++){
            G[i].clear();
        }
        c1=c2=f=0;
    }
    return 0;
}
