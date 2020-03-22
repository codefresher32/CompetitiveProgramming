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

vector<ll>prime,lsd;
bool vis[1000005];

double lg(ll m,ll p)
{
    double x=log10(m)/log10(p)+eps;
    return x;
}

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
    ll p,cnt,c2,c5,ans=1;
    c2=lg(n,2),c5=lg(n,5);
    for(int i=0;i<prime.size()&&prime[i]*prime[i]<=n;i++){
        p=prime[i];
        cnt=lg(n,p);
        if(p==2||p==5){
            continue;
        }
        for(ll i=1;i<cnt;i++){
            ans*=p,ans%=10;
        }
    }
    for(ll i=1;i<=c2-c5;i++){
        ans*=2,ans%=10;
    }
    return ans;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,id;
    ll n,m;
    sieve();
    m=1;
    lsd.pb(1);
    for(int i=0;i<prime.size();i++){
        if(prime[i]==2||prime[i]==5){
            continue;
        }
        m*=prime[i];
        m%=10;
        lsd.pb(m);
    }
//    for(int i=0;i<10;i++){
//        cout<<lsd[i]<<" ";
//    }
//    cout<<endl;
    while(scanf("%lld",&n),n){
        m=fac(n);
        id=upper_bound(prime.begin(),prime.end(),n)-prime.begin()-1;
        if(n>4) id--;
        if(id>=0) m*=lsd[id];
        printf("%lld\n",m%10);
    }
    return 0;
}
