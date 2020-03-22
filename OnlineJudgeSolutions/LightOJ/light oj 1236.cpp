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
#define mod 4294967296
#define on(x) (marked[x/64]&(1<<((x%64)/2)))
#define mark(x) marked[x/64]|=(1<<((x%64)/2))
#define M 5761600


vector<ll>prime;
ll marked[10000100/64+10];


bool isPrime(int num)
{
    return num>1&&(num==2||((num&1)&&!on(num)));
}

void sieve()
{
    ll n=10000100;
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

int fac(ll n)
{
    int ans=1;
    for(int i=0;i<prime.size()&&prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0){
            int p=0;
            while(n%prime[i]==0){
                p++;
                n/=prime[i];
            }
            ans*=(2*p+1);
        }
    }
    if(n>1){
        ans*=3;
    }
    return ans;
}



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,ans,id=0;
    ll n,d;
    sieve();
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        ans=fac(n);
        printf("Case %d: %d\n",++id,ans/2+1);
    }
    return 0;
}
