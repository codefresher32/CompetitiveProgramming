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

ll a[1005],mx;
int n,m;

int ck(ll mid)
{
    ll s;
    int cnt;
    cnt=1;
    s=mx=0;
    for(int i=1;i<=n;){
        if(a[i]>mid){
            return m+1;
        }
        if(s+a[i]<=mid){
            s+=a[i];
            mx=max(mx,s),i++;
        }
        else{
            cnt++;
            s=0;
        }
    }
    mx=max(mx,s);
    return cnt;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    ll lo,hi,mid;
    while(scanf("%d %d",&n,&m)!=EOF){

        lo=1,hi=0;
        for(int i=1;i<=n;i++){
            scanf("%lld",&a[i]);
            hi+=a[i];
        }
        int x;
        ll ans=INT_MAX;
        while(lo<=hi){
            mid=(lo+hi)/2;
            x=ck(mid);
            if(x<=m){
                hi=mid-1;
                ans=min(ans,mx);
            }
            else{
                lo=mid+1;
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}

