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

int n,ar[1005],dp[1005];

int call(int idx,bool f)
{
    if(idx>n) return 0;
    if(idx==n&&f) return 0;
    int &ret=dp[idx];
    if(ret!=-1) return ret;
    int p=0,q=0;
    p=ar[idx]+call(idx+2,f);
    q=call(idx+1,f);
    return ret=max(p,q);
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++) scanf("%d",&ar[i]);
        int mx=0;
        memset(dp,-1,sizeof dp);
        mx=max(mx,call(1,1));
        memset(dp,-1,sizeof dp);
        mx=max(mx,call(2,0));
        printf("Case %d: %d\n",++id,mx);
    }
    return 0;
}

