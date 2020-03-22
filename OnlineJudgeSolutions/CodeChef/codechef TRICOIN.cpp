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


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    ll n,lo,hi,mid,ans,x;
    cin>>t;
    while(t--){
        cin>>n;
        lo=1,ans=-1,hi=n;
        while(lo<=hi){
            mid=(lo+hi)/2;
            x=mid*(mid+1)/2;
            if(x<=n){
                ans=mid;
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

