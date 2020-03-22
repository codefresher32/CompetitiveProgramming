#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<ll,ll>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 100000007

int n,cases,v[55],c[55];
int dp[55][1005];
int vis[55][1005];

int call(int idx,int make)
{
    if(make==0) return 1;
    if(idx>n) return 0;
    int p=0;
    int &ret=dp[idx][make];
    if(vis[idx][make]==cases) return ret;
    for(int i=0;i<=c[idx]&&make-v[idx]*i>=0;i++){
        p+=call(idx+1,make-v[idx]*i);
        if(p>=mod) p-=mod;
    }
    vis[idx][make]=cases;
    return ret=p;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,k,ans,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&k);
        for(int i=1;i<=n;i++){
            scanf("%d",&v[i]);
        }
        for(int i=1;i<=n;i++){
            scanf("%d",&c[i]);
        }
        cases++;
        ans=call(1,k);
        printf("Case %d: %d\n",++id,ans);
    }
    return 0;
}
