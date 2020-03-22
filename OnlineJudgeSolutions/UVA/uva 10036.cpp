#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<ll,ll>
#define pi pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
//#define mod 4294967296
#define on(x) (marked[x/64]&(1<<((x%64)/2)))
#define mark(x) marked[x/64]|=(1<<((x%64)/2))
#define M 5761600

int n,mod;
ll ar[10005],dp[10005][105][3];

int call(int idx,ll sum,int ty)
{
    if(idx>n) return sum==0;
    ll &ret=dp[idx][sum][ty];
    if(ret!=-1) return ret;
    int p=0,q=0;
    p=call(idx+1,(((sum+ar[idx])%mod)+mod)%mod,1);
    q=call(idx+1,(((sum-ar[idx])%mod)+mod)%mod,2);
    return ret=p|q;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
   int t;
   scanf("%d",&t);
   while(t--){
        scanf("%d %d",&n,&mod);
        for(int i=1;i<=n;i++) scanf("%lld",&ar[i]);
        memset(dp,-1,sizeof(dp));
        if(call(2,((ar[1]%mod)+mod)%mod,1)) printf("Divisible\n");
        else printf("Not divisible\n");
   }
    return 0;
}


