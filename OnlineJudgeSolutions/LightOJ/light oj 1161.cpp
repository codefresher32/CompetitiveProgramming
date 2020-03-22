#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<ll,ll>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 100000007
#define eps 1e-6
#define on(x) (marked[x/64]&(1<<((x%64)/2)))
#define mark(x) marked[x/64]|=(1<<((x%64)/2))

ll ncr[10005][5],ans[10005],ar[10005];

void NcR()
{
    ncr[0][0]=1;
    for(ll i=0;i<=10000;i++){
        for(ll j=0;j<=4;j++){
            if(j>i) ncr[i][j]=0;
            else if(j==i||j==0) ncr[i][j]=1;
            else ncr[i][j]=ncr[i-1][j-1]+ncr[i-1][j];
        }
    }
    return ;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,id=0;
    NcR();
    ll a,mx;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        mx=0;
        for(int i=1;i<=n;i++){
            scanf("%lld",&a);
            mx=max(mx,a),ar[a]++;
        }
        ll cnt;
        for(int i=mx;i>=1;i--){
            cnt=ar[i];
            for(int j=2*i;j<=mx;j+=i){
                ans[i]-=ans[j],cnt+=ar[j];
            }
            ans[i]+=ncr[cnt][4];
        }
        printf("Case %d: %lld\n",++id,ans[1]);
        for(int i=1;i<=10000;i++){
            ans[i]=ar[i]=0;
        }
    }
    return 0;
}
