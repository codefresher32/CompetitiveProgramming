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


vector<ll>divi,phi;
vector<int>prime;
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
    for(int i=3;i<=n;i+=2){
        if(isPrime(i)) prime.pb(i);
    }
    return ;
}

ll eu_phi(ll n)
{
    ll res=n;
    for(int i=0;i<prime.size()&&prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                n/=prime[i];
            }
            res-=(res/prime[i]);
        }
    }
    if(n>1){
        res-=(res/n);
    }
    return res;
}



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,q,id=0,idx;
    ll n,d;
    sieve();
    scanf("%d",&t);
    while(t--){
        scanf("%lld %d",&n,&q);
        for(ll i=1;i*i<=n;i++){
            if(n%i==0){
                divi.pb(i);
                if(i!=n/i) divi.pb(n/i);
            }
        }
        sort(divi.begin(),divi.end());
        for(int i=0;i<divi.size();i++){
            phi.pb(eu_phi(n/divi[i]));
            if(i){
                phi[i]+=phi[i-1];
            }
        }
        printf("Case %d\n",++id);
        while(q--){
            scanf("%lld",&d);
            if(d>=n){
                printf("%lld\n",n);
            }
            else if(d<1){
                printf("0\n");
            }
            else{
                idx=upper_bound(divi.begin(),divi.end(),d)-divi.begin();
                idx--;
                printf("%lld\n",phi[idx]);
            }
        }
        divi.clear();
        phi.clear();
    }
    return 0;
}


