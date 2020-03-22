#include<iostream>
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pp pop_back


ll ck(ll n)
{
    ll cnt=0;
    while(n){
        cnt+=(n/5);
        n/=5;
    }
    return cnt;
}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,id=0;
    ll q;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&q);
        ll lo,hi,mid,ans=-1;
        lo=1,hi=1e18;
        while(lo<=hi){
            mid=(lo+hi)/2;
            if(ck(mid)==q){
                ans=mid;
                hi=mid-1;
            }
            if(ck(mid)<q) lo=mid+1;
            else hi=mid-1;
        }
        printf("Case %d: ",++id);
        if(ans==-1){
            printf("impossible\n");
        }
        else{
            printf("%lld\n",ans);
        }
    }
}
