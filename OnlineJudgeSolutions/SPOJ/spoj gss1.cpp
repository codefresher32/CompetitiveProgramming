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
#define N 50005

struct nd{
    ll sum,maxsum,prefixsum,suffixsum;
}tree[N*4];

nd propagate(nd l,nd r){
    nd res;
    res.sum=l.sum+r.sum;
    res.maxsum=max(l.suffixsum+r.prefixsum,max(l.maxsum,r.maxsum));
    res.prefixsum=max(l.prefixsum,l.sum+r.prefixsum);
    res.suffixsum=max(r.suffixsum,r.sum+l.suffixsum);
    return res;
}


void init(int node,int b,int e){
    ll ar;
    if(b==e){
        scanf("%lld",&ar);
        tree[node].sum=tree[node].maxsum=tree[node].prefixsum=tree[node].suffixsum=ar;
        return ;
    }
    int mid=(b+e)/2;
    init(2*node,b,mid);
    init(2*node+1,mid+1,e);
    tree[node]=propagate(tree[2*node],tree[2*node+1]);
}

nd query(int node,int b,int e,int i,int j){
    if(b>=i&&e<=j) return tree[node];
    int mid=(b+e)/2;
    if(j<=mid) return query(2*node,b,mid,i,j);
    else if(i>mid) return query(2*node+1,mid+1,e,i,j);
    else return propagate(query(2*node,b,mid,i,j),query(2*node+1,mid+1,e,i,j));
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n,q,l,r;
    scanf("%d",&n);
    init(1,1,n);
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&l,&r);
        printf("%lld\n",query(1,1,n,l,r).maxsum);
    }
    return 0;
}

