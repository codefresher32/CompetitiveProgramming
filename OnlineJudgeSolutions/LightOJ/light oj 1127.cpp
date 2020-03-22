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

ll a[40];


void subset(int in,int n,ll sum,vector<ll> &s)
{
    if(in==n+1){
        s.pb(sum);
        return ;
    }
    subset(in+1,n,sum+a[in],s);
    subset(in+1,n,sum,s);
}


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,id=0;
    ll w,v;
    scanf("%d",&t);
    while(t--){
        scanf("%d %lld",&n,&w);
        for(int i=1;i<=n;i++){
            scanf("%lld",&a[i]);
        }
        int k=(n-1)/2+1;
        vector<ll>s1,s2;
        subset(1,k,0,s1);
        subset(k+1,n,0,s2);
        int cnt=0;
        sort(s1.begin(),s1.end());
        for(ll x:s2){
           v=w-x;
           int id=upper_bound(s1.begin(),s1.end(),v)-s1.begin();
           if(id==s1.size()) id--;
           if(s1[id]>v) id--;
           id++;
           cnt+=id;
        }
        printf("Case %d: %d\n",++id,cnt);
    }
    return 0;
}


