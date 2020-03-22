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

ll lg[40];
vector<ll>a,b;

void subset(int id,int n,ll sum,bool f)
{
    if(id>n){
        if(f) a.pb(sum);
        else b.pb(sum);
        return;
    }
    subset(id+1,n,sum+lg[id],f);
    subset(id+1,n,sum,f);
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll q,n,m,l,r,u;
    lg[0]=1;
    for(int i=1;i<=39;i++){
        lg[i]=lg[i-1]*3;
    }
    subset(0,10,0,1);
    subset(11,20,0,0);
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    cin>>q;
    while(q--){
        cin>>n;
        ll ans=1e19;
        int id;
        for(int i=0;i<a.size();i++){
            m=n-a[i];
            id=lower_bound(b.begin(),b.end(),m)-b.begin();
            if(a[i]+b[id]>=n) ans=min(ans,a[i]+b[id]);
            if(a[i]>n) break;
        }
        cout<<ans<<endl;
    }
    return 0;
}

