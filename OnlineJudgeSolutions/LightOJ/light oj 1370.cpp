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


vector<int>prime;
ll marked[3000100/64+10];

bool isPrime(int num)
{
    return num>1&&(num==2||((num&1)&&!on(num)));
}

void sieve()
{
    ll n=3000100;
    prime.pb(2);
    for(ll i=3;i*i<=n;i+=2){
        if(!on(i)){
            for(ll j=i*i;j<=n;j+=2*i){
                mark(j);
            }
        }
    }
    for(int i=3;i<=n;i+=2){
        if(isPrime(i)) prime.pb(i);
    }
    return ;
}



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    sieve();
    int n,t,a,id=0;
    ll ans;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        ans=0;
        for(int i=1;i<=n;i++){
            scanf("%d",&a);
            int it=upper_bound(prime.begin(),prime.end(),a)-prime.begin();
            ans+=prime[it];
        }
        printf("Case %d: %lld Xukha\n",++id,ans);
    }
    return 0;
}
