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
ll marked[1000005/64+10];

bool isPrime(int num)
{
    return num>1&&(num==2||((num&1)&&!on(num)));
}

void sieve()
{
    ll n=1000004;
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

ll lg(ll m,ll p)
{
    ll cnt=0;
    while(m){
        cnt+=m/p,m/=p;
    }
    return cnt+1;
}


ll fac(ll n,ll m)
{
    ll ans=1,p;
    map<ll,ll>mp,pm;
    for(int i=0;i<prime.size()&&prime[i]*prime[i]<=m;i++){
        if(m%prime[i]==0){
            p=0;
            while(m%prime[i]==0){
                p++,m/=prime[i];
            }
            mp[prime[i]]=p;
        }
    }
    if(m>1){
        mp[m]=1;
    }

    for(int i=0;i<prime.size()&&prime[i]<=n;i++){
        p=lg(n,prime[i]);
        pm[prime[i]]=p;
    }
    bool f=0;
    for(auto it:mp){
        if(pm[it.F]){
            pm[it.F]-=it.S;
        }
        else{
            f=1;
            break;
        }
    }
    if(!f){
        for(auto it:pm){
            if(it.S<=0){
                f=1;
                break;
            }
            ans*=it.S;
        }
    }
    if(f||(n==0&&m!=1)) ans=0;
    return ans;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,id=0;
    ll n,m,k;
    sieve();
    while(scanf("%lld %lld",&n,&m),(n+abs(m))){
        m=(m<0)?-m:m;
        printf("%lld\n",fac(n,m));
    }
    return 0;
}
