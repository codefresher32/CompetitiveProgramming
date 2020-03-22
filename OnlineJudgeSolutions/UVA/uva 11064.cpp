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
#define eps 1e-6

vector<ll>prime;
bool vis[1000005];

void sieve()
{
    ll sr,n=1000004;
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


ll fac(ll n)
{
    ll m,phi,nod;
    phi=m=n,nod=1;
    for(int i=0;i<prime.size()&&prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0){
            ll p=0;
            while(n%prime[i]==0){
                p++,n/=prime[i];
            }
            nod*=(p+1);
            phi-=(phi/prime[i]);
        }
    }
    if(n>1){
        nod*=2;
        phi-=(phi/n);
    }
    return (m-(nod+phi)+1);
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,id;
    ll n,m;
    sieve();
    while(scanf("%lld",&n)!=EOF){
        printf("%lld\n",fac(n));
    }
    return 0;
}
