#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


#define pii pair<ll,ll>
#define pi pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 10000019

int ar[30005];
pi tree[100005];


void build(int node,int s,int e)
{
    if(s==e){
        tree[node]={ar[s],s};
        return ;
    }
    int mid=(s+e)/2;
    build(2*node,s,mid);
    build(2*node+1,mid+1,e);
    tree[node]=min(tree[2*node],tree[2*node+1]);
}


pi query(int node,int s,int e,int l,int r)
{
    if(s>r||e<l) return {INT_MAX,INT_MAX};
    if(s>=l&&e<=r) return tree[node];
    int mid=(s+e)/2;
    return min(query(2*node,s,mid,l,r),query(2*node+1,mid+1,e,l,r));
}

ll area(int l,int r,int n)
{
    if(r<l) return 0;
    pi q=query(1,1,n,l,r);
    return max((ll)q.F*(r-l+1),max((ll)area(l,q.S-1,n),(ll)area(q.S+1,r,n)));
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,m,q,l,r,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&ar[i]);
        }
        build(1,1,n);
        printf("Case %d: %lld\n",++id,area(1,n,n));
    }
    return 0;
}

