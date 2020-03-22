#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7


vector<int>G[10005];
vector<int>vc;
int d[10005],c[10005];
bool st[10005];


int bfs(int s,int n)
{
    memset(d,-1,sizeof(d));
    int u,sum=0;
    queue<int>q;
    d[s]=0;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int v:G[u]){
            if(d[v]==-1){
                d[v]=d[u]+1;
                q.push(v);
                if(st[v]){
                    sum+=d[v];
                }
            }
        }
    }
    return sum;
}


void clr(int n)
{
    for(int i=1;i<=n;i++){
        c[i]=st[i]=0;
        G[i].clear();
    }
    vc.clear();
    return ;
}



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int T,n,m,u,v,w;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&n,&m);
        clr(n);
        while(m--){
            for(int i=1;;i++){
                scanf("%d",&v);
                c[v]++;
                if(!v){
                    break;
                }
                if(i>1){
                    G[u].pb(v);
                    G[v].pb(u);
                }
                u=v;
            }
        }
        for(int i=1;i<=n;i++){
            if(c[i]>1){
                st[i]=1;
                vc.pb(i);
            }
        }
        int sum,mx,ans=-1;
        mx=INT_MAX;
        for(int x:vc){
            sum=bfs(x,n);
            //cout<<sum<<endl;
            if(sum<mx){
               mx=sum;
               ans=x;
            }
        }
        printf("Krochanska is in: %d\n",ans);

    }
    return 0;
}



