#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<ll,ll>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000000007

vector<ll>prime;
bool vis[1000005];


void sieve(ll n)
{
    ll sr=sqrt(n);
    prime.pb(2);
    for(int i=3;i<=sr;i+=2){
        if(!vis[i]){
            for(int j=i*i;j<=n;j+=2*i){
                vis[j]=1;
            }
        }
    }
    for(ll i=3;i<=n;i+=2){
        if(!vis[i]) prime.pb(i);
    }
    return ;
}


ll bigmod(ll a,ll p)
{
    ll res,x;
    res=1%mod,x=a%mod;
    while(p){
        if(p&1) res=((res%mod)*(x%mod))%mod;
        x=((x%mod)*(x%mod))%mod;
        p>>=1;
    }
    return res;
}


ll fac(ll n,ll p)
{
    ll ma,mb,m,sq=sqrt(n),x=1;
    for(int i=0;i<prime.size()&&prime[i]<=sq;i++){
        if(n%prime[i]==0){
            ll c=0;
            while(n%prime[i]==0){
                n/=prime[i];
                c++;
            }
            sq=sqrt(n);
            ma=bigmod(prime[i],(c*p+1));
            mb=bigmod(prime[i]-1,mod-2);
            m=(((ma-1+mod)%mod)*((mb+mod)%mod))%mod;
            x=((x%mod)*(m%mod))%mod;
        }
    }
    if(n>1){
      ma=bigmod(n,p+1);
      mb=bigmod(n-1,mod-2);
      m=(((ma-1+mod)%mod)*((mb+mod)%mod))%mod;
      x=((x%mod)*(m%mod))%mod;
    }
    return x;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,id=0;
    ll n,m;
    sieve(100000);
    scanf("%d",&t);
    while(t--){
        ll ans=1;
        scanf("%lld %lld",&n,&m);
        n=fac(n,m);
        printf("Case %d: %lld\n",++id,n);
    }
    return 0;
}
