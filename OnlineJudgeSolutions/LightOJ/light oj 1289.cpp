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

int sz;
ll marked[100000100/64+10];
int prime[M];
unsigned lcm[M];

bool isPrime(int num)
{
    return num>1&&(num==2||((num&1)&&!on(num)));
}

void sieve()
{
    ll n=100000100;
    prime[sz++]=2;
    for(ll i=3;i*i<=n;i+=2){
        if(!on(i)){
            for(ll j=i*i;j<=n;j+=2*i){
                mark(j);
            }
        }
    }
    for(int i=3;i<=n;i+=2){
        if(isPrime(i)) prime[sz++]=i;
    }
    return ;
}


unsigned fac(int n)
{
    unsigned ans,b;
    int sq,x;
    sq=sqrt(n);
    ans=1;
    for(int i=0;prime[i]<=sq;i++){
        x=n/prime[i];
        b=1;
        while(x>=prime[i]){
            x/=prime[i];
            b*=prime[i];
        }
        ans*=b;
    }
    ans*=lcm[upper_bound(prime,prime+sz,n)-prime-1];
    return ans;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n;
    unsigned ans;
    sieve();
    lcm[0]=2;
    //cout<<prime[sz-1]<<endl;
    for(int i=1;i<sz;i++){
        lcm[i]=lcm[i-1]*prime[i];
    }
    int t,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        ans=fac(n);
        printf("Case %d: %u\n",++id,ans);
    }
    return 0;
}
