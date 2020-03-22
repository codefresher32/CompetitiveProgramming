#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<ll,ll>
#define pi pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 4294967296
#define on(x) (marked[x/64]&(1<<((x%64)/2)))
#define mark(x) marked[x/64]|=(1<<((x%64)/2))
#define M 5761600

int ans;
map<int,pi>mp;
ll marked[20001000/64+10];


bool isPrime(int num)
{
    return num>1&&(num==2||((num&1)&&!on(num)));
}

void sieve()
{
    ll n=20000100;
    //prime.pb(2);
    for(ll i=3;i*i<=n;i+=2){
        if(!on(i)){
            for(ll j=i*i;j<=n;j+=2*i){
                mark(j);
            }
        }
    }
    for(int i=3;i<=n;i+=2){
        if(isPrime(i)&&isPrime(i+2)){
            mp[++ans]={i,i+2};
        }
    }
    return ;
}




int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,q,id=0,idx;
    ll n,d;
    sieve();
    while(cin>>n){
        printf("(%d, %d)\n",mp[n].F,mp[n].S);
    }
    return 0;
}
