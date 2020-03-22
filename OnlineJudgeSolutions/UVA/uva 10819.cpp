#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>pb_ds;

#define pii pair<ll,ll>
#define pi pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 1000000007
#define pai acos(-1)
//#define mx 1000000000

int m,n,price[105],weight[105],dp[105][10205];

int call(int idx,int cap)
{
    if(cap>m&&m<=1800) return INT_MIN;
    if(cap>m+200) return INT_MIN;
    if(idx>n){
        if(cap>m&&cap<=2000) return INT_MIN;
        return 0;
    }
    int &ret=dp[idx][cap];
    if(ret!=-1) return ret;
    int p,q;
    p=q=0;
    p=weight[idx]+call(idx+1,cap+price[idx]);
    q=call(idx+1,cap);
    return ret=max(p,q);
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    while(cin>>m>>n){
        for(int i=1;i<=n;i++) cin>>price[i]>>weight[i];
        memset(dp,-1,sizeof dp);
        cout<<call(1,0)<<endl;
    }
    return 0;
}
