#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<ll,ll>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back


ll fac(ll n,ll p)
{
    ll cnt=0;
    while(n){
        cnt+=n/p;
        n/=p;
    }
    return cnt;
}

ll pw(ll n,ll p)
{
    ll cnt=0;
    while(n%p==0){
        cnt++;
        n/=p;
    }
    return cnt;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    ll n,r,p,q,a,b,c,d;
    ll cu2,cu5,cd2,cd5,ans;
    int id=0,t;
    scanf("%d",&t);
    while(t--){
        scanf("%lld %lld %lld %lld",&n,&r,&p,&q);
        cu2=fac(n,2);
        cu2+=pw(p,2)*q;
        cu5=fac(n,5);
        cu5+=pw(p,5)*q;

        cd2=fac(n-r,2);
        cd2+=fac(r,2);
        cd5=fac(n-r,5);
        cd5+=fac(r,5);
        ans=min(cu2-cd2,cu5-cd5);
        printf("Case %d: %lld\n",++id,ans);
    }
    return 0;
}
