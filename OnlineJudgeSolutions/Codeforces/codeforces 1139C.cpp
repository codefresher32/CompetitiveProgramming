#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000000007

bool vis[100005];
vector<int>G[100005];

ll cnt;

ll bigmod(ll a,ll b)
{
    if(b==0){
        return 1%mod;
    }
    ll x=bigmod(a,b/2);
    x=(x*x)%mod;
    if(b%2==1){
        x=(x*a)%mod;
    }
    return x;
}

void dfs(int s)
{
    vis[s]=1;
    cnt++;
    for(int v:G[s]){
        if(!vis[v]){
            dfs(v);
        }
    }
    return ;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    int u,v,w;

    cin>>n>>k;
    for(int i=1;i<n;i++){
        cin>>u>>v>>w;
        if(!w){
            G[u].pb(v);
            G[v].pb(u);
        }

    }
    ll x=0,y,z;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
           dfs(i);
           z=bigmod(cnt,k)%mod;
           x+=z;
           x%=mod;
           cnt=0;
        }
    }
    y=bigmod(n,k);
    y-=x;
    if(y<0){
        y+=mod;
    }
    cout<<y<<endl;
    return 0;
}
