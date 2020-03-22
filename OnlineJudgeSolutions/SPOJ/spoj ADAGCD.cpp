#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define pfb push_front
#define pfp pop_front
#define eps 10E-10
#define mod 1000000007
#define on(x) (marked[x/64]&(1<<((x%64)/2)))
#define mark(x) marked[x/64]|=(1<<((x%64)/2))

int prime[10000007];
unordered_map<int,int>mp,cnt,temp;
int marked[10000005/64+10];


void sieve()
{
    int n=10000004;
    for(int i=2;i<=n;i++){
        if(!prime[i]){
            for(int j=i;j<=n;j+=i){
                prime[j]=i;
            }
        }
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


void fac(int n)
{
    int d,p;
    while(n>1){
        d=prime[n];
        p=0;
        while(n%d==0){
            p++,n/=d;
        }
        temp[d]+=p;
    }
    return ;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,m,a;
    sieve();
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&m);
        while(m--){
            scanf("%d",&a);
            fac(a);
        }
        for(auto it:temp){
            if(!mp[it.F]) mp[it.F]=it.S;
            else mp[it.F]=min(mp[it.F],it.S);
            cnt[it.F]++;
        }
        temp.clear();
    }
    ll ans=1;
    for(auto it:mp){
        if(cnt[it.F]==n){
            ans=(ans*bigmod(it.F,it.S))%mod;
        }
    }
    printf("%lld\n",ans);
    return 0;
}
