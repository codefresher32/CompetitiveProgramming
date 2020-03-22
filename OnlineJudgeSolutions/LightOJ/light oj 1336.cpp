#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<ll,ll>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-7
#define mod 1000000007



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,id=0;
    ll n,ans,temp,m;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        ans=n;
        for(ll i=1;i*i<=n;i+=2){
            m=n/(i*i);
            temp=floor(log2(m));
            ans-=(temp+1);
        }
        printf("Case %d: %lld\n",++id,ans);
    }
    return 0;
}
