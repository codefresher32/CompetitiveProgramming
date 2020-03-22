#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back

vector<ll>prime;
bool vis[2000005];

void sieve()
{
    int n=1000000;
    prime.pb(2);
    for(int i=3;i<=sqrt(n);i+=2){
        if(!vis[i]){
            for(int j=i*i;j<=n;j+=2*i){
              vis[j]=1;
            }
        }
    }
    for(int i=3;i<=n;i+=2){
        if(!vis[i]){
            prime.pb(i);
        }
    }
    return ;
}

int segsieve(int a,int b)
{
    ll p,j,n,k;
    int cnt=0;
    n=sqrt(b);
    if(a==1) a++;
    memset(vis,0,sizeof(vis));
    for(int i=0;i<prime.size()&&prime[i]<=n;i++){
       p=prime[i];
       j=p*p;
       if(j<a) j=((a+p-1)/p)*p;
       for( ;j<=b;j+=p){
            vis[j-a]=1;
       }
    }
    for(ll i=0;i<=b-a;i++){
        if(!vis[i]){
            cnt++;
        }
    }
    return cnt;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    sieve();
    ll l,r;
    int t,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%lld %lld",&l,&r);
        printf("Case %d: %d\n",++id,segsieve(l,r));
    }
    return 0;
}


