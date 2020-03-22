#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pi pair<char,int>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 100000007

ll dp[10005];
int coin[105];

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,k,cases=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&k);
        for(int i=1;i<=n;i++){
            scanf("%d",&coin[i]);
        }
        ++cases;
        memset(dp,0,sizeof dp);
        dp[0]=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=k;j++){
                if(j-coin[i]>=0){
                    dp[j]+=dp[j-coin[i]];
                    if(dp[j]>=mod) dp[j]-=mod;
                }
            }
        }
        printf("Case %d: %lld\n",cases,dp[k]);
    }
    return 0;
}

