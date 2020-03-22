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

int k,n;
ll ar[205],dp[205][25][25];

ll call(int idx,ll sm,int cnt,ll mod)
{
    if(cnt==k) return sm==0;
    if(idx>n) return 0;
    ll &ret=dp[idx][sm][cnt];
    if(ret!=-1) return ret;
    ll p=0,q=0;
    p=call(idx+1,(((sm+ar[idx])%mod)+mod)%mod,cnt+1,mod);
    q=call(idx+1,sm,cnt,mod);
    return ret=p+q;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,q,id=0;
    ll md;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&q);
        for(int i=1;i<=n;i++) scanf("%lld",&ar[i]);
        printf("Case %d:\n",++id);
        while(q--){
            scanf("%lld %d",&md,&k);
            memset(dp,-1,sizeof dp);
            printf("%lld\n",call(1,0,0,md));
        }
    }
    return 0;
}
