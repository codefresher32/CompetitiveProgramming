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
#define N 200005

int n,m;
ll tree[N];

void update(int idx){
    for(int i=idx;i<=n+m;i+=(i&-i)) tree[i]+=1;
    return;
}

ll query(int idx){
    ll ret=0;
    for(int i=idx;i>=1;i-=(i&-i)) ret+=tree[i];
    return ret;
}

void clr(int n){
    for(int i=1;i<=n;i++) tree[i]=0;
    return ;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,l,r,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        clr(n+m);
        vector<pi>vc,a;
        for(int i=1;i<=n;i++){
            scanf("%d %d",&l,&r);
            vc.pb({l,r});
        }
        for(int i=1;i<=m;i++){
            scanf("%d %d",&l,&r);
            vc.pb({l,r});
        }
        sort(vc.rbegin(),vc.rend());
        ll ans=0;
        for(int i=0;i<vc.size();i++){
            ans+=query(vc[i].S);
            update(vc[i].S);
        }
        printf("Case %d: %lld\n",++id,ans);
    }
    return 0;
}
