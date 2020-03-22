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
#define mod 4294967296
#define on(x) (marked[x/64]&(1<<((x%64)/2)))
#define mark(x) marked[x/64]|=(1<<((x%64)/2))
#define M 5761600

bool vis[1000005];
int mobius[1000005];

void mob()
{
    int n=1000002;
    for(int i=1;i<=n;i++) mobius[i]=1;
    for(int i=2;i<=n;i++){
        if(!vis[i]){
            for(int j=i;j<=n;j+=i){
                vis[j]=i;
                if(j%(i*i)==0) mobius[j]=0;
                mobius[j]*=-1;
            }
        }
    }
    return ;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    ll n,m,ans;
    int t,id=0;
    mob();
    scanf("%d",&t);
    while(t--){
        scanf("%lld %lld",&n,&m);
        if(n>m) swap(n,m);
        ans=n*m;
        for(int i=2;i<=n;i++){
            if(mobius[i]==0){
                continue;
            }
            if(mobius[i]==-1){
                ans-=((n/i)*(m/i));
            }
            else{
                ans+=((n/i)*(m/i));
            }
        }
        if(n) ans++;
        if(m) ans++;
        printf("Case %d: %lld\n",++id,ans);
    }
    return 0;
}

