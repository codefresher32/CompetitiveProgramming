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

ll a[505];
bool vis[505];
int n,m;

int ck(ll mid)
{
    memset(vis,0,sizeof(vis));
    int cnt=0;
    for(int i=n;i>=1;){
        ll s=0;
        while(i>0&&s+a[i]<=mid){
            s+=a[i];
            i--;
        }
        if(!s) return m+1;
        cnt++;
        vis[i]=1;
    }
    return cnt;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t;
    ll lo,hi,mid;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        lo=1,hi=0;
        for(int i=1;i<=n;i++){
            scanf("%lld",&a[i]);
            hi+=a[i];
        }
        int x;
        while(lo<hi){
            mid=(hi+lo)/2;
            x=ck(mid);
            if(x<=m){
                hi=mid;
            }
            else{
                lo=mid+1;
            }
        }
        x=ck(hi);
        for(int i=1;i<=n&&x<m;i++){
            if(!vis[i]){
                vis[i]=1,x++;
            }
        }
        for(int i=1;i<=n;i++){
            if(!(i-1)){
                printf("%lld",a[i]);
            }
            else{
                printf(" %lld",a[i]);
            }
            if(vis[i]){
                printf(" /");
            }
        }
        printf("\n");
    }
    return 0;
}

