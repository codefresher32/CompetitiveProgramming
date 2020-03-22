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
#define mod 1000000007
#define pai acos(-1)
#define mx 1000000000
#define N 1000005

int n;
ll ar[N],ar2[N],tree[2][N];

void update(int idx,int id,ll val){
    for(int i=idx;i<=n;i+=(i&-i)) tree[id][i]+=val;
    return ;
}

ll query(int idx,int id){
    ll ret=0;
    for(int i=idx;i>=1;i-=(i&-i)) ret+=tree[id][i];
    return ret;
}


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    ll id=0;
    cin>>n;
    //vector<ll>vc;
    for(int i=1;i<=n;i++){
        cin>>ar[i];
        //vc.pb(ar[i]);
    }
//    map<ll,ll>mp;
//    sort(vc.begin(),vc.end());
//    for(int i=0;i<vc.size();i++){
//        if(!mp[vc[i]]) mp[vc[i]]=++id;
//    }
//    for(int i=1;i<=n;i++) ar[i]=mp[ar[i]];
    for(int i=n;i>=1;i--){
        ar2[i]=query(ar[i]-1,0);
        update(ar[i],0,1);
    }
    ll ans=0;
    for(int i=n;i>=1;i--){
        ans+=query(ar[i]-1,1);
        update(ar[i],1,ar2[i]);
    }
    cout<<ans<<endl;
    return 0;
}
