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
bool vis[100000005];

void sieve()
{
    ll sr,n=100000004;
    sr=sqrt(n);
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

ll pw(ll n,ll p)
{
    ll ans=1;
    for(ll i=1;i<=p;i++){
        ans*=n;
    }
    return ans;
}

ll fac(ll n)
{
    ll ans=1;
    for(int i=0;i<prime.size()&&prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0){
            ll p=0;
            while(n%prime[i]==0){
                p++;
                n/=prime[i];
            }
            p++;
            ans*=((pw(prime[i],p)-1)/(prime[i]-1));
        }
    }
    if(n>1){
        ans*=(n+1);
    }
    return ans;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t;
    ll n;
    sieve();
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        printf("%lld\n",fac(n)-n);
    }
    return 0;
}
