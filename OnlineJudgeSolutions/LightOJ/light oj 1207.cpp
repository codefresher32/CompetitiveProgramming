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
#define mx 1000000000

int tree[600005];

void propagate(int node)
{
    if(tree[node]>tree[2*node]) tree[2*node]=tree[node];
    if(tree[node]>tree[2*node+1]) tree[2*node+1]=tree[node];
    return ;
}


void update(int node,int s,int e,int l,int r,int val)
{
    if(s>r||e<l) return ;
    if(s>=l&&e<=r){
        tree[node]=val;
        return ;
    }
    int mid=(s+e)/2;
    if(tree[node]) propagate(node);
    update(2*node,s,mid,l,r,val);
    update(2*node+1,mid+1,e,l,r,val);
}

int query(int node,int s,int e,int idx)
{
    if(s>idx||e<idx) return 0;
    if(s==e&&s==idx) return tree[node];
    int mid=(s+e)/2;
    if(tree[node]) propagate(node);
    return max(query(2*node,s,mid,idx),query(2*node+1,mid+1,e,idx));
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,l,r,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d %d",&l,&r);
            update(1,1,2*n,l,r,i);
        }
        set<int>st;
        int x;
        for(int i=1;i<=2*n;i++){
            x=query(1,1,2*n,i);
            if(x) st.insert(x);
        }
        x=st.size();
        printf("Case %d: %d\n",++id,x);
        memset(tree,0,sizeof tree);
    }
    return 0;
}

