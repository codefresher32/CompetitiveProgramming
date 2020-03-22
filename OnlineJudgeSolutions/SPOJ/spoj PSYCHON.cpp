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
bool vis[10005];

void sieve()
{
    ll sr,n=10004;
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



bool fac(int n)
{
    int od,ev;
    od=ev=0;
    for(int i=0;i<prime.size()&&prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0){
            int p=0;
            while(n%prime[i]==0){
                p++;
                n/=prime[i];
            }
            if(p&1) od++;
            else ev++;
        }
    }
    if(n>1) od++;
    return od<ev;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n;
    sieve();
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(!fac(n)){
            printf("Ordinary Number\n");
        }
        else{
            printf("Psycho Number\n");
        }
    }
    return 0;
}
