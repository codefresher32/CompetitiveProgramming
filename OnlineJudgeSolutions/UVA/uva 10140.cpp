#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back

vector<ll>prime,sprime;
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

void segsieve(int a,int b)
{
    ll p,j,n,k;
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
            sprime.pb(i+a);
        }
    }
    return ;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    sieve();
//    for(int v:prime){
//        cout<<v<<" ";
//    }
//    cout<<endl;
    ll l,r;
    while(scanf("%lld %lld",&l,&r)!=EOF){
        segsieve(l,r);
        int d1,d2,d3,d4,mx,mn;
        mn=INT_MAX,mx=0;
        for(int i=1;i<sprime.size();i++){
            if(sprime[i]-sprime[i-1]<mn){
                d1=sprime[i-1],d2=sprime[i];
                mn=sprime[i]-sprime[i-1];
            }
            if(sprime[i]-sprime[i-1]>mx){
                d3=sprime[i-1],d4=sprime[i];
                mx=sprime[i]-sprime[i-1];
            }
        }
        if(sprime.size()<=1){
            printf("There are no adjacent primes.\n");
        }
        else{
            printf("%d,%d are closest, %d,%d are most distant.\n",d1,d2,d3,d4);
        }
        sprime.clear();
    }
    return 0;
}

