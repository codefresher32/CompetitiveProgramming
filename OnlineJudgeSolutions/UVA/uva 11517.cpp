#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>pb_ds;

#define pii pair<ll,ll>
#define pi pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 1000000007
#define pai acos(-1)
#define mx 1000000000

int n,k,coin[105],dp[105][20005];

int call1(int idx,int make)
{
    if(make>=k) return make;
    if(idx>n) return 300000;
    int &ret=dp[idx][make];
    if(ret!=-1) return ret;
    int p=0,q=0;
    p=call1(idx+1,make+coin[idx]);
    q=call1(idx+1,make);
    return ret=min(p,q);
}

int call2(int idx,int make)
{
    if(make==0) return 0;
    if(idx>n) return 105;
    int &ret=dp[idx][make];
    if(ret!=-1) return ret;
    int p=105,q=105;
    if(make-coin[idx]>=0) p=1+call2(idx+1,make-coin[idx]);
    q=call2(idx+1,make);
    return ret=min(p,q);
}


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,m;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&k,&n);
        for(int i=1;i<=n;i++) scanf("%d",&coin[i]);
        memset(dp,-1,sizeof dp);
        int ans=call1(1,0);
        memset(dp,-1,sizeof dp);
        int need=call2(1,ans);
        printf("%d %d\n",ans,need);
    }

    return 0;
}
