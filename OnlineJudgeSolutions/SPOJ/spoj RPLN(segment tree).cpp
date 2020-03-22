#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//
//using namespace __gnu_pbds;
using namespace std;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> pb_ds;
typedef long long ll;


#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 10000019


int tree[300005];
int ar[100005];

void build(int node,int s,int e)
{
    if(s==e){
        tree[node]=ar[s];
        return ;
    }
    int mid=(s+e)/2;
    build(2*node,s,mid);
    build(2*node+1,mid+1,e);
    tree[node]=min(tree[2*node],tree[2*node+1]);
}


int query(int node,int s,int e,int l,int r)
{
    if(s>r||e<l) return INT_MAX;
    if(s>=l&&e<=r){
        return  tree[node];
    }
    int mid=(s+e)/2;
    return min(query(2*node,s,mid,l,r),query(2*node+1,mid+1,e,l,r));
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,q,l,r,k,t,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&q);
        for(int i=1;i<=n;i++){
            scanf("%d",&ar[i]);
        }
        build(1,1,n);
        printf("Scenario #%d:\n",++id);
        while(q--){
            scanf("%d %d",&l,&r);
            if(l<=r) printf("%d\n",query(1,1,n,l,r));
        }
    }

    return 0;
}
