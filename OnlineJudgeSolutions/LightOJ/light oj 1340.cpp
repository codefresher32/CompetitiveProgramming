#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<ll,ll>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 10000019
#define on(x) (marked[x/64]&(1<<((x%64)/2)))
#define mark(x) marked[x/64]|=(1<<((x%64)/2))


vector<ll>prime;
ll marked[100100/64+10];

bool isPrime(int num)
{
    return num>1&&(num==2||((num&1)&&!on(num)));
}

void sieve()
{
    ll n=100100;
    prime.pb(2);
    for(ll i=3;i*i<=n;i+=2){
        if(!on(i)){
            for(ll j=i*i;j<=n;j+=2*i){
                mark(j);
            }
        }
    }
    for(ll i=3;i<=n;i+=2){
        if(isPrime(i)) prime.pb(i);
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


ll fac(ll n,ll z)
{
    ll m,cnt,ans=1;
    for(int i=0;i<prime.size()&&prime[i]<=n;i++){
        m=n;
        cnt=0;
        while(m){
            cnt+=m/prime[i];
            m/=prime[i];
        }
        if(cnt<z) break;
        ans=(ans*bigmod(prime[i],cnt/z))%mod;
    }
    return ans;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    sieve();
    int t,a,id=0;
    ll ans,n,z;
    scanf("%d",&t);
    while(t--){
        scanf("%lld %lld",&n,&z);
        ans=fac(n,z);
        ans=(ans==1)?-1:ans;
        printf("Case %d: %lld\n",++id,ans);
    }
    return 0;
}
