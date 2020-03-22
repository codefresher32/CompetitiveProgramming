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
bool vis[1000010];

void sieve()
{
    int sq,n=1000004;
    sq=sqrt(n);
    prime.pb(2);
    for(int i=3;i<=sq;i+=2){
        if(!vis[i]){
            for(int j=i*i;j<=n;j+=2*i){
                vis[j]=1;
            }
        }
    }
    for(int i=3;i<=n;i+=2){
        if(!vis[i]) prime.pb(i);
    }
    return ;
}

map<ll,int> fac(ll n)
{
    map<ll,int>mp;
    for(int i=0;i<prime.size()&&prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0){
            int p=0;
            while(n%prime[i]==0){
                p++;
                n/=prime[i];
            }
            mp[prime[i]]=p;
        }
    }
    if(n>1){
        mp[n]++;
    }
    return mp;
}

ll pw(ll n,int p)
{
    ll ans=1;
    for(int i=1;i<=p;i++){
        ans*=n;
    }
    return ans;
}



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,id=0;
    sieve();
    ll a,b,c,lcm;
    scanf("%d",&t);
    while(t--){
        map<ll,int>m1,m2,m3,ans;
        scanf("%lld %lld %lld",&a,&b,&lcm);
        m1=fac(lcm);
        m2=fac(a);
        m3=fac(b);
        bool f=0;
        if(lcm%a||lcm%b) f=1;
        ll res=1;
        ll x,y;
        if(!f){
            for(auto v:m1){
                auto it1=m2.find(v.F);
                auto it2=m3.find(v.F);
                a=b=0;
                if(it1!=m2.end()) a=m2[it1->F];
                if(it2!=m3.end()) b=m3[it2->F];
                if(a<v.S&&b<v.S){
                    ans[v.F]=v.S;
                }
            }
            for(auto v:ans){
                res*=pw(v.F,v.S);
            }
        }

        printf("Case %d: ",++id);
        if(f){
            printf("impossible\n");
        }
        else{
            printf("%lld\n",res);
        }
    }
    return 0;
}
