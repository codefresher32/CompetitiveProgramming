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

ll a[100005],b[100005];


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,lo,hi,mid,ans,x,y;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    hi=-1;
    for(int i=1;i<=n;i++){
        cin>>b[i];
        hi=max(hi,a[i]*b[i]);
    }
    lo=1;
    while(lo<=hi){
        mid=(lo+hi)/2;
        x=0;
        for(int i=1;i<=n;i++){
           y=max(0ll,a[i]-(mid/b[i]));
           x+=y;
        }
        if(x<=m){
            ans=mid;
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}

