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
ll marked[1000100/64+10];

bool isPrime(int num)
{
    return num>1&&(num==2||((num&1)&&!on(num)));
}

void sieve()
{
    ll n=1000100;
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

double lg(ll m,ll p)
{
    double x=log10(m)/log10(p)+eps;
    return x-1;
}


ll fac(ll n)
{
    ll m,cnt,ans=0;
    for(int i=0;i<prime.size()&&prime[i]*prime[i]<=n;i++){
        ans+=lg(n,prime[i]);
    }
    return ans;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    sieve();
    int t,a,id=0;
    ll ans,lo,hi;
    scanf("%d",&t);
    while(t--){
        scanf("%lld %lld",&lo,&hi);
        ans=fac(hi),ans-=fac(lo-1);
        printf("%lld\n",ans);
    }
    return 0;
}
