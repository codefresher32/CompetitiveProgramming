#include<bits/stdc++.h>

using namespace std;

//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>pb_ds;

typedef long long ll;


#define pii pair<ll,ll>
#define pi pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 1000000007
#define pai acos(-1)

ll n,l,r,x,ans,ar[20];

void subset(int i,ll sum,ll mn,ll mx)
{
    if(i>n){
        if(sum>=l&&sum<=r&&mx-mn>=x) ans++;
        return ;
    }
    ll a,b;
    a=min(mn,ar[i]),b=max(mx,ar[i]);
    subset(i+1,sum+ar[i],a,b);
    subset(i+1,sum,mn,mx);
}


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>l>>r>>x;
    for(int i=1;i<=n;i++) cin>>ar[i];
    subset(1,0,INT_MAX,0);
    cout<<ans<<endl;
    return 0;
}
