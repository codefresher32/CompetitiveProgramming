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

int n;
ll ar[205][205],dp[205][205];

ll call(int idx,int pos)
{
    if(idx>=2*n||pos<1||pos>n) return 0;
    ll &ret=dp[idx][pos];
    if(ret!=-1) return ret;
    ll p=0,q=0;
    if(idx<n){
        p=call(idx+1,pos)+ar[idx][pos];
        q=call(idx+1,pos+1)+ar[idx][pos];
    }
    else{
        p=call(idx+1,pos)+ar[idx][pos];
        q=call(idx+1,pos-1)+ar[idx][pos];
    }
    return ret=max(p,q);
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,q,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=2*n;i++){
            for(int j=1;j<=n;j++){
                dp[i][j]=-1;
                ar[i][j]=0;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++) scanf("%lld",&ar[i][j]);
        }
        int m=n;
        for(int i=n+1;i<2*n;i++){
            for(int j=1;j<m;j++) scanf("%lld",&ar[i][j]);
            m--;
        }
        ll ans=call(1,1);
        printf("Case %d: %lld\n",++id,ans);

    }
    return 0;
}


