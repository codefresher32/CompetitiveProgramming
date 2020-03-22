#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back

vector<int>prime;
bool vis[1000005];

void sieve(int n)
{
    int sr=sqrt(n);
    prime.pb(2);
    for(int i=3;i<=sr;i+=2){
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


ll nod(ll n)
{
    ll cnt=1,sq=sqrt(n);
    for(int i=0;i<prime.size()&&prime[i]<=sq;i++){
        if(n%prime[i]==0){
            ll p=0;
            while(n%prime[i]==0){
                n/=prime[i];
                p++;
            }
            sq=sqrt(n);
            p++,cnt*=p;
        }
    }
    if(n!=1) cnt*=2;
    return cnt;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,id=0;
    sieve(1000000);
    scanf("%d",&t);
    ll n;
    while(t--){
        scanf("%lld",&n);
        printf("Case %d: %lld\n",++id,nod(n)-1);
    }

    return 0;
}
