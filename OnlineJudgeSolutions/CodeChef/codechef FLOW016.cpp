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
#define mod 10000019
#define on(x) (marked[x/64]&(1<<((x%64)/2)))
#define mark(x) marked[x/64]|=(1<<((x%64)/2))


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t;
    ll a,b,gc,lc;
    scanf("%d",&t);
    while(t--){
        scanf("%lld %lld",&a,&b);
        gc=__gcd(a,b);
        lc=a/gc*b;
        printf("%lld %lld\n",gc,lc);
    }

    return 0;
}

