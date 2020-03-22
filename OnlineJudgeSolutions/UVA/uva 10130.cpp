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

int n,a;
int price[1005],weight[1005],dp[2][1005];


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,q,ans;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d %d",&price[i],&weight[i]);
        }
        scanf("%d",&q);
        int mx;
        memset(dp,0,sizeof dp);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=30;j++){
                mx=(j-weight[i]<0)?0:dp[(i-1)%2][j-weight[i]]+price[i];
                dp[i%2][j]=max(dp[(i-1)%2][j],mx);
            }
        }
        ans=0;
        while(q--){
            scanf("%d",&a);
            ans+=dp[n%2][a];
        }
        printf("%d\n",ans);
    }
    return 0;
}
