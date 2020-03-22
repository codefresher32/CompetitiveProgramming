#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pi pair<int,int>
#define pii pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 100000007

int sd[100005],rd[100005];
vector<int>G[100005],R[100005];

void bfs(int s,int d[100005],vector<int>Gr[100005])
{
    queue<int>q;
    d[s]=0,q.push(s);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v:Gr[u]){
            if(d[v]==-1){
                d[v]=d[u]+1;
                q.push(v);
            }
        }
    }
    return ;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,m,u;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<n;i++){
            scanf("%d",&m);
            while(m--){
                scanf("%d",&u);
                G[i].pb(u);
                R[u].pb(i);
            }
        }
        for(int i=1;i<=n;i++){
            sd[i]=rd[i]=-1;
            sort(G[i].begin(),G[i].end());
        }
        bfs(1,sd,G);
        bfs(n,rd,R);
        if(sd[n]==-1){
            printf("-1\n");
        }
        else{
            printf("%d\n",sd[n]);
            queue<int>q;
            q.push(1);
            while(!q.empty()){
                u=q.front();
                q.pop();
                if(u==n) break;
                printf("%d ",u);
                for(int v:G[u]){
                    if(sd[v]+rd[v]==sd[n]){
                        q.push(v);
                        break;
                    }
                }
            }
            printf("\n");
        }
        if(t) printf("\n");
        for(int i=1;i<=n;i++){
            G[i].clear(),R[i].clear();
        }
    }
    return 0;
}

