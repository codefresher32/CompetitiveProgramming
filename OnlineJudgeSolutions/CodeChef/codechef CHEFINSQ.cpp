#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7

ll a[105],dp[55][55];

ll ncr(ll n,ll r)
{
    if(r==1) return n;
    if(n==r) return 1;
    if(dp[n][r]!=-1) return dp[n][r];
    dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
    return dp[n][r];
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,m,x;
    memset(dp,-1,sizeof(dp));
    //ncr(50,50);
    cin>>t;
    while(t--){
        cin>>n>>m;
        memset(a,0,sizeof(a));
        for(int i=1;i<=n;i++){
            cin>>x,a[x]++;
        }
        ll ans;
        for(int i=1;i<=100&&m;i++){
            if(a[i]<m) m-=a[i];
            else if(a[i]){
                ans=ncr(a[i],m),m=0;
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}



