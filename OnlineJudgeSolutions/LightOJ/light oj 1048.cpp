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

int n,k,a[1005];
bool vis[1005];

int ck(int mid)
{
    for(int i=1;i<=n;i++) vis[i]=0;
    int cnt=0,sm;
    for(int i=1;i<=n; ){
        sm=0;
        while(i<=n&&sm+a[i]<=mid){
            sm+=a[i],i++;
        }
        if(!sm) return k+1;
        cnt++,vis[i-1]=1;
    }
    return cnt;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,m,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&k);
        n++,k++;
        int lo,hi,mid,x;
        hi=0,lo=INT_MAX;
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
            hi+=a[i],lo=min(lo,a[i]);
        }
        while(lo<hi){
            mid=(lo+hi)/2;
            x=ck(mid);
            if(x<=k) hi=mid;
            else lo=mid+1;
        }
        printf("Case %d: %d\n",++id,hi);
        int sm=0,cnt;
        cnt=ck(hi);
        for(int i=n;i>=1&&cnt<k;i--){
            if(!vis[i]) vis[i]=1,cnt++;
        }
//        for(int i=1;i<=n;i++){
//            cout<<vis[i]<<" ";
//        }
//        cout<<endl;
        for(int i=1;i<=n;i++){
             sm+=a[i];
            if(vis[i]){
                printf("%d\n",sm);
                sm=0;
            }
        }
    }
    return 0;
}



