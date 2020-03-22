#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>pb_ds;

#define pii pair<int,int>
#define pi pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 1000000000
#define pai acos(-1)
#define mx 1000000000
#define N 20005

int n,ar[N];
ll ar2[15][N],tree[15][N];

void update(int idx,int id,ll val){
    for(int i=idx;i<=n;i+=(i&-i)) tree[id][i]=(val+tree[id][i])%mod;
    return ;
}

ll query(int idx,int id){
    ll ret=0;
    for(int i=idx;i>=1;i-=(i&-i)) ret=(ret+tree[id][i])%mod;
    return ret;
}


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    ll id=0;
    int k;
    cin>>n>>k;
    k--;
    for(int i=1;i<=n;i++) cin>>ar[i];
    ll ans=0;
    for(int i=n;i>=1;i--){
        ar2[1][i]=query(ar[i]-1,1);
        ans=(ans+ar2[1][i])%mod;
        update(ar[i],1,1);
    }
    if(k==1) return cout<<ans<<endl,0;
    for(int j=2;j<k;j++){
        for(int i=n;i>=1;i--){
            ar2[j][i]=query(ar[i]-1,j);
            update(ar[i],j,ar2[j-1][i]);
        }
    }
    ans=0;
    for(int i=n;i>=1;i--){
        ans=(ans+query(ar[i]-1,k))%mod;
        update(ar[i],k,ar2[k-1][i]);
    }

    cout<<ans<<endl;
    return 0;
}

