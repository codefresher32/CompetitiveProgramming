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
#define mod 10
#define ex 1e-7

struct node
{
    ll p,d;
}a[10005];
int n;

ll ck(ll mid)
{
    ll x,cnt=0;
    for(int i=1;i<=n;i++){
        x=abs(mid-a[i].p)*a[i].d;
        cnt+=x;
    }
    return cnt;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    ll x;
    cin>>t;
    while(t--){
        cin>>n;
        ll lo,hi,mid1,mid2;
        lo=INT_MAX,hi=0;
        for(int i=1;i<=n;i++){
            cin>>x;
            a[i].p=x;
            lo=min(lo,x),hi=max(hi,x);
        }
        for(int i=1;i<=n;i++){
            cin>>x;
            a[i].d=x;
        }
        while(hi-lo>3){
            mid1=lo+(hi-lo)/3;
            mid2=hi-(hi-lo)/3;
            if(ck(mid1)>ck(mid2)){
                lo=mid1;
            }
            else hi=mid2;
        }
        ll ans=1e18;
        for(ll i=lo;i<=hi;i++){
            x=ck(i);
            ans=min(ans,x);
        }
        cout<<ans<<endl;
    }

    return 0;
}


/*
3 3 3
5 8 5
11 11 17
14 5 2
*/

