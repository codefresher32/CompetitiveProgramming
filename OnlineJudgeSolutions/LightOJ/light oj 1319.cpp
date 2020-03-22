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
#define on(x) (marked[x/64]&(1<<((x%64)/2)))
#define mark(x) marked[x/64]|=(1<<((x%64)/2))


pii extended_euclid(ll a,ll b)
{
    if(b==0){
        return pii(1,0);
    }
    else{
        pii d=extended_euclid(b,a%b);
        return pii(d.S,d.F-d.S*(a/b));
    }
}

ll modular_inverse(ll a,ll b)
{
    pii ret=extended_euclid(a,b);
    return ((ret.F%b)+b)%b;
}

int n;
ll mod[20];
ll rem[20];

ll CRT()
{
    ll prod=1;
    for(int i=1;i<=n;i++){
        prod*=mod[i];
    }
    ll result=0;
    for(int i=1;i<=n;i++){
        ll pp=prod/mod[i];
        result+=rem[i]*modular_inverse(pp,mod[i])*pp;
    }
    return (result%prod);
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%lld %lld",&mod[i],&rem[i]);
        }
        ll ans=CRT();
        printf("Case %d: %lld\n",++id,ans);
    }
    return 0;
}
