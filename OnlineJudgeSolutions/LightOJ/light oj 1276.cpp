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
#define mx 1000000000000

vector<ll>v,ans;

void gene_rate(int idx,ll num)
{
    if(idx>=v.size()) return ;
    for(int i=idx;i<v.size();i++){
        ll n=num*v[i];
        if(n<=0||n>=mx) return;
        //cout<<num<<" ";
        ans.pb(n);
        gene_rate(i,n);
    }
}

void get(ll n)
{
    if(n>mx) return;
    if(n!=0) v.pb(n);
    get(n*10+4);
    get(n*10+7);
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    get(0);
    sort(v.begin(),v.end());
    gene_rate(0,1);
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()),ans.end());
    int q,id=0;
    scanf("%d",&q);
    while(q--){
        ll a,b,as;
        scanf("%lld %lld",&a,&b);
        int id1,id2;
        id1=upper_bound(ans.begin(),ans.end(),b)-ans.begin();
        id2=lower_bound(ans.begin(),ans.end(),a)-ans.begin();
        as=id1-id2;
        printf("Case %d: %lld\n",++id,as);
    }
    return 0;
}

