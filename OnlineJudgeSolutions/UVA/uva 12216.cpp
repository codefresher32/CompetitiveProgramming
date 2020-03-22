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
#define eps 1e-6
#define on(x) (marked[x/64]&(1<<((x%64)/2)))
#define mark(x) marked[x/64]|=(1<<((x%64)/2))


vector<ll>prime;
ll marked[100000100/64+10];

bool isPrime(int num)
{
    return num>1&&(num==2||((num&1)&&!on(num)));
}

void sieve()
{
    ll n=100000100;
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


ll fac(ll n,ll m,ll k)
{
    ll ans1=1,ans2=1;
    for(int i=0;i<prime.size()&&prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0){
            ll p=0;
            while(n%prime[i]==0){
                p++,n/=prime[i];
            }
            p=(p*m);
            ans1=(ans1*(p/k+1))%mod;
            ans2=(ans2*(p/(k+1)+1))%mod;
        }
    }
    if(n>1){
        ans1=(ans1*(m/k+1))%mod;
        ans2=(ans2*(m/(k+1)+1))%mod;
    }
    return (ans1-ans2+mod)%mod;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,id=0;
    ll n,m,k;
    sieve();
    while(scanf("%lld %lld %lld",&n,&m,&k),n,m,k){
        printf("Case %d: %lld\n",++id,fac(n,m,k));
    }
    return 0;
}
